#include <iostream> 
#include <cstdlib>  
#include <ctime>     
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    cout << "Welcome to the Number Guessing Game" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number!" << endl;
            break; // Exit the loop since the guess is correct
        }
    }

    cout << "Thank you for playing." << endl;

    return 0;
}
