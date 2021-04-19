/*
Author: Shabbir Yusufali
Date: April 19, 2021
Description: A file containing the implentations of quicksort on a string array
and on an integer array

*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

//Declare function to sort int array
void quicksort_int_array(int inputArray[], int size);

//Declare function to sort char* array
void quicksort_string_array(char* inputArray[], int size);