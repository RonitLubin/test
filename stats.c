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
 * @file stats.c
 * @brief handle array statistics
 *
 * for the first assesment of the course
 *
 * @author Ronit Lubin
 * @date 15/01/2023
 *
 */

#include <stdio.h>
#include "stats.h"
void print_statistics(unsigned char* arr, unsigned int size){
	printf("the minimum is: %d\n",find_minimum(arr,size));	
	printf("the maximum is: %d\n",find_maximum(arr,size));
	printf("the mean is: %d\n",find_mean(arr,size));
	printf("the median is: %d\n",find_median(arr,size));
}
void print_array(unsigned char* arr, unsigned int size){
	int i;
	for(i = 0; i < size; i++)
		printf("[%d]",arr[i]);
	printf("\n");
}
unsigned char find_median(unsigned char* arr, unsigned int size){
	sort_array(arr,size);
	unsigned int middle = size/2;
	
	return arr[middle];
}
unsigned char find_mean(unsigned char* arr, unsigned int size){
	int i;	
	unsigned int sum = (unsigned int)arr[0];
	for(i=1;i<size;i++){
		sum += (unsigned int)arr[i];
	}
	return (unsigned char)(sum/size);
}
unsigned char find_maximum(unsigned char* arr, unsigned int size){
	int i;	
	unsigned char max = arr[i];
	for(i=1;i<size;i++){
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

unsigned char find_minimum(unsigned char* arr, unsigned int size){
	int i;	
	unsigned char minimum = arr[i];
	for(i=1;i<size;i++){
		if(arr[i] < minimum)
			minimum = arr[i];
	}
	return minimum;
}

void sort_array(unsigned char* arr, unsigned int size){
	int i;
	int iterator;
	unsigned char tmp;
	for(i=0 ; i<size -1; i++){
		for(iterator = i+1 ; iterator < size; iterator++){
			if(arr[iterator] > arr[i]){
				tmp = arr[iterator];
				arr[iterator] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  print_statistics(test,SIZE);
  print_array(test,SIZE);
  //printf("hello world\n");
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

