#include <iostream>
#include "main.h"
#include "game.h"

int main() {
    std::cout << "Hello, Game Engine!" << std::endl;
    startGame();
    gameLoop();
    endGame();
    return 0;
}