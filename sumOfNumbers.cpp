// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 6th, 2023
// This program asks the user to enter a positive integer
// then tells the user the sum of the numbers from 0 to that number
#include <iostream>

int main() {
    // Declare variables
    int numInt;
    std::string numString;

    // initialize the counter and sum
    int counter = 0;
    int sum = 0;

    // get the user number as a string
    std::cout << "Enter a positive integer: ";
    std::cin >> numString;
    std::cout << std::endl;

    try {
        // convert the user's guess to an int
        numInt = std::stoi(numString);

        // Check if the user's number is negative
        if (numInt < 0) {
            std::cout << numInt << " is not a positive integer." << std::endl;
        } else {
            // Calculate the sum of all numbers from 0 to the user's number
            while (counter <= numInt) {
                std::cout << counter << " times through the loop" << std::endl;
                sum = sum + counter;
                counter = counter + 1;
            }

            // Display the sum after the loop
            std::cout << "The sum of the numbers from 0 to ";
            std::cout << numInt << " is " << sum << std::endl;
        }
    } catch (std::exception) {
        // The user did not enter an integer
        std::cout << numString << " is not an integer!\n";
    }
}
