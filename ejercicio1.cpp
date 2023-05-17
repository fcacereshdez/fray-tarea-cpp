#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3, num4, suma, multiplicacion;
    
    cout << "Ingrese el valor del primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el valor del segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese el valor del tercero numero: ";
    cin >> num3;
    
    cout << "Ingrese el valor del cuarto numero: ";
    cin >> num4;
    
    suma = num1 + num2;
    multiplicacion = num3 * num4;
    
    cout << "La suma de los dos primeros es: " << suma << "\n";
    cout << "La multiplicacion de los otros dos es: " << multiplicacion;
}