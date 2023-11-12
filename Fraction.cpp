#include "Fraction.h"

using namespace std;

const Fraction operator+(const Fraction& set, uint32_t numb)
{
	return Fraction::addition(set, numb);
}

const Fraction operator+(uint32_t numb, const Fraction& set)
{
	return Fraction::addition(set, numb);
}

void Fraction::inputFruction(uint32_t chislit, uint32_t znamen) {
	if (znamen == 0) {
		cout << "Ноль не может быть знаменателем! " << endl;
	}
	else {
		numerator = chislit;
		denominator = znamen;
	}
}

void Fraction::show() {
	cout << "Получившиеся дробь: " << numerator << "/" << denominator << endl << endl;
}

const Fraction::addition(/*const Fraction& set,*/ uint32_t numb) {
	numerator += (numb * denominator);
	show();
}
//Fraction::addition(uint32_t numb) {
//	numerator += (numb * denominator);
//	show();
//}

void Fraction::subtraction(uint32_t numb) {
	numerator -= (numb * denominator);
	show();
}

void Fraction::multiplication(uint32_t numb) {
	numerator *= numb;
	show();
}

void Fraction::division(uint32_t numb) {
	denominator *= numb;
	show();
}