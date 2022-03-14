#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool Date::Init(int d, int m, int y)
{
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d > 0 && d <= 31) {
			setDay(d);
			setMounth(m);
			setYear(y);
			return true;
		}
	}

	if (m == 4 || m == 6 || m == 9 || m == 11) {
		if (d > 0 && d <= 30) {
			setDay(d);
			setMounth(m);
			setYear(y);
			return true;
		}
	}
	if (m == 2) {
		if (y % 4 == 0 || y % 100 == 0 || y % 400 == 0) {
			if (d > 0 && d <= 29){
				setDay(d);
				setMounth(m);
				setYear(y);
				return true;
			}
		}
		else {
			if (d > 0 && d <= 28){
				setDay(d);
				setMounth(m);
				setYear(y);
				return true;
			}
		}

	}
	else
		return false;
}

void Date::Read()
{
	int d = 0, m = 0, y = 0;

	do {
		cout << "enter day " << endl;
		cin >> d;
		cout << "enter mounth " << endl;
		cin >> m;
		cout << "enter year " << endl;
		cin >> y;
	} while (!Init(d, m, y));
}

void Date::Display()
{
	cout << endl;

	if (getDay() < 10 && getMounth() >= 10)
		cout << "date is : " << "0" << getDay() << "." << getMounth() << "." << getYear() << endl;

	if (getDay() < 10 && getMounth() < 10)
		cout << "date is : " << "0" << getDay() << "." << "0" << getMounth() << "." << getYear() << endl;

	if (getDay() >= 10 && getMounth() >= 10)
		cout << "date is : " << getDay() << "." << getMounth() << "." << getYear() << endl;

	if (getDay() >= 10 && getMounth() < 10)
		cout << "date is : " << getDay() << "." << "0" << getMounth() << "." << getYear() << endl;

	cout << endl;
}

void Date::PlusDay()
{
	triad.PlusFirst();
	Check();
}

void Date::PlusMounth()
{
	triad.PlusSecond();
	Check();
}

void Date::PlusYear()
{
	triad.PlusThird();
	Check();
}

void Date::ChangeDays(int value)
{
	setDay(getDay() + value);
	Check();
}

void Date::Check()
{
	int d = getDay();
	int m = getMounth();
	int y = getYear();

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		int count = 31;
		if (d > count)
			MounthChanger(count);
	}

	if (m == 4 || m == 6 || m == 9 || m == 11) {
		int count = 30;
		if (d > count)
			MounthChanger(count);
	}

	if (m == 2) {
		if (y % 4 == 0 || y % 100 == 0 || y % 400 == 0) {
			int count = 29;
			if (d > count)
				MounthChanger(count);
		}
		else {
			int count = 28;
			if (d > count)
				MounthChanger(count);
		}
	}

}

void Date::MounthChanger(int value)
{
	setDay(getDay() - value);
	setMounth(getMounth() + 1);
	YearCheck();
	return Check();
}

void Date::YearCheck()
{
	if (getMounth() > 12) {
		setYear(getYear() + 1);
		setMounth(getMounth() - 12);
	}
}

string Date::toString() const
{
	stringstream sout;

	if (getDay() < 10 && getMounth() >= 10)
		sout << "0" << getDay() << "." << getMounth() << "." << getYear() << endl;

	if (getDay() < 10 && getMounth() < 10)
		sout << "0" << getDay() << "." << "0" << getMounth() << "." << getYear() << endl;

	if (getDay() >= 10 && getMounth() >= 10)
		sout << getDay() << "." << getMounth() << "." << getYear() << endl;

	if (getDay() >= 10 && getMounth() < 10)
		sout << getDay() << "." << "0" << getMounth() << "." << getYear() << endl;

	return sout.str();
}
