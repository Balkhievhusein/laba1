
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\nВведите номер ноты: ";
	int n;
	cin >> n;

	switch (n)
	{
	case 1:cout << "\nДо"; break;
	case 2:cout << "\nРе"; break;
	case 3:cout << "\nМи"; break;
	case 4:cout << "\nФа"; break;
	case 5:cout << "\nСоль"; break;
	case 6:cout << "\nЛя"; break;
	case 7:cout << "\nСи"; break;
	default: cout << "\nНеверный ввод\n"; break;
	}
    
}


