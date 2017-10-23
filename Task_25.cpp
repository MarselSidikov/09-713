#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, eps;
    cin >> x >> eps;

    double yNext;

    if (x >= 1) {
        y = x / 3;
    } else if (x < 1) {
        y = x;
    }

    yNext = y - (1 / 3.0) * (y - x / (y * y));

    while (fabs(yNext - y) > eps) {
        y = yNext;
        yNext = y - (1 / 3.0) * (y - x / (y * y));
        cout << yNext << endl;
    }
}