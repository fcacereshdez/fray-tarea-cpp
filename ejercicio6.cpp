#include <iostream>

using namespace std;

int main(){

    string numero;
    int cantidad;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    cantidad = numero.length();
    
    if(cantidad == 3){
        cout << "La cifra contiene tres numeros";
    }else if(cantidad > 3){
        cout << "La cifra tiene más de tres numeros";
    }else{
        cout << "Tiene menos de tres cifras";
    }
    
}