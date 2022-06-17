#include <iostream>

using namespace std;

int main()
{
        int b50000, b20000, b10000, b5000, b2000, b1000;
        int m500, m200, m100, m50, resto, cdinero;
        cout << "Ingrese la cantidad de dinero ";
        cin >> cdinero;
        resto=cdinero;
        b50000=(resto-(resto%50000))/50000;
        resto=resto%50000;
        b20000=(resto-resto%20000)/20000;
        resto=resto%20000;
        b10000=(resto-resto%10000)/10000;
        resto=resto%10000;
        b5000=(resto-resto%5000)/5000;
        resto=resto%5000;
        b2000=(resto-resto%2000)/2000;
        resto=resto%2000;
        b1000=(resto-resto%1000)/1000;
        resto=resto%1000;
        m500=(resto-resto%500)/500;
        resto=resto%500;
        m200=(resto-resto%200)/200;
        resto=resto%200;
        m100=(resto-resto%100)/100;
        resto=resto%100;
        m50=(resto-resto%50)/50;
        resto=resto%50;
        cout << "Cantidad de billetes de 50.000: " << b50000 << endl;
        cout << "Cantidad de billetes de 20.000: " << b20000 << endl;
        cout << "Cantidad de billetes de 10.000: " << b10000 << endl;
        cout << "Cantidad de billetes de 5.000: " << b5000 << endl;
        cout << "Cantidad de billetes de 2.000: " << b2000 << endl;
        cout << "Cantidad de billetes de 1.000: " << b1000 << endl;
        cout << "Cantidad de monedas de 500: " << m500 << endl;
        cout << "Cantidad de monedas de 200: " << m200 << endl;
        cout << "Cantidad de monedas de 100: " << m100 << endl;
        cout << "Cantidad de monedas de 50: " << m50 << endl;
        cout << "Cantidad faltante: " << resto << endl;
        cout << endl;
        system ("pause");
        return EXIT_SUCCESS;
}
