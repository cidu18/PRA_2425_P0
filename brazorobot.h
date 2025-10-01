#include <iostream>

class Brazorobot {
private: 
  double x, y, z;
  bool hold_on = false;
public: 
  Brazorobot();
  double getX();
  double getY();
  double getZ();
  void coger();
  void soltar();
  void mover(double x, double y, double z);
  bool getHoldon();
};
