#include<iostream>
using namespace std;
#include<iomanip>;
int main()
{
    double distance = 10;// initial distance of the first day
    double total_distance = 0; // the total distance he ran
    cout << "Day 1: " << distance << " km" << endl; 
    int n = 0;
    cout << "Enter the number of days: ";
    cin >> n;
    for (int i = 1; i < n; i++ ) {
        distance += distance * 0.1; // increase distance by 10% per day      
    
    }
    total_distance += distance;
    cout << "The total distance is " << fixed << setprecision(2) << total_distance  << endl;
    return 0;
}