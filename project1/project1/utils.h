#pragma once

#include <iostream>
#include <string>

using namespace std;

bool close_enough(float v1, float v2) {
    if (abs(v2 - v1) > 0.0001) {
        return false;
    }
    return true;
}

int return_string() {

    string fruit = "apple";
    string vegetable = "broccoli";

    cout << "My favorite fruit is " << fruit <<
        " and my favorite vegetable is " << vegetable << "\n";

    return 0;

}