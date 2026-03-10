#include <iostream>
#include <string>
using namespace std;

int main()
{
    int most; 
    int least;
    int input;
    cout << "Enter a number: ";
    cin >> input;
    most = input;
    least = input;
    while (input != -99){
        cout << "Enter another number (type -99 to end program): ";
        cin >> input;
        if (input > most){
            most = input;
        }
        else if (input < least){
            least = input;
        }
    }
    
    cout << "Largest number: " << most << endl;
    cout << "Smallest number: " << least << endl;

    return 0;
}