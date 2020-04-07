#pragma once

#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    
    Time() { hour = minute = second = 0; };
    Time(int h, int m, int s);
    ~Time() {};

    int GetHour() { return hour; }
    int GetMinute() { return minute; }
    int GetSecond() { return second; } 

    void SetHour(int h);
    void SetMinute(int m);
    void SetSecond(int s);
    
    friend ostream& operator<<(ostream& out, const Time& time);

    friend bool operator>=(Time& t1, Time& t2);
    void operator-=(const int n);
};


