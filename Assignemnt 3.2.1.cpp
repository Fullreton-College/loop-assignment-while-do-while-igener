#include <iostream>
#include <string>
using namespace std;

int main()
{
    int memFee = 3000;
    int year = 1;
    
    cout << "Initial Fee: $" << memFee << endl;
    cout << "Projected Rates for the next 5 years: " << endl;
    while (year < 5){
        memFee = memFee + (memFee * 0.03);
        cout << "Year " << year << ": " << memFee << endl;
        year++;
    }
    
    
    return 0;
}