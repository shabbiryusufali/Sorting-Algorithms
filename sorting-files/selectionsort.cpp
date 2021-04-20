/*
Author: Shabbir Yusufali
Date: April 19, 2021
Description: A file containing the implentations of selection sort on a string 
array and on an integer array

*/
#include "../headers/selectionsort.hpp"


//A function to sort int array
void selectionsort_int_array(int inputArray[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(inputArray[i] > inputArray[j]){
                int temp = inputArray[j];
                inputArray[j] = inputArray[i];
                inputArray[i] = temp;
            }
        }
    }
}

//A function to sort char* array
void selectionsort_string_array(char* inputArray[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(strcmp(inputArray[i], inputArray[j]) > 0){
                char* temp = inputArray[j];
                inputArray[j] = inputArray[i];
                inputArray[i] = temp;
            }
        }
    }
}