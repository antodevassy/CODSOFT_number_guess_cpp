#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secretNumber = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;
    
    std::cout << "NUMBER GUESSING GAME\n";
    std::cout << "Try to guess the number between 1 and 100.\n\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        attempts++;

        if (userGuess < secretNumber) {
            std::cout << "Too low ! Enter a higher number.\n\n";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high ! Enter a lower number.\n\n";
        } else {
            std::cout << "\nCongratulations !!! You guessed the correct number in "
                      << attempts << " attempts.\n";
        }

    } while (userGuess != secretNumber);

    return 0;
}