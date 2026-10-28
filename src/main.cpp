#include <iostream>
// i - Input
// o - Output
// stream - flujo de datos o canal de comunication
//#include <string>

void saludarARegina() {
    std::cout << "Hola Regina!" << std::endl;
    std::cout << "Bienvenida a la clase de C++\n";
}

void saludarAOtraPersona(std::string nombre) {
    std::cout << "Hola " << nombre << "!" << std::endl;
}

std::string capturarNombre(std::string mensaje) {
    std::string nombre;
    std::cout << mensaje;
    // cin no funciona con espacios, por eso se usa getline
    // std::cin >> nombre;
    // en su lugar, implementamos getline
    std::getline(std::cin, nombre);
    return nombre;
}

int main () {
    // Your code here
    const int tamanoArreglo = 3;
    std::string nombres[tamanoArreglo];
    nombres[0] = capturarNombre("Ingresa el nombre de la primera persona: ");
    nombres[1] = capturarNombre("Ingresa el nombre de la segunda persona: ");
    nombres[2] = capturarNombre("Ingresa el nombre de la tercera persona: ");

    for (int i = 0; i < tamanoArreglo; i++) {
        saludarAOtraPersona(nombres[i]);
    }

    return 0; //termino el codgio exitosamente 
}