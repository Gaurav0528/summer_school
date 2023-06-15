#include <iostream>
using namespace std;
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

    for (int i = 0; i < 3; i++) {
        a++;
        b--;
        c *= 2;
        d += 3;
    }

    int sum = calculateSum(1, 4);

    if (sum >= 100 && d < 20) {
        cout << "Both conditions are true." <<endl;
    }

    return 0;
}
