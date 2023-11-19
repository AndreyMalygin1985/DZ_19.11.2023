#include<iostream>
#include<Windows.h>
#include<iomanip>
#include"Fraction.h"

using namespace std;

// Создайте класс Дробь (или используйте уже ранее созданный вами).
// Используя перегрузку операторов реализуйте для него арифметические
// операции для работы с дробями (операции + , -, *, / ).

int main()
{
	SetConsoleOutputCP(1251);

	uint32_t chislit{}, znamen{}, choice{}, numb{};
	cout << "Введите числитель:" << endl;
	cin >> chislit;
	cout << "Введите знаменатель:" << endl;
	cin >> znamen;
	cout << endl;

	Fraction fraction(chislit, znamen);
	fraction.show();

	do {
		cout << "Выберите операцию с дробью:" << endl;
		cout << "[1] - Прибавить к дроби число." << endl;
		cout << "[2] - Вычесть из дроби число." << endl;
		cout << "[3] - Умножить дробь на число." << endl;
		cout << "[4] - Разделить дробь на число." << endl;
		cout << "Введите номер действия: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			cout << "Введите число для сложения:  ";
			cin >> numb;
			fraction.operator+(numb);
			fraction.show();
			break;
		case 2:
			cout << "Введите число для вычитания:  ";
			cin >> numb;
			fraction.operator-(numb);
			fraction.show();
			break;
		case 3:
			cout << "Введите число для умножения:  ";
			cin >> numb;
			fraction.operator*(numb);
			fraction.show();
			break;
		case 4:
			cout << "Введите число для деления:  ";
			cin >> numb;
			fraction.operator/(numb);
			fraction.show();
			break;
		default:
			cout << "Нет такой операции!" << endl;
			break;
		}
	} while (choice != 0);

	return 0;
}