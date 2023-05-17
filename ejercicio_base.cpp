/* Incluimos la libreria a usar */
#include <iostream>


int main(){
    
    /* definimos variables */
    int num1, num2, sum;
    
    std::cout << "Ingrese el primer numero";
    std::cin >> num1;
    
    std::cout << "Ingrese el segundo numero";
    std::cin >> num2;
    
    sum = num1 + num2;
    
    std::cout << "El resultado es: " << sum;

    return 0;
}