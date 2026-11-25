#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, a, b, Y;
    
    cout << "Enter x, a, b: ";
    cin >> x >> a >> b;
    
    if (b == 0) {
        cout << "Error: division by zero (b cannot be 0)." << endl;
        return 1;
    }
    
    if (x < 0) {
        Y = pow(x, 3) + (a / b);
    } else if (x == 0) {
        Y = sin(a / b) + 4 * b * x;
    } else {
        Y = sqrt(x) + (a / b);
    }
    
    cout << "Y = " << Y << endl;
    
    return 0;
}
