#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
	h = 0;
	m = 0;
}
Time::Time(int hrs, int mins)
{
	h = hrs;
	m = mins;
}
ostream &operator<<(ostream &out,const Time &d)
{
	out << d.h << ":" << d.m << endl;
	return out;
}
istream &operator>>(istream &in, Time &s)
{
	in >> s.h >> s.m;
	return in;
}
Time::~Time()
{
}

int main()
{
	Time obj(8,40);
	cout << "1st time :" << obj << endl;
	cout << "Change time?" << endl;
	cin >> obj;
	cout << "New time entered!! :" << obj << endl;
	return 0;
}