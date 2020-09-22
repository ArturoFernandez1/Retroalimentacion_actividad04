#include <iostream>

const int TAMANO = 5;

void pedirDatosArregloEnteros();
void pedirDatosArregloCaracteres();
void mostrar(int n, char arreglo[]);
void pedirDatosPersonajes();

struct Personaje
{
    std::string nombre;
    std::string tipo;
    unsigned int fuerza;
    unsigned int salud;
};

void pedirDatosArregloEnteros()
{

    int numeros[TAMANO], suma = 0;

    for (int i = 0; i < TAMANO; i++)
    {

        std::cout << i + 1 << ".- Introduce un numero entero: ";
        std::cin >> numeros[i];
        suma += numeros[i];
    }
    std::cout << std::endl;
    for (int i = 0; i < TAMANO; i++)
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

void pedirDatosPersonajes()
{

    Personaje personajes[TAMANO];
    int i = 0;
    char bandera = 'y';

    while (i < TAMANO && (bandera == 'y' || bandera == 'Y'))
    {

        std::cout << i + 1 << ".- Ingresa el nombre: ";
        std::getline(std::cin, personajes[i].nombre);

        std::cout << i + 1 << ".- Ingresa el tipo: ";
        std::getline(std::cin, personajes[i].tipo);

        std::cout << i + 1 << ".- Ingresa la salud: ";
        std::cin >> personajes[i].salud;

        std::cout << i + 1 << ".- Ingresa la fuerza: ";
        std::cin >> personajes[i].fuerza;

        if (i < (TAMANO - 1))
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
    }
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
        default:
            break;
        }

    } while (opcion != '0');

    return 0;
}
