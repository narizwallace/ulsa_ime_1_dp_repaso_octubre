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
    std::cin >> nombre;
    return nombre;
}

int main () {
    // Your code here
    std::string nombre = capturarNombre("Ingrese su nombre: ");
    saludarAOtraPersona(nombre);

    return 0; //termino el codgio exitosamente 
}