// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Your Name
// Date: 10/18/26
// This program identifies  whether the input integer is positive,
// negative, or zero.

#include<iostream>
#include<string>

int main() {
    // Setting needed variables
    int inputNumber;
    std::string Result;

    // Get the inter from the user
    std::cout << "Please enter an integer: ";
    std::cin >> inputNumber;

    // First check if the number is a positive
    if (inputNumber > 0) {
        // If it's positive, then tell the user that their number is positive
        Result = "Your integer is a positive number!";
        // Check if the number is a negative
    } else if (inputNumber < 0) {
        // If it's negative, then tell the user that their number is negative
        Result = "Your integer is a negative number!";

     // If the number isn't a positive, or negative, then assume its zero
    } else {
        Result = "Your integer is zero!";
    }

    // Printing the result to the user
    std::cout << Result << "\n";
}
