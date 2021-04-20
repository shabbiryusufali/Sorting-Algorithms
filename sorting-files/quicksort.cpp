/*
Author: Shabbir Yusufali
Date: April 19, 2021
Description: A file containing the implentations of quicksort on a string array
and on an integer array

*/
#include "../headers/quicksort.hpp"

// This function partitions the elements of the int array
void partition_int_array(int inputArray[], int begin, int end, int number){
    for(int i = begin; i <= end; i++){
        inputArray[i] = inputArray[i+1];
    }
    inputArray[end] = number;
}

// This function recursively sorts the inputted array
void sort_int_array(int inputArray[], int begin, int end){
    int pivot = end;
    int i;
    int j;
    if(end > begin){
            for(i = end; i >= begin; i--){
                if(inputArray[pivot] < inputArray[i]){
                    int x = inputArray[i];
                    partition_int_array(inputArray, i, end, x);
                }
            }
            sort_int_array(inputArray, pivot+1, end);
            sort_int_array(inputArray, begin, pivot-1);
        }
}

// This function sets up the quicksort function above
void quicksort_int_array(int inputArray[], int size){
    int begin = 0;
    int end = size-1;
    sort_int_array(inputArray, begin, end);

}

// This function partitions the elements of the string array
void partition_string_array(char* inputArray[], int begin, int end, char* word){
    for(int i = begin; i <= end; i++){
        inputArray[i] = inputArray[i+1];
    }
    inputArray[end] = word;
}

// This function recursively sorts the inputted array
void sort_string_array(char* inputArray[], int begin, int end){
    int pivot = end;
    int i;
    int j;
    if(end > begin){
        
            for(i = end; i >= begin; i--){
                if(strcmp(inputArray[pivot], inputArray[i]) < 0){
                    char* x = inputArray[i];
                    partition_string_array(inputArray, i, end, x);
                }
            }
            sort_string_array(inputArray, pivot+1, end);
            sort_string_array(inputArray, begin, pivot-1);
        }

}

// This function sets up the quicksort function above
void quicksort_string_array(char* inputArray[], int size){
    int begin = 0;
    int end = size-1;
    sort_string_array(inputArray, begin, end);

}