#include <iostream>

int main(){
    float firstInteger, secondInteger;

    std::cout << "Type the first number: ";
    std::cin >> firstInteger;
    std::cout << "Type the second number: ";
    std::cin >> secondInteger;

    signed sum, mult, sub;
    double div;

    sum = firstInteger + secondInteger;
    mult = firstInteger * secondInteger;
    sub = firstInteger - secondInteger;
    div = firstInteger / secondInteger; 
    
    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The multiplication is: " << mult << std::endl;
    std::cout << "The subtraction is: " << sub << std::endl;
    std::cout << "The division is: " << div << std::endl;
    
    return 1;
}