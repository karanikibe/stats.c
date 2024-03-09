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
 * @file <stats.h>
 * @brief <Contains function prototypes >
 *
 * <The header file contains all the functions to be used in the main function with the necessary paramters.>
 *
 * @author <Kibe Karani>
 * @date <07/03/2024 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
void print_stats(unsigned char *arr, unsigned int size);
unsigned char get_max(unsigned char *arr, unsigned int size);
unsigned char get_min(unsigned char *arr, unsigned int size);
unsigned char get_median(unsigned char *arr, unsigned int size);
unsigned char get_mean(unsigned char *arr, unsigned int size);

/**
 * @brief <Declares the function parameters>
 *
 * <The functions are given the paramters and type in the header file for ease of reference>
 *
 * @param <> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

#endif /* __STATS_H__ */