#include <iostream>

int main() {
    double num1, num2;

    // Taking user input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Performing basic arithmetic operations
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;

    // Handling division safely
    if (num2 != 0) {
        std::cout << "Quotient: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }

    return 0;
}
