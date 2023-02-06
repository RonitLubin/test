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
 * @file stats.h
 * @brief handle array statistics
 *
 * for the first assesment of the course
 *
 * @author Ronit Lubin
 * @date 15/01/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char* arr, unsigned int size);

/**
 * @brief <print sraristics>
 *
 * a function that prints the statistics of an array including minimum
 * maximum mean and median
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <void>
 */

void print_array(unsigned char* arr, unsigned int size);

/**
 * @brief <print array>
 *
 * given an array of data and a length. prints the array to the screen
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <void>
 */

unsigned char find_median(unsigned char* arr, unsigned int size);

/**
 * @brief <find median>
 *
 * given an array of data and a length. returns the median value
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <the median of the given array>
 */

unsigned char find_mean(unsigned char* arr, unsigned int size);

/**
 * @brief <find mean>
 *
 * given an array of data and a length. returns the mean
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <the mean of the given array>
 */

unsigned char find_maximum(unsigned char* arr, unsigned int size);

/**
 * @brief <find maximum>
 *
 * given an array of data and a length. returns the maximum
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <the maximum of the given array>
 */

unsigned char find_minimum(unsigned char* arr, unsigned int size);

/**
 * @brief <find minimum>
 *
 * given an array of data and a length. returns the minimum
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <the minimum of the given array>
 */

void sort_array(unsigned char* arr, unsigned int size);

/**
 * @brief <sort array>
 *
 * given an array of data and a length. sorts the array from 
 * largest to smallest
 *
 * @param <arr> <a unsigned char pointer to an m-element data array>
 * @param <size> <an unsigned integer as the size of the array>
 *
 * @return <void>
 */


#endif /* __STATS_H__ */

