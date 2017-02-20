/*******************************************************************************
author: Daniel Bachler
filename: palindrome2.c
assignment: 4
due: 12/1/2015
 
Brief Description:
  Second palindrome file.
 
*******************************************************************************/
#include <stdio.h>  /* printf */
 
int is_palindrome2(const char *phrase, int length){
    int i = 0; /* First index */
    int q = length - 1; /* Last index of array  */
    
	/* If the length is greater than 1 checks to see if palindrome */
    if(length > 1){ 
        for(i = 0; i <= (length/2); i++, q--){
            if(*(phrase + i) == *(phrase + q)){
                /* Do nothing */   
            }
            else {
                return 0;
            }
        }
        return 1;
    }
	/* Checks to see if the length is 0 or 1  */
	if(length == 1){
        return 1;
    }
    if(length <= 0){
        return 0;
    }
	return 0;
}