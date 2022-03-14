#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date date;
	int change;

	date.Read();
	date.Display();

	cout << "enter amount of days you want to add to currently date ";
	cin >> change;
	cout << endl;

	date.ChangeDays(change);
	date.Display();

	cout << "now PlusDay method is testing. One day will be added to currently date" << endl;
	date.PlusDay();
	date.Display();
	cout << endl;

	cout << "now PlusMount method is testing. One mounth will be added to currently date" << endl;
	date.PlusMounth();
	date.Display();
	cout << endl;

	cout << "now PlusYear method is testing. One year will be added to currently date" << endl;
	date.PlusYear();
	date.Display();
	cout << endl;

	cout << "now toString method is testing" << endl;
	cout << date.toString() << endl;
}