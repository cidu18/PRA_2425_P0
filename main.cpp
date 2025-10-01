#include <iostream>
#include "brazorobot.h"

int main() {
       Brazorobot robot;

       std::cout << "Posición inicial: ("
              << robot.getX() << ", "
              << robot.getY() << ", "
              << robot.getZ() << ")" << std::endl;

       robot.mover(5, 10, 3);
    std::cout << "Nueva posición: ("
              << robot.getX() << ", "
              << robot.getY() << ", "
              << robot.getZ() << ")" << std::endl;

       robot.soltar();

    // Coger objeto
    robot.coger();
    std::cout << "Objeto o no " 
              << (robot.getHoldon() ? "Sí" : "No") << std::endl;

    // Soltar objeto
    robot.soltar();
    std::cout << "Objeto o no " 
              << (robot.getHoldon() ? "Sí" : "No") << std::endl;

    return 0;
}
