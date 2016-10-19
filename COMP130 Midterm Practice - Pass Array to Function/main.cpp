//
//  main.cpp
//  COMP130 Midterm Practice - Pass Array to Function
//
//  Created by ax on 10/19/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

// fn prototype
void arr_manip(int[], int, int, int);
void print_arr(int[], int);

int main() {

    cout << "Pass Array to Function\n";
    
    int const ARRAY_SIZE = 10;
    int arr_test[ARRAY_SIZE] = {9, 3, 6, 2, 10, 8, 1, 4, 7, 5};
    
    cout << "Start Array Readout: \n";
    print_arr(arr_test, ARRAY_SIZE);
    
    arr_manip(arr_test, 10, 3, 7);
    
    cout << endl;
    cout << "Program End";
    cout << endl;
    
    return 0;
}

void print_arr(int p_arr[], int p_arr_size) {
    for (int i = 0; i < p_arr_size; i++) {
        cout << p_arr[i] << " ";
    }
    cout << endl; // end line after array output
}

void arr_manip(int p_arr[], int p_arr_size, int low_range, int hi_range) {
    
    cout << "Array Passed to arr_manip Readout: \n";
    print_arr(p_arr, p_arr_size);
    
    int const RANGE_SIZE = hi_range - low_range;
    int const low_idx = low_range;
    int const hi_idx = hi_range;
    
    int op_arr[RANGE_SIZE];
    
    for (int i = 0; i < RANGE_SIZE; i++) {
        op_arr[i] = p_arr[i + low_idx];
    }
    
    cout << "Operator Array Readout: \n";
    print_arr(op_arr, RANGE_SIZE);
    
}
