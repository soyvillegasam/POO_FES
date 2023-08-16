#include <iostream>

using namespace std;

class Elipse{
    private:
        int eje_l, eje_c, x, y;
    public:
        Elipse(int a, int b, int c, int d){
            eje_l = a;
            eje_c = b;
            x = c;
            y = d;
        }

    void imprime(){
        cout<<"\nEl eje largo es: "<<eje_l<<", \nEl eje corto: "<<eje_c;
        cout<<"\nEl centro esta en: "<<x<<", "<<y;
    }
};

int main(){
    Elipse e1(50,20,5,10);
    e1.imprime();

    return 0;
}
