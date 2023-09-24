#include <iostream>
using namespace std;

class brazoRobotico {
    private:
        double x;
        double y;
        double z;
        bool obj;

    public:
        brazoRobotico();
        double getx();
        double getz();
        double gety();
        bool getObj();
        void coger();
        void soltar();
        void mover(double x,double y,double z);

};