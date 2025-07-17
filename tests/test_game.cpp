#include "game.h"
#include <gtest/gtest.h>

TEST(GameTest, CorrectGuess) {
    Game game;
    game.startNewGame(1, 1);  // Всегда 1
    EXPECT_TRUE(game.checkGuess(1));
    EXPECT_EQ(game.getAttempts(), 1);
}

TEST(GameTest, IncorrectGuess) {
    Game game;
    game.startNewGame(10, 10);  // Всегда 10
    EXPECT_FALSE(game.checkGuess(5));
    EXPECT_EQ(game.getAttempts(), 1);
}
