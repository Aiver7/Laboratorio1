#include <iostream>

using namespace std;

int main()
{
    int num1, num2,min, tiempot,hr=0;

    cout<<"Escriba la hora: ";
    cin>>num1;
    if(num1<100 & num1>2400){
        cout<<"El numero es invalido";}
    cout<<"Escriba el tiempo de duracion: ";
    cin>>num2;
    if(num2<100 & num2>2400){
        cout<<"El numero es invalido";}

    tiempot=num1+num2;
    min=tiempot%100;
    hr=tiempot/100;
    if(min>=60){
       hr=hr+1;
       min=min-60;
    }

    cout<<"La hora es: "<<hr<<min <<endl;




}
