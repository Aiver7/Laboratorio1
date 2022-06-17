#include <iostream>

using namespace std;

int main()
{
    int c,a,b,suma,aux1,aux2,suma_a=0,suma_b=0;
    cout<<"Escriba un primer numero (a): ",cin>>a;
    cout<<"Escriba un segundo numero (b): ",cin>>b;
    cout<<"Escriba un tercer numero (c): ",cin>>c;

    for(aux1=a; aux1<c; aux1=aux1+a)
    {
        suma_a=suma_a + aux1;
    }
    for(aux2=b; aux2<c; aux2=aux2+b)
    {
        suma_b=suma_b + aux2;
    }

    suma=suma_a+suma_b;
    cout<<"suma de multiplos de a+b = "<<suma<<endl;


        return 0;
                         }

