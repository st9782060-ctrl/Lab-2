#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    
    cout << "Enter point coordinates (x, y): ";
    cin >> x >> y;
    
    bool inTopTriangle = (y >= 0) && (y <= 1.0 - abs(x));
    bool inBottomTriangle = (y < 0) && (x >= 0) && (y >= x - 1.0);
    
    if (inTopTriangle || inBottomTriangle) {
        cout << "The point (" << x << "; " << y << ") falls into the shaded area." << endl;
    } else {
        cout << "The point (" << x << "; " << y << ") does NOT fall into the shaded area." << endl;
    }
    
    return 0;
}
