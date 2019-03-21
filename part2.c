#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATA1 16

#define DATA2 12
#define DATA3 32
#define DATA4 12
int main()
{
    char *heap1; 
    char next;
    int stack1 = 0;
    int stack2 = 16;

    heap1 = malloc (max);
    printf ("Please input username: ");

    // Grab first char
    next = fgetc(stdin);

    // grab chars until newline
    while(next != '\n'){
     
	// if the char would overflow malloc double the size
	if(!(i < max)){
		max = max * 2;
	    	data1 = realloc(data1, max);
	}
	
	// put char in array
	data1[i] = next;
	i++;

        // get next char
	next = fgetc(stdin);
    }
    
    // one last check for the null terminator
    if(!(i < max)){
	max = max * 2;
    	data1 = realloc(data1, max);
    }
	    
    data1[i] = '\0';

    printf ("you entered: %s\n", data1);
    free (data1);
    return 0;
}
