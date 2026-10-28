#pragma once
#include <iostream>

void saludarARegina() {
    std::cout << "Hola Regina!" << std::endl;
    std::cout << "Bienvenida a la clase de C++\n";
}

void saludarAOtraPersona(std::string nombre, std::string etapaDelDia = "Sin Etapa") {
    std::cout << "Hola " << nombre << "!" << std::endl;
    std::cout << "Buenas, " << etapaDelDia << "!" << std::endl;
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