/*****************************
* Filename : vector.c
* Author: Dylan Bodoh
* Description: prints out the ascii table or the dec hex and bin of a ascii char
* Date: 9/29/26
* Compile: gcc -o veccalc veccalc.c
*/
#include <stdio.h>
#include <string.h>
struct vector {
    char name[8];
    float x;
    float y;
    float z;
};
#define numvectors 10

static struct vector vecs[numvectors];
static int filled = 0;
int newvec(string name, float x, float y, float z;)
{
    //check if vector with name already exists and overwrite if does
    for(int i = 0; i < numvectors; i++) {
        if(!strcmp(name, vecs[i].name)) {
            vecs[i].x = x;
            vecs[i].y = y;
            vecs[i].z = z;
            return 0; //means vector was added
        } 
    }
    //check if full otherwize add at point filled
    if(filled < 10) {
        strcpy(vecs[filled].name, name);
        vecs[filled].x = x;
        vecs[filled].y = y;
        vecs[filled].z = z;
        filled++;
        return 0; //vector was added
    }
    return 1; //if mem is full return 1
}

