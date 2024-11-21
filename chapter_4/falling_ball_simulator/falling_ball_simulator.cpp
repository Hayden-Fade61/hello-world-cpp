// Program to simulating a ball freefalling from the top of a tower.
// As a challenge to myself, no loops/recursion can be used
// Author: Saifullah Ndubano

#include <iostream>
#include <format>

// Function declarations
int getTowerHeight();
double findBallHeight(int secondsElapsed, int startHeight);
void printBallHeight(int secondsElapsed, double ballHeight);

// Function definitions
int main(){
    int startHeight = getTowerHeight();
    printBallHeight(5, findBallHeight(5, startHeight));
    return 0;
}

int getTowerHeight() {
    int height{};
    std::cin >> height;
    return height;
}

double findBallHeight(int secondsElapsed, int startHeight) {
    double const ACCELERATION{ 9.81 };
    double dist = 0.5 * ACCELERATION * std::pow(secondsElapsed, 2.0);
    return startHeight - dist;
}

void printBallHeight(int secondsElapsed, double ballHeight) {
    if (ballHeight <= 0.0) {
        std::cout << std::format("At {} seconds, the ball is on the ground", secondsElapsed);
    }
    else {
        std::cout << std::format(
            "At {} seconds, the ball is at height {} metres.", 
            secondsElapsed, 
            ballHeight
        );
    }
}