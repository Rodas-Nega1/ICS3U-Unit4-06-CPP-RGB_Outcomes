// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program outputs 255 ^ 3 RGB outcomes

#include <iostream>


int main() {
    // this function has nested loops that outputs up to 255 ^ 3 outcomes
    // int redCounter = 0;
    // int greenCounter = 0;
    // int blueCounter = 0;

    // process & output
    for (int redCounter = 0; redCounter < 256; redCounter++) {
        for (int greenCounter = 0; greenCounter < 256; greenCounter++) {
            for (int blueCounter = 0; blueCounter < 256; blueCounter++) {
                std::cout << "RGB(" << redCounter << ", " << greenCounter
                << ", " << blueCounter << ")" << std::endl;
            }
        }
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
