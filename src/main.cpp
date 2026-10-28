#include <iostream>
// i - Input
// o - Output
// stream - flujo de datos o canal de comunication
#include "Saludos.h"

int main () {
    // Your code here
    const int tamanoArreglo = 3;
    std::string nombres[tamanoArreglo];

    nombres[0] = capturarNombre("Ingresa el nombre de la primera persona: ");
    nombres[1] = capturarNombre("Ingresa el nombre de la segunda persona: ");
    nombres[2] = capturarNombre("Ingresa el nombre de la tercera persona: ");

    for (int i = 0; i < tamanoArreglo; i++) {
        saludarAOtraPersona(nombres[i], "días");
    }

    return 0; //termino el codgio exitosamente 
}