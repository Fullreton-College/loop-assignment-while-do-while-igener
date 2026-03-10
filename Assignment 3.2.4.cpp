#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{
    std::random_device seed;
    std::mt19937 gen{seed()}; 
    std::uniform_int_distribution<> dist{1, 100};
    int random = dist(gen);
    int guess;
    int count = 1;

    
    
    cout << "Guess the number (1 to 100): ";
    cin >> guess;
    while (guess != random){
        if (guess > random){
            cout << "Too high. Try again: ";
        }
        else if (guess < random){
            cout << "Too low. Try again: ";
        }
        cin >> guess;
        count++;
    }
    
    cout << "Congratulations. You figured out my number in " << count << " guesses!";

    return 0;
}