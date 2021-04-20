/*
Author: Shabbir Yusufali
Date: April 19, 2021
Description: This document has the implementations for mergesort on an int 
array and a string array
*/
#include "mergesort.hpp"

void merge_int_array(int inputArray[], int left, int middle, int right)
{
    int a = middle - left + 1;
    int b = right - middle;
 
    int* L = new int[a];
    int* R = new int[b];

    for (int i = 0; i < a; i++)
        L[i] = inputArray[left + i];
    for (int j = 0; j < b; j++)
        R[j] = inputArray[middle + 1 + j];
 
 
    int k = 0;
 
    int l = 0;
 
    int m = left;
 
    while (k < a && l < b) {
        if (L[k] <= R[l]) {
            inputArray[m] = L[k];
            k++;
        }
        else {
            inputArray[m] = R[l];
            l++;
        }
        m++;
    }
 
    while (k < a) {
        inputArray[m] = L[k];
        k++;
        m++;
    }
 
    while (l < b) {
        inputArray[m] = R[l];
        l++;
        m++;
    }
}
 
void mergesort_int(int inputArray[],int left,int right){
    if(left<right){
        int middle =left + (right-left)/2;
        mergesort_int(inputArray,left,middle);
        mergesort_int(inputArray,middle+1,right);
        merge_int_array(inputArray,left,middle,right);
    }
}

void mergesort_int_array(int inputArray[], int size){
    int left = 0;
    int right = size-1;
    mergesort_int(inputArray, left, right);
}




void merge_string_array(char* inputArray[], int left, int middle, int right)
{
    int a = middle - left + 1;
    int b = right - middle;
 
    char** L = new char*[a];
    char** R = new char*[b];
 
    for (int i = 0; i < a; i++)
        L[i] = inputArray[left + i];
    for (int j = 0; j < b; j++)
        R[j] = inputArray[middle + 1 + j];
 
    int k = 0;
 
    int l = 0;
 
    int m = left;
 
    while (k < a && l < b) {
        if (strcmp(L[k],R[l]) <= 0) {
            inputArray[m] = L[k];
            k++;
        }
        else {
            inputArray[m] = R[l];
            l++;
        }
        m++;
    }
 
    while (k < a) {
        inputArray[m] = L[k];
        k++;
        m++;
    }
 
    while (l < b) {
        inputArray[m] = R[l];
        l++;
        m++;
    }
}
 
void mergesort_string(char* inputArray[],int left,int right){
    if(left<right){
        int middle =left + (right-left)/2;
        mergesort_string(inputArray,left,middle);
        mergesort_string(inputArray,middle+1,right);
        merge_string_array(inputArray,left,middle,right);
    }
}

void mergesort_string_array(char* inputArray[], int size){
    int left = 0;
    int right = size-1;
    mergesort_string(inputArray, left, right);
}