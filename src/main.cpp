#include "game.h"
#include <iostream>

int main() {
    Game game;
    game.startNewGame(1, 100);
    
    std::cout << "Угадайте число от 1 до 100:\n";
    
    int guess;
    do {
        std::cin >> guess;
    } while (!game.checkGuess(guess));
    
    return 0;
}
