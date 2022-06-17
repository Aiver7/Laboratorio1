#include <iostream>

using namespace std;

int fact(int);

int main(){
    unsigned int n;//sumas para aproximación
    cout<<"Escriba un numero: ";
    cin>>n;
    double e=0;
    for(unsigned int i=0;i<n;i++){
        double u=fact(i);
        e+=1/u;
    }
    cout<<"\nel valor aproximado de e en base a su numero "<<n<<" es "<<e<<endl;
}

int fact(int f){
    int factorial=f;
    if(factorial>1){
        factorial=f*fact(f-1);
        return factorial;
    }
    else{
        return 1;
    }
}
