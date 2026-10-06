/*****************************
* Filename : veccalc.c
* Author: Dylan Bodoh
* Description: prints out the ascii table or the dec hex and bin of a ascii char
* Date: 9/29/26
* Compile: gcc -o veccalc veccalc.c
*/
#include <stdio.h>
#include <string.h>
#include "vector.h"



int main(void) {
    
    char input[99];
    while(1) {
        printf("VECCALC> ");
        //pointers to different parts of input
        char *token1;
        char *token2;
        char *token3;
        char *token4;
        char *token5;
        
        fgets(input, 99, stdin);
        printf("%c", input);
        token1 = strtok(input, " "); //gets the string of the first val
        token1[strlen(token1) - 1] = '\0'; //end in null termanator
        if(token1 != NULL) {
            token2 = strtok(NULL, " ");
        }
         if(token2 != NULL) {
            token3 = strtok(NULL, " ");
        }
         if(token3 != NULL) {
            token4 = strtok(NULL, " ");
        }
         if(token4 != NULL) {
            token5 = strtok(NULL, " ");
        }
        

    }



    return 0;
}