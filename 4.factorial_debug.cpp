#include <iostream>

int factorial(int n) {
    
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number = 6;
    int fact = factorial(number);
    std::cout << "Factorial of " << number << " is: " << fact << std::endl;

    return 0;
}
