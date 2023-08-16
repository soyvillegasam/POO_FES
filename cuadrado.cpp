#include <iostream>

using namespace std;

class Cuadrado{
    private:
        int x, y, l;
    public:
        Cuadrado(int a=20, int b=40, int c=30){
            x = a;
            y = b;
            l = c;
        }

    void imprime(){
        cout<<"\nEl primer vertice pasa por el punt: "<<x<<", "<<y;
        cout<<"\nEl segundo vertice: "<<l;
    }
};

int main(){
    Cuadrado c1(50,20,5);
    c1.imprime();

    return 0;

}
