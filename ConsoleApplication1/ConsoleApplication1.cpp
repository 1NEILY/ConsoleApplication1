 
#include <iostream>
using namespace std;

int main()
{
    double x, y, a, b, c, S1, S2, S3, Sd;
    cin >> a >> b >> c;
    cin >> x >> y;
    S1 = a * b;
    S2 = c * b;
    S3 = a * c;
    Sd = x * y;
    if (Sd >= S1 || Sd >= S2 || Sd >= S3) {
        cout << "Vlezaet";
    }
    else {
        cout << "Ne vlezaet";
    }
}

 