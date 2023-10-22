#include<iostream>
using namespace std;
int main()
{
    double distance = 10; // initial distance of the first day
    cout << "Day 1: " << distance << " km" << endl;
    for (int day = 2; day <= 10; day++) {
        distance += distance * 0.1; // increase distance by 10% per day
        cout << "Day " << day << ": " << distance << " km" << endl;
    }
    return 0;
}
