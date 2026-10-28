#include <iostream>
// i - Input
// o - Output
// stream - flujo de datos o canal de comunication
//#include <string>

void saludarARegina() {
    std::cout << "Hola Regina!" << std::endl;
    std::cout << "Bienvenida a la clase de C++\n";
}

void saludarAOtraPersona() {
    std::string nombre;
    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;
    // solo leo una palabra, y si quiero leer varias
    // tengo que poner más variables o usar getline()

    std::cout << "Hola " << nombre << "!" << std::endl;
}

int main () {
    // Your code here
    saludarARegina();
    saludarAOtraPersona();
    return 0; //termino el codgio exitosamente 
}