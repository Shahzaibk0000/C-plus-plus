#pragma once
class Fraction
{
	private:
		double numerator;
		double denominator;
	public:
		Fraction();
		Fraction(double , double);
		Fraction(const Fraction&);
		Fraction operator *(const Fraction&);
		Fraction operator /(const Fraction&);
		bool operator ==(const Fraction&);
		void setNumerator(double);
		void setDenominator(double);
		double getNumerator() const;
		double getDenominator() const;
		const void Display();
};

