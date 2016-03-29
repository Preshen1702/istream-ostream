#pragma once
#include <iostream>
using namespace std;
class Time
{
private:
	int h, m;
public:
	Time();
	Time(int hrs,int mins);
	friend ostream &operator<<(ostream &out, const Time &d);
	friend istream &operator>>(istream &in, Time &s);
	~Time();
};

