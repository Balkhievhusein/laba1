
#include <iostream>
#include <cmath> 
#include <conio.h> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, V, p;
    cout << "a,b,c\n";
    cin >> a;
    cin >> b;
    cin >> c;
    V = a * b * c;
    cout << "Объем равен " << V;
    p = 2 * (a * b + b * c + a * c);
    cout << " Площадь поверхности равен " << p;

    return 0;
}
