#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int lowerBound, upperBound;
    int secretNumber, guess, attempts=0;
    int score = 0;

    cout << "---------------------------------------------------" << endl;
    cout << "---------------NUMBER GUESSING GAME!---------------" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "\nEnter the range for the number (lower bound and upper bound): ";
    cin >> lowerBound >> upperBound;

    secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    cout << "You have selected a number to guess between " << lowerBound << " and " << upperBound << ". Try to guess it.\n" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            if (attempts==1) {
                cout << "Congratulations! You guessed the number in " << attempts << "st attempt." << endl;
            }
            else {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            }    
            score = (upperBound - lowerBound + 1) * 10 / attempts; 
            cout << "\nYour score: " << score << endl;
        }
    } while (guess != secretNumber);
cout << "Thanks for playing the game!" << endl;
cout << "---------------------------------------------------" << endl;
    return 0;
}
