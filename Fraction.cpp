#include "Fraction.h"
using namespace std;

Fraction::Fraction(uint32_t chislit, uint32_t znamen)
{
	if (znamen == 0) {
		cout << "Ноль не может быть знаменателем! " << endl;
	}
	else {
		numerator = chislit;
		denominator = znamen;
	}
}

Fraction Fraction::operator+(uint32_t numb) {
	numerator += (numb * denominator);
	return Fraction(numerator, denominator);
}

Fraction Fraction::operator-(uint32_t numb) {
	numerator -= (numb * denominator);
	return Fraction(numerator, denominator);
}

Fraction Fraction::operator*(uint32_t numb) {
	numerator *= numb;
	return Fraction(numerator, denominator);
}

Fraction Fraction::operator/(uint32_t numb) {
	denominator *= numb;
	return Fraction(numerator, denominator);
}

void Fraction::show() {
	cout << "Получившиеся дробь: " << numerator << "/" << denominator << endl << endl;
}

//void Fraction::addition(uint32_t numb) {
//	numerator += (numb * denominator);
//	show();
//}
//
//void Fraction::subtraction(uint32_t numb) {
//	numerator -= (numb * denominator);
//	show();
//}
//
//void Fraction::multiplication(uint32_t numb) {
//	numerator *= numb;
//	show();
//}
//
//void Fraction::division(uint32_t numb) {
//	denominator *= numb;
//	show();
//}