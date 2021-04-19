/*
Author: Shabbir Yusufali
Date: April 19, 2021
Description: A file containing the implentations of quicksort on a string array
and on an integer array

*/
#include "quicksort.hpp"


void partition_int_array(int inputArray[], int begin, int end, int number){
    for(int i = begin; i <= end; i++){
        inputArray[i] = inputArray[i+1];
    }
    inputArray[end] = number;
}

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

void quicksort_int_array(int inputArray[], int size){
    int begin = 0;
    int end = size-1;
    sort_int_array(inputArray, begin, end);

}

void partition_string_array(char* inputArray[], int begin, int end, char* word){
    for(int i = begin; i <= end; i++){
        inputArray[i] = inputArray[i+1];
    }
    inputArray[end] = word;
}

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


void quicksort_string_array(char* inputArray[], int size){
    int begin = 0;
    int end = size-1;
    sort_string_array(inputArray, begin, end);

}