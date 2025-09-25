#include <iostream>
#include "math.h"

int main(){
    double a {};
    double b {};
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> b;
    std::cout << "Added: " << add(a, b) << std::endl;
    std::cout << "Multiplied: " << multiply(a, b) << std::endl;
}