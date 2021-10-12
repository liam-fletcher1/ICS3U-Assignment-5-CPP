// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program asks the user for two numbers
// Then the programs find the LCM of the two numbers

#include <iostream>

using namespace std;

int main() {
  std::string number1;
  int number1AsInteger;
  std::string number2;
  int number2AsInteger;
  int max;

  // input
  std::cout << "Please enter the first number: ";
  std::cin >> number1;
  std::cout << std::endl;
  std::cout << "Please enter the second number: ";
  std::cin >> number2;
  std::cout << std::endl;

  // process & output
  try {
    number1AsInteger = std::stoi(number1);
    number2AsInteger = std::stoi(number2);
    max = (number1AsInteger > number2AsInteger) ? number1AsInteger :
    number2AsInteger;

    while (true) {
      if (max % number1AsInteger == 0 && max % number2AsInteger == 0) {
        cout << " The LCM of " << number1AsInteger << " and "
        << number2AsInteger << " is "<< max;
        std::cout << "" << std::endl;
        std::cout << "\nDone." << std::endl;
        break;
      }
      ++max;
    }
    return 0;
  } catch (std::invalid_argument) {
    std::cout << "That is an invalid number.";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
