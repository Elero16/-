cmake_minimum_required(VERSION 3.12)
project(GuessNumberGame)

set(CMAKE_CXX_STANDARD 17)

# Основная программа
add_executable(game 
    src/main.cpp 
    src/game.cpp
)

# Тесты
enable_testing()
find_package(GTest REQUIRED)
add_executable(game_tests 
    tests/test_game.cpp 
    src/game.cpp
)
target_link_libraries(game_tests GTest::GTest GTest::Main)
add_test(NAME game_tests COMMAND game_tests)
