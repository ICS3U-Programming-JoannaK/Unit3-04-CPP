// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 25, 2025
// This program tells the user if
// their number is positive, negative
// or zero

#include <iostream>


int main() {
    // declare variables
    int userNum;

    // get user's number
    std::cout << "Enter your number: ";
    std::cin >> userNum;

    // Check if the number is positive, negative, or zero
    if (userNum == 0) {
        std::cout << "Your number is 0 ";
    } else if (userNum > 0) {
        std::cout << "Your number is positive ";
    } else {
        std::cout << "Your number is negative ";
        }
}
