#include<iostream>
#include"Fraction.h"
using namespace std;

Fraction::Fraction()
{
	this->numerator = 0.0;
	this->denominator = 1;
}

Fraction::Fraction(double n, double d)
{
	this->numerator = n;
	if (d == 0)
	{
		this->denominator = 1;
	}
	else
	{
		this->denominator = d;
	}
}

Fraction::Fraction(const Fraction& f)
{
	this->numerator = f.numerator;
	this->denominator = f.denominator;
}

void Fraction::setNumerator(double n)
{
	this->numerator = n;
}

void Fraction::setDenominator(double d)
{
	if (d == 0)
	{
		this->denominator = 1;
	}
	else
	{
		this->denominator = d;
	}
}

double Fraction::getNumerator() const {
	return this->numerator;
}

double Fraction::getDenominator() const {
	return this->denominator;
}

bool Fraction::operator ==(const Fraction& a)
{
	if (this->numerator == a.numerator && this->denominator == a.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Fraction Fraction::operator*(const Fraction& m)
{
	Fraction f;
	f.numerator = this->numerator * m.numerator;
	f.denominator = this->denominator * m.denominator;
	return f;
}

Fraction Fraction::operator/(const Fraction& d)
{
	Fraction f;
	f.numerator = this->numerator * d.denominator;
	f.denominator = this->denominator * d.numerator;
	return f;
}

const void Fraction::Display()
{
	cout << endl << this->numerator << "/" << this->denominator << endl << endl;
}