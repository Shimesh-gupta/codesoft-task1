#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;
    int score = 100;

    cout << "\n New Game Started! Guess the number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts. Each wrong guess deducts 10 points." << endl;

    while (attempts < maxAttempts) {
        cout << "\nAttempt " << (attempts + 1) << ": ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low!";
            score -= 10;
        } else if (guess > secretNumber) {
            cout << "Too high!";
            score -= 10;
        } else {
            cout << " Correct! The number was " << secretNumber << ".";
            cout << "\n Your score: " << score << endl;
            return;
        }
    }

    cout << "\n You've used all attempts. The number was: " << secretNumber << endl;
    cout << " Your score: 0" << endl;
}

int main() {
    char playAgain;

    do {
        playGame();

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! Goodbye " << endl;
    return 0;
}
