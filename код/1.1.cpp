
#include <iostream>
#include<conio.h>
#include<cmath>
#include<algorithm>
using namespace std; 

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, min, max;
    cout << "Введите 2 числа\n";
    cin >> a;
    cin >> b;
    if (a > 0) {
        if (a > b) min = b;
        else min = a;
        cout << min;
    }
    if (a <= 0) {
        if (a <= b) max = b;
        else max = a;
        cout << max;
    }

        return 0;
}

