#include "Time.h"

Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::SetHour(int h)
{
        if ((h >= 0) && (h <= 23))
            hour = h;
        else
            throw "Error: incorrect value of hour";
}

void Time::SetMinute(int m)
{
    if ((m >= 0) && (m <= 59))
        minute = m;
    else
        throw "Error: incorrect value of minute";
}

void Time::SetSecond(int s)
{
    if ((s >= 0) && (s <= 59))
        second = s;
    else
        throw "Error: incorrect value of seconds";
}

bool operator>=(Time& t1, Time& t2)
{
    return (t1.second + 60 * (t1.minute + 60 * (t1.hour))) >= (t2.second + 60 * (t2.minute + 60 * (t2.hour)));
}

void Time::operator-=(const int n)
{
    int vesChas = second + 60 * (minute + 60 * hour);
    vesChas -= n;
    hour = vesChas / (60*60) - minute/60 - second/(60*60);
    vesChas -= hour*60*60;
    minute = vesChas / 60 - second/60;
    vesChas -= minute*60;
    second = vesChas;
}

ostream& operator<<(ostream& out, const Time& time)
{
    out << time.hour << ":" << time.minute << ":" << time.second;
    return out;
}
