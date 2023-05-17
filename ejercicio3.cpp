#include <iostream>

using namespace std;

int main(){
    int cantidad;
    double precio, aPagar;
    
    cout << "Ingrese la cantidad que está comprando: ";
    cin >> cantidad;
    
    cout << "Ingrese el precio del articulo: ";
    cin >> precio;
    
    aPagar = cantidad * precio;
    
    cout << "La cantidad a pagar es: $" << aPagar;
}