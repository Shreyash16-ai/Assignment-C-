#include <iostream>

using namespace std;

void inparray(int arr[], int size) {
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void reverseAndDisplay(int arr[], int size) {
    int reversedArr[size]; 

    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i]; 
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;
}
void findAndDisplaySecondExtremes(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }

    int smallest = arr[0], secondSmallest = arr[1];
    if (secondSmallest < smallest) swap(smallest, secondSmallest); 

    int largest = arr[0], secondLargest = arr[1];
    if (secondLargest > largest) swap(largest, secondLargest);     

    for (int i = 2; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second smallest: " << secondSmallest << endl;
    cout << "Second largest: " << secondLargest << endl;
}



int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Declare the array with the specified size

    inparray(arr, size);
    reverseAndDisplay(arr, size);
    findAndDisplaySecondExtremes(arr, size);

    return 0;
}