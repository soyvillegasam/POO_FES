#include <iostream>
using namespace std;
class Linea{  //Definicion de clase
    private:
    int x1, y1;
    int x2, y2;
    public:
    Linea(int a, int b, int c, int d){
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }

    void imprime(){  //Funcion que imprime
        cout<<"\nLa Linea pasa por el punto1: ("<<x1<<", "<<y1<<")";
        cout<<"\ny por el punto2:("<<x2<<", "<<y2<<")";
    }
}; //cierra clase

int main(){
    Linea l1(100, 100, 300, 300);
    Linea l2(80, 100, 80, 100);
    l1.imprime();
    l2.imprime();
}