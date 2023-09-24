// number guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Generate a random number
    srand(time(0));

    int secretNumber = rand() % 100;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?" << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        ++attempts;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}