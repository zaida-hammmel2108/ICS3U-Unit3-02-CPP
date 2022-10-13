// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Oct 2022
// This program is a number guessing game

#include <iostream>

int main() {
    // This function calculates the sum of two integers
    float userNumber;
    const int CHOSEN_NUMBER = 5;

    // Input
    std::cout << "Choose a number between 0-9: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // Process
    if (userNumber == CHOSEN_NUMBER) {
        // output
        std::cout << "You've got the right number! Good job.";
    }

    if (userNumber != CHOSEN_NUMBER) {
        // output
        std::cout << "That's not the right number. Try again!";
    }

    // Output
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
