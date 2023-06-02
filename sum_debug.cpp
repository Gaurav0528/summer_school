#include <iostream>

int calculateSum(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int a = 5;
    int b = 10;
    int c = 3;
    int d = 7;

    a++;
    b *= c;
    bool isGreater = (a > d);
    d = a + c;

    for (int i = 0; i < 5; i++) {
        a++;
        b--;
        c *= 2;
        d += 3;
    }

    int sum = calculateSum(a, d);

    if (sum >= 100 && d < 20) {
        std::cout << "Both conditions are true." << std::endl;
    }

    return 0;
}