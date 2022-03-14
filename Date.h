#pragma once
#include "Triad.h"
#include <string>


class Date
{
private:
	Triad triad;
public:
	Triad getTriad()const { return triad; }

	int getDay()const { return triad.getFirst(); }
	int getMounth()const { return triad.getSecond(); }
	int getYear()const { return triad.getThird(); }

	void setTriad(Triad triad) { this->triad = triad; }

	void setDay(int value) { triad.setFirst(value); }
	void setMounth(int value) { triad.setSecond(value); }
	void setYear(int value) { triad.setThird(value); }

	bool Init(int d, int m, int y);
	void Read();
	void Display();

	void PlusDay();
	void PlusMounth();
	void PlusYear();

	void ChangeDays(int value);
	void Check();
	void MounthChanger(int value);
	void YearCheck();
	std::string toString()const;
};

