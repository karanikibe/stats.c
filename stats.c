/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <Contains the main file of the program >
 *
 * <This executes and calls the fubctions to print on the screeen. 
 * The functions are implemented in this section>
 *
 * @author <KIBE KARANI>
 * @date <07/03/2024 >
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

//Function to find the maximum number
unsigned char get_max(unsigned char *arr,unsigned int size){
    int max = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
        max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum number
unsigned char get_min(unsigned char *arr, unsigned int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the mean of the numbers
unsigned char get_mean(unsigned char *arr, unsigned int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int mean=sum/size;
    return mean;
}

// Function to find the median of the numbers
unsigned char get_median(unsigned char *arr, unsigned int size){
    unsigned char large_small;
    for (int i=0;i<size -1 ;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
            large_small=arr[i];
            arr[i]=arr[j];
            arr[j] = large_small;
            }
        }
    }
    //the median
    if(size%2==0){
        return(arr[size/2 -1] +arr[size/2])/2;
    }else{
        return arr[size/2];
    }
    
}

//Funtion to print the values of the array
void print_stats(unsigned char *arr, unsigned int size){
    printf("The maximum is:%u\n", get_max(arr,size));
    printf("The minimum is:%u\n", get_min(arr, size));
    printf("The mean is:%u\n", get_mean(arr, size));
    printf("The medianish is:%u\n", get_median(arr, size));
}

int main()
{

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};
    
    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_stats(test,SIZE);
    return 0;
}

/* Add other Implementation File Code Here */