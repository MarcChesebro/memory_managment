#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define data1 16

int main()
{
    char *heap1; 
    int stack1 = 1;
    int stack2 = 2;
    int stack3 = 3;

    heap1 = malloc (data1);
    free (data1);

    FILE *text;

    if ((text = fopen("mem","r")) == NULL){
       printf("Error! opening file");
       exit(1);
    }

    for(int i = 0; i < 5; i++){
    	printf("text%d=%p\n", i, &text[i]);
    }

    fclose(text);

    return 0;
}
