#pragma once
#include <random>

class Game {
public:
    Game();
    void startNewGame(int min, int max);
    bool checkGuess(int guess);
    int getTarget() const;
    int getAttempts() const;
    
private:
    int targetNumber;
    int attempts;
    std::mt19937 rng;
};
