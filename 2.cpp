// Este código verifica si 3 números pueden ser las medidas de los catetos de un triángulo rectángulo.

#include <iostream>
#include <cmath>
using namespace std;

//Declaración variables.

int a;
int b;
int c;

int main()
{
    cout<<"Ingrese el primer cateto: ";
    cin >> a;
    
    cout<<"Ingrese el segundo cateto: ";
    cin >> b;
    
    cout<<"Ingrese la hipotenusa: ";
    cin >> c;
    
    if(a*a + b*b == c*c){
        cout<<"Los números pueden representar los lados de un triángulo rectángulo."<<endl;
    }
    
    else{
        cout<<"Los números no pueden representar los lados de un triángulo rectángulo."<<endl;
    }
    return 0;
}