#include<iostream>
#ifndef TIME_H
#define TIME_H

class Time{
private:
	int newHour;
	int newMinutes;

public:
	Time();
	Time(int a, int b);
	~Time(){};

	int get(int, int);
	void set(int c, int d);

};

#endif