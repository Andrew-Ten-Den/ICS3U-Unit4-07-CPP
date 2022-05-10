// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew-Ten-Den
// Created on: May 2022
// This program uses a while statement to print numbers from
// 1000 to 2000, 5 numbers at a time

#include <iostream>

int main() {
    // This function uses a while statement to print numbers from
    // 1000 to 2000, 5 numbers at a time

    int i = 999;

    // while loop from 1 to 5
    while (i < 1999) {
        std::cout << ++i << " " << ++i << " " << ++i << " "
        << ++i << " " << ++i << std::endl;
    } std::cout << "2000";
}
