#include "Triad.h"
#include <iostream>

using namespace std;

void Triad::setFirst(int value)
{
	first = value;
}

void Triad::setSecond(int value)
{
	second = value;

}

void Triad::setThird(int value)
{
	third = value;
}

void Triad::Init(int f, int s, int t)
{
	setFirst(f);
	setSecond(s);
	setThird(t);
}

void Triad::Read()
{
	int f, s, t;
	cout << "enter first " << endl;
	cin >> f;
	cout << "enter second " << endl;
	cin >> s;
	cout << "enter third " << endl;
	cin >> t;
	Init(f, s, t);
}

void Triad::Display() const
{
	cout << "first = "<< first << endl;
	cout << "second = " << second << endl;
	cout << "third = " << third << endl;
}

void Triad::PlusFirst()
{
	first++;
}

void Triad::PlusSecond()
{
	second++;
}

void Triad::PlusThird()
{
	third++;
}
