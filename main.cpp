/*
Author: Shabbir Yusufali
Date: April 19, 2021
Description: A main file to test my quicksort implementations
*/
#include "sort.hpp"

int main(){
    int intArraySize;
    cout << "Please enter how many integers you would like to input." << endl;
    cin >> intArraySize;
    int* intArray = new int[intArraySize];

    cout << "Please fill the array with integers below" << endl;    
    for(int i = 0; i < intArraySize; i++){
        cin >> intArray[i];
    }

    int* intArrayToQuicksort = new int[intArraySize];
    for(int i = 0; i < intArraySize; i++){
        intArrayToQuicksort[i] = intArray[i];
    }
    
    int* intArrayToSelectionsort = new int[intArraySize];
    for(int i = 0; i < intArraySize; i++){
        intArrayToSelectionsort[i] = intArray[i];
    }

    int* intArrayToMergesort = new int[intArraySize];
    for(int i = 0; i < intArraySize; i++){
        intArrayToMergesort[i] = intArray[i];
    }

    int charArraySize;
    cout << "Please enter how many strings you would like to input." << endl;
    cin >> charArraySize;

    char** stringArray = new char*[charArraySize];
    //char* stringArray[1000];
    cout << "Please fill the array with strings below" << endl;    
    for(int i = 0; i < charArraySize; i++){
        scanf("%s", stringArray[i]);
    }

    char** stringArrayToQuicksort = new char*[charArraySize];
    //char* stringArrayToQuicksort[1000];
    for(int i = 0; i < charArraySize; i++){
        stringArrayToQuicksort[i] = stringArray[i];
    }

    char** stringArrayToSelectionsort = new char*[charArraySize];
    //char* stringArrayToSelectionsort[1000];
    for(int i = 0; i < charArraySize; i++){
        stringArrayToSelectionsort[i] = stringArray[i];
    }

    char** stringArrayToMergesort = new char*[charArraySize];
    //char* stringArrayToMergesort[1000];
    for(int i = 0; i < charArraySize; i++){
        stringArrayToMergesort[i] = stringArray[i];
    }
    quicksort_string_array(stringArrayToQuicksort, charArraySize);
    cout << "Quicksorted String Array:    [" << endl;
    for(int i = 0; i < charArraySize; i++){
        cout << stringArrayToQuicksort[i];
        if(i != charArraySize-1){
            cout << ",";
        }
        cout << endl;
    }
    cout << "]" << endl;
    selectionsort_string_array(stringArrayToSelectionsort, charArraySize);
    cout << "Selection Sorted String Array: [" << endl;
    for(int i = 0; i < charArraySize; i++){
        cout << stringArrayToSelectionsort[i];
        if(i != charArraySize-1){
            cout << ",";
        }
        cout << endl;
    }
    cout << "]" << endl;
    mergesort_string_array(stringArrayToMergesort, charArraySize);
    cout << "Mergesorted String Array:    [" << endl;
    for(int i = 0; i < charArraySize; i++){
        cout << stringArrayToMergesort[i];
        if(i != charArraySize-1){
            cout << ",";
        }
        cout << endl;
    }
    cout << "]" << endl;

    quicksort_int_array(intArrayToQuicksort, intArraySize);
    cout << "Quicksorted Int Array:      [";
    for(int i = 0; i < intArraySize; i++){
        cout << intArrayToQuicksort[i];
        if(i != intArraySize-1){
            cout << ",";
        }
        cout << " ";
    }
    cout << "]" << endl;
    selectionsort_int_array(intArrayToSelectionsort, intArraySize);
    cout << "Selection Sorted Int Array: [";
    for(int i = 0; i < intArraySize; i++){
        cout << intArrayToSelectionsort[i];
        if(i != intArraySize-1){
            cout << ",";
        }
        cout << " ";
    }
    cout << "]" << endl;
    mergesort_int_array(intArrayToMergesort, intArraySize);
    cout << "Mergesorted Int Array:      [";
    for(int i = 0; i < intArraySize; i++){
        cout << intArrayToMergesort[i];
        if(i != intArraySize-1){
            cout << ",";
        }
        cout << " ";
    }
    cout << "]" << endl;

    return 0;
}