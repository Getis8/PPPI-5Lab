#include <iostream>

class Calculator {
public:

    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }

};

int main() {
    Calculator calc;
    std::cout << "Calculator App Started" << std::endl;

    return 0;
}

