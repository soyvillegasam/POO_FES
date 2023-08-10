#include <iostream>
using namespace std;
class Hola{
  private:
    int x;
    int y;
  public:
    Hola(int otro_x, int otro_y){
     x = otro_x;
     y= otro_y;
   };
void imprimePunto(){
   cout <<"x = " <<x;   
   cout <<"y = " <<y;
   }
};  //cierre de Clase
  
int main(){
  int varx;
  int vary;   
  Hola punto1(100,200); //Define punto1
  punto1.imprimePunto();
  Hola punto2(50,300);    //Define punto2
  punto2.imprimePunto();
  cout<<"\nDar x: ";
  cin>>varx;
  cout<<"\nDar y: ";
  cin>>vary;
  Hola punto3(varx,vary);   //Crea punto3
  punto3.imprimePunto();
}