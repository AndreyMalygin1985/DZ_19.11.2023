#pragma once
#include<iostream>
#include<Windows.h>

class Fraction {
	uint32_t numerator;
	uint32_t denominator;

public:
	friend const Fraction operator+(const Fraction& set, uint32_t numb);
	friend const Fraction operator+(uint32_t numb, const Fraction& set);
	


	void inputFruction(uint32_t chislit, uint32_t znamen);
	void show();
	static const Fraction addition(uint32_t numb);
	//void addition(uint32_t numb);
	void subtraction(uint32_t numb);
	void multiplication(uint32_t numb);
	void division(uint32_t numb);
};