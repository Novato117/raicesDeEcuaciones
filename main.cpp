#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminante,parteReal;
    cout << "Ingrese los coeficientes a, b , c: ";
    cout << " ax^2+b^x+c ";
    cin >> a >> b >> c;
    discriminante = b*b - 4*a*c;

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
        cout << "Raices." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminante == 0) {
        cout << "Raices son." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    return 0;
}
