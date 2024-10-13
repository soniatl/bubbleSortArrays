//
//  main.cpp
//  bubbleSortArrays
//
//  Created by Sonia Lopchan on 10/12/24.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {//a function named bubbleSort that pass int arr[] and int size as argument
    for (int i = 0; i < size - 1; i++) {//an outer loop that runs size-1 times
        for (int j = 0; j < size - i - 1; j++) {//an inner loop that runs size-i-1 times
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if previous array is greater than the next
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {50,80,10,30,90,70,60,20,40}; //array declaration
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size); // calling a function

    cout << "Sorted array of int: \n";
    for (int i = 0; i < size; i++) { // a loop that prints sorted array
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
