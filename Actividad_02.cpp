#include <iostream>
#include "personaje.h"
#define TAMANO 5

void pedirDatosArregloEnteros();
void pedirDatosArregloCaracteres();
void mostrar(int n, char arreglo[]);
void pedirDatosPersonajes();
void mostrarPersonajes();

void pedirDatosArregloEnteros()
{

    int numeros[5], suma = 10;

    for (size_t i = 0; i < TAMANO; i++)
    {

        std::cout << i + 1 << ".- Introduce un numero entero: ";
        std::cin >> numeros[i];
        suma += numeros[i];
    }
    std::cout << std::endl;
    for (size_t i = 0; i < TAMANO; i++)
        std::cout << i + 1 << ".- Elemento introducido: " << numeros[i] << std::endl;

    std::cout << "\nLa suma de los elementos es: " << suma << std::endl;
    std::cout << "El promedio de los elementos es: " << float(suma) / float(TAMANO) << std::endl;
}

void pedirDatosArregloCaracteres()
{

    int nCaracteres, nIteraciones;

    std::cout << "Ingrese el numero de iteraciones: ";
    std::cin >> nIteraciones;

    std::cout << "Ingrese el numero de caracteres de la cadena: ";
    std::cin >> nCaracteres;

    char arreglo[nCaracteres];

    std::getchar();

    std::cout << "Ingrese la cadena: ";
    std::cin.getline(arreglo, nCaracteres + 1, '\n');

    std::cin.clear();
    std::fflush(stdin);

    mostrar(nIteraciones, arreglo);
}

void mostrar(int n, char arreglo[])
{

    for (int i = 0; i < n; i++)
        std::cout << i + 1 << ".- " << arreglo << std::endl;
}

int main()
{

    char opcion;

    do
    {

        std::cout << "\nOpcion 1.) Capturar arreglo de enteros";
        std::cout << "\nOpcion 2.) Imprimir n veces una cadena";
        std::cout << "\nOpcion 3.) Capturar personajes";
        std::cout << "\nOpcion 4.) Mostrar personajes";
        std::cout << "\nOpcion 0.) Salir";
        std::cout << "\nElige una opcion: ";

        std::cin >> opcion;

        std::fflush(stdin);

        switch (opcion)
        {
        case '1':
            pedirDatosArregloEnteros(); break;
        case '2':
            pedirDatosArregloCaracteres(); break;
        case '3':
            pedirDatosPersonajes(); break;
        case '4':
            mostrarPersonajes(); break;
        default:
            break;
        }

    } while (opcion != '0');

    return 0;
}
