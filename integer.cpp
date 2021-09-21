// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti ngabo
// Created on: Sept 2021
// This program tells you if the number is positive/negative/0
// with user input

#include <iostream>

int main() {
    // this function checks if the number is >0/ <0/ ==0
    int number;

    // input
    std::cout << "Enter a number (integer): ";
    std::cin >> number;

    // process and output
    if (number > 0) {
        std::cout << "The number is a positive integer";
    } else if (number < 0) {
        std::cout << "The number is a negative integer";
    } else {
        std::cout << "The number is 0";
    } std::cout << "\nDone.";
}
