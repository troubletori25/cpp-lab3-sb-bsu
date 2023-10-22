#include<iostream>
using namespace std;
#include<iomanip>;
int main()
{
    double distance = 10;// initial distance of the first day
    double total_distance =0; // the total distance he ran
    cout << "Day 1: " << distance << " km" << endl;
    for (int day = 2; day <= 7; day++) {
        distance += distance * 0.1; // increase distance by 10% per day
        
    }
    total_distance += distance;
    cout << "The total distance is " << fixed << setprecision(2) << total_distance  << endl;
    return 0;
}
