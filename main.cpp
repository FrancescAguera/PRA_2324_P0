#include <iostream>
#include "brazo.h"
using namespace std;

int main() {
    brazoRobotico brazo1;
    cout << "Coordenadas del robot:";
    cout << brazo1.getx() << "\n" <<  brazo1.gety() << "\n" << brazo1.getz() << "\n" << "Objeto:" << brazo1.getObj() << "\n";
    brazo1.mover(5,5,5);
    brazo1.coger();
    cout << "Coordenadas del robot:";
    cout << brazo1.getx() << "\n" <<  brazo1.gety() << "\n" << brazo1.getz() << "\n" << "Objeto:" << brazo1.getObj() << "\n";
    return 0;
}
