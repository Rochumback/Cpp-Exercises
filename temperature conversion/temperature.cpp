#include <iostream>

int main(){
    
    char answer;
    double number, converted;

    std::cout << "Please type number to convert (only numbers): ";
    std::cin >> number;

    std::cout << "Celsius -> Fahrenheit [F] \nFahrenheit -> Celsius [C] \nHow to convert?" << std::endl;
    std::cin >> answer;

    if(answer == 'f'){
        answer = 'F';
    }

    if(answer == 'c'){
        answer = 'C';
    }


    switch (answer)
    {
    case 'F':

        converted = (number * 9/5) + 32;
        break;
    
    case 'C':

        converted = (number - 32) * 5/9;
        break;
    default:
        std::cout << "Invalid option." << std::endl;
        return 0;
    }

    std::cout << "Here's your number converted: " << converted << std::endl;

    return 0;
}