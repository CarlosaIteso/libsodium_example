// ConsoleApplication.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <sodium.h>

int main(void)
{   

    if (sodium_init() < 0) {
        /* panic! the library couldn't be initialized; it is not safe to use */
        std::cout << "sodium lib no se ha inicializado correctamente\n";

        return 0;
    }

    std::cout << "sodium lib se ha inicializado correctamente\n";

    uint32_t data;

    std::cout << "generando data...\n";

    data = randombytes_random();

    printf("data: %x", data);

    return 1;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
