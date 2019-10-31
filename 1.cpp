//Este código halla el diámetro, el prímetro y el área correspondientes a un radio otorgado por el usuario.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración de variables

float r;
float pi = 3.1416;

int main()
{
    cout<<"Ingrese el radio de un círculo: ";
    cin >> r;
    cout<<"El diametro del círculo: "<< 2*r << endl;
    cout<<"El perímetro del círculo: "<< 2*pi*r << endl;
    cout<<"El área del círculo: "<< pi*r*r << endl;
    
    return 0;
}

//Fin.