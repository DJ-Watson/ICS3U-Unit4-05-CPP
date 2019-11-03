// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program loops a number to add


#include <iostream>
#include <string>

int main() {
    // variables
    int numinput;
    int loopc;
    int loopn = 0;
    int answer = 0;
    std::string ln;
    std::string numcheck;

    // input
    std::cout << "enter loop count: ";
    std::cin >> ln;
    std::cout << "" << std::endl;

    // process and output
    try {
        loopc = std::stoi(ln);
        for (loopn = 0; loopc > loopn; loopn++) {
            std::cout << "enter number: ";
            std::cin >> numcheck;
                try {
                    numinput = std::stoi(numcheck);
                    if (numinput < 0) {
                        continue;
                    } else {
                        answer += numinput;
                    }
                } catch (std::invalid_argument) {
                    continue;
                }
        }
        std::cout << answer;
    } catch (std::invalid_argument) {
        std::cout << "invalid input" << std::endl;
        std::cout << "";
    }
}
