 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x1, x2, x3, y1, y2, y3, a, b, c, P, p, S;
    cout << "vvedite x1, y1" << "\n";
    cin >> x1 >> y1;
    cout << "vvedite x2, y2" << "\n";
    cin >> x2 >> y2;
    cout << "vvedite x3, y3" << "\n";
    cin >> x3 >> y3;
    a = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    b = sqrt(((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));
    c = sqrt(((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3)));
    P = a + b + c;
    p = P / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "perimetr = " << P << "\n" << "ploshad = " << S;

}

 