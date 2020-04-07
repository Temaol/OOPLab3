#include <iostream>
#include "Time.h"
using namespace std;

#define MAX 3

void Sort(Time time[]);
void PrintTime(Time time[]);
void ZmenshNaN(Time time[]);


int main(void) {

    Time time[MAX];
    time[0] = Time(6, 9,35);
    time[1] = Time(12, 14, 8);
    time[2] = Time(9, 22, 15);
    Sort(time);
    PrintTime(time);
    ZmenshNaN(time);
    PrintTime(time);
}

void Sort(Time time[])
{
    for (int i = 0; i < MAX - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < MAX; ++j)
        {
            if (time[j] >= time[min])
                min = j;
        }
        swap(time[i], time[min]);
    }
}

void PrintTime(Time time[])
{
    for (int i = 0; i < MAX; i++)
    {
        cout << time[i] << endl;
    }
}

void ZmenshNaN(Time time[])
{
    int n = 0;
    cout << "N: ";
    cin >> n;
    for (int i = 0; i < MAX;i++)
        time[i] -= n;
}
