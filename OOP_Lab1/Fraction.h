#pragma once

class Fraction
{
public:
	Fraction() = default; //��������� ������ ������� �������������, ������� ����� 0/1
	Fraction(const int numerator, const int denominator);
	~Fraction() = default;

	int getNumerator() const;	  //��� ����� ������� int numerator() const;
	int getDenominator() const; //��� ����� ������� int denominator() const;
	//���� ��� ������ ��������: fraction.getNumerator() ��� fraction.numerator()

	void setNumerator(const int value);
	void setDenominator(const int value);

	void print() const;

	Fraction sum(const Fraction& other) const;   //������ �������������: c = a.sum(b)
	Fraction sub(const Fraction& other) const;
	Fraction mul(const Fraction& other) const;
	Fraction div(const Fraction& other) const;

	void reduce(); //���������� �����
	/**
	 * �� ��������� ����� ��� ���������.
	 * ���� ������������ ��� �����, �� ����� ������� reduce() ����� ����������.
	 */

	void incorrect();

	void rounds(int a);

	bool operator==(const  Fraction& other) const;
	bool operator!=(const Fraction& other) const;
	bool operator>(const Fraction& other) const;
	bool operator<(const Fraction& other) const;

private:
	int m_numerator = 0;	 //������ ������� ������������� (����������� ������ ��� ����������� ������)
	int m_denominator = 1;
	//������ ������� ������������� (����������� ������ ��� ����������� ������)
};