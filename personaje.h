#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#define TAM 5

unsigned int cont = 0;

struct Personaje
{
    std::string nombre;
    std::string tipo;
    float fuerza;
    unsigned int salud;
} personajes[TAM];

void pedirDatosPersonajes()
{

    int i = 0;
    char bandera = 'y';

    while (i < TAM && (bandera == 'y' || bandera == 'Y'))
    {

        std::cout << i + 1 << ".- Ingresa el nombre: ";
        std::getline(std::cin, personajes[i].nombre);

        std::cout << i + 1 << ".- Ingresa el tipo: ";
        std::getline(std::cin, personajes[i].tipo);

        std::cout << i + 1 << ".- Ingresa la salud: ";
        std::cin >> personajes[i].salud;

        std::cout << i + 1 << ".- Ingresa la fuerza: ";
        std::cin >> personajes[i].fuerza;

        if (i < (TAM - 1))
        {

            std::printf("%cDesea agregar el personaje N.%c %i? y/n: ", 168, 248, i + 2);
            std::cin >> bandera;

            if (bandera == 'y' || bandera == 'Y')
            {
                std::getchar();
            }

            std::cout << "\n";
        }

        i++;
        cont++;
    }
}

void mostrarPersonajes()
{
    for (size_t i = 0; i < cont; i++)
    {
        std::cout << "Nombre: " << personajes[i].nombre << std::endl;
        std::cout << "Tipo: " << personajes[i].tipo << std::endl;
        std::cout << "Salud: " << personajes[i].salud << std::endl;
        std::cout << "Fuerza: " << personajes[i].fuerza << std::endl;
        std::cout << std::endl;
    }
}

#endif