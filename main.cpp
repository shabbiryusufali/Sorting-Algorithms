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
    
    int charArraySize;
    cout << "Please enter how many strings you would like to input." << endl;
    cin >> charArraySize;
    char** stringArray = new char*[charArraySize];

    cout << "Please fill the array with strings below" << endl;    
    for(int i = 0; i < intArraySize; i++){
        cin >> stringArray[i];
    }

    char** stringArrayToQuicksort = new char*[charArraySize];
    for(int i = 0; i < charArraySize; i++){
        stringArrayToQuicksort[i] = stringArray[i];
    }
    quicksort_string_array(stringArrayToQuicksort, charArraySize);
    cout << "Quicksorted String Array: [" << endl;
    for(int i = 0; i < charArraySize; i++){
        cout << stringArray[i];
        if(i != charArraySize-1){
            cout << ",";
        }
        cout << endl;
    }
    cout << "]" << endl;
    

    return 0;
}