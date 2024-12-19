#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    double num1 = 5.5;
    double num2 = 3.2;

    std::cout << "Addition of " << num1 << " and " << num2 << ": " 
              << calc.Add(num1, num2) << std::endl;

    std::cout << "Subtraction of " << num1 << " and " << num2 << ": " 
              << calc.Sub(num1, num2) << std::endl;

    return 0;
}
