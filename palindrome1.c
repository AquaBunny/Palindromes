/*******************************************************************************
author: Daniel Bachler
filename: palindrome1.c
assignment: 4
due: 12/1/2015
 
Brief Description:
  First function for palindrome
 
*******************************************************************************/
#include <stdio.h>  /* printf */
 
int is_palindrome1(const char phrase[], int length){
    int i = 0; /* First index */
    int j = length - 1; /* Last index of array  */
        
	/* If the length is greater than 1 checks to see if its a palindrome */
    if(length > 1){
        for(i = 0; i <= (length/2); i++, j--){                       
            if(phrase[i] == phrase[j]){
                    /* Do nothing */
            } else {
				return 0;
            }
		}
        return 1;
    }
	/* Checks to see if the length is 1 or greater than zero */
    if(length == 1){
		return 1;
    }
    if(length <= 0){
        return 0;
    }
	return 0;
}