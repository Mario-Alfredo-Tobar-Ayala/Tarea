#include<iostream>

using namespace std;

int main(){

 int r=0, pi=3.1416, resultado;
  

 cout<<"Area par o impar \n"; 
cout<<"Digite el radio: "; cin>>r;

resultado = pi*r*r;

if (resultado%2 == 0)
{
    cout<<"El area es par ";
}

else {

    cout<<"El area es impar ";
}
    return 0;
}