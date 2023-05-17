#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "Ingrese el tercero numero: ";
    cin >> num3;
    
    if(num1 > num2 && num1 > num3){
        cout << "El primer numero es mayor";
    }else if(num2 > num1 && num2 > num3){
        cout << "El segundo numero es mayor";
    }else if(num3 > num1 && num3 > num2){
        cout << "El tercer numero es mayor";
    }
}