#pragma once
#include<iostream>
#include<Windows.h>

class Fraction {
	uint32_t numerator;
	uint32_t denominator;

public:
	Fraction(uint32_t chislit, uint32_t znamen) {};
		
	Fraction operator+(uint32_t numb);
	Fraction operator-(uint32_t numb);
	Fraction operator*(uint32_t numb);
	Fraction operator/(uint32_t numb);

	void show();
	/*void addition(uint32_t numb);
	void subtraction(uint32_t numb);
	void multiplication(uint32_t numb);
	void division(uint32_t numb);*/
};