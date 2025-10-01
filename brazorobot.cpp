#include "brazorobot.h"
#include <iostream>
Brazorobot::Brazorobot() {

this -> x=0;
this -> y=0;
this -> z=0;
this -> hold_on = false;

}

double Brazorobot::getX(){
  return this -> x;
}
double Brazorobot::getY(){
  return this -> y;
}
double Brazorobot::getZ(){
  return this -> z;
}

bool Brazorobot::getHoldon(){
  return this-> hold_on; 
}

void Brazorobot::coger(){
  if(this-> hold_on)
      std::cout << "No hay objeto" << "\n";
  else this-> hold_on = true;
}
void Brazorobot::soltar(){
  if (!this -> hold_on )
      std::cout << "Se puede soltar" << "\n";
  else std::cout <<"NO hay nada para soltar" << "\n";
}
void Brazorobot::mover(double x, double y, double z){
  this-> x = x+ 23.5;
  this-> y = y+ 23.5;
  this-> z = z+ 23.5;
}
