#include "brazo.h"
#include <iostream>

brazoRobotico::brazoRobotico() {
    x = 0;
    y = 0;
    z = 0;
    obj = false;
}
void brazoRobotico::mover(double xNew, double yNew, double zNew) {
    x = xNew;
    y = yNew;
    z = zNew;
}
double brazoRobotico::getx() {
    return x;
}
double brazoRobotico::gety() {
    return y;
}
double brazoRobotico::getz() {
    return z;
}
bool brazoRobotico::getObj() {
    return obj;
}
void brazoRobotico::coger() {
    obj = true;
}
void brazoRobotico::soltar() {
    obj = false;
}
