#include <iostream>

class Calculator {
public:
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
};

int main() {
    Calculator calc;
    std::cout << "Calculator App Started" << std::endl;
    std::cout << "5 + 3 = " << calc.add(5, 3) << std::endl;

    return 0;
}

