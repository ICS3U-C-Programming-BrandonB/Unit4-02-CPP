// Copyright (c) 2025 Brandon All rights reserved.
// Created By : Brandon
// Date : November 16th, 2025
// This program asks the user for the number and
// calculates the factorial using a do while, then displays it

#include <iostream>
#include <string>

int main() {
    std::string numberAsString;
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;

    try {
        int numberAsInt = std::stoi(numberAsString);

        if (numberAsInt < 0) {
            std::cout << "Please enter a positive number.\n";
            return 1;
        }

        int factorial = 1;
        int counter = 0;

        if (numberAsInt == 0) {
            // 0! == 1
            std::cout << "Tracking Counter 0" << std::endl;
        } else {
            do {
                std::cout << "Tracking Counter " << counter << std::endl;
                counter = counter + 1;
                factorial = factorial * counter;
            } while (counter < numberAsInt);
        }

        std::cout << "The factorial of " << numberAsInt
                  << " is " << factorial << std::endl;
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " is not an integer.\n";
        return 1;
    } catch (std::out_of_range) {
        std::cout << "Number is out of range.\n";
        return 1;
    }
}
