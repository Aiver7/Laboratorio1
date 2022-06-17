#include <iostream>

using namespace std;

int main()
{
    int i, n, divisor,a=1,aux;
    cout << "Ingrese el numero primo: ";cin>>n;cout<<endl;
    aux=n;
    for (i=2; n>0; i++)
    {
        for (divisor=2; divisor<i && i%divisor!=0; divisor++);
        if (divisor==i)
        {
            if (i!=2)
            a= i;
            n--;
        }
    }
    cout<<"El primo numero "<<aux<<" es: "<<a<<endl;
}
