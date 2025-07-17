#include "game.h"
#include <iostream>

Game::Game() : rng(std::random_device{}()) {}

void Game::startNewGame(int min, int max) {
    std::uniform_int_distribution<int> dist(min, max);
    targetNumber = dist(rng);
    attempts = 0;
}

bool Game::checkGuess(int guess) {
    attempts++;
    if (guess == targetNumber) {
        std::cout << "Поздравляем! Вы угадали за " << attempts << " попыток.\n";
        return true;
    } else if (guess < targetNumber) {
        std::cout << "Слишком мало!\n";
    } else {
        std::cout << "Слишком много!\n";
    }
    return false;
}

int Game::getTarget() const { return targetNumber; }
int Game::getAttempts() const { return attempts; }
