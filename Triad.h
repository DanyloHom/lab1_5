#pragma once
class Triad
{
private:
	int first;
	int second;
	int third;
public:
	int getFirst()const { return first; }
	int getSecond()const { return second; }
	int getThird()const { return third; }
	void setFirst(int value);
	void setSecond(int value);
	void setThird(int value);
	void Init(int f, int s, int t);
	void Read();
	void Display()const;
	void PlusFirst();
	void PlusSecond();
	void PlusThird();

};

