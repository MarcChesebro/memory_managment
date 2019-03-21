#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define data1 16
#define data2 32
#define data3 48
#define data4 12

int main()
{
    char *heap1;
    char *heap2;
    char *heap3;
    char *heap4;

    int stack1 = 1;
    int stack2 = 2;
    int stack3 = 3;
    int stack4 = 4;

    heap1 = malloc (stack1);
    heap2 = malloc(stack2);
    heap3 = malloc(data1);
    heap4 = malloc(data2);

    int *ptr1 = (int *)data1;
    int *ptr2 = (int *)data2;
    int *ptr3 = (int *)data3;
    int *ptr4 = (int *)data4;

    printf("Heap 1: %p\n", &heap1);
    printf("Heap 2: %p\n", &heap2);
    printf("Heap 3: %p\n", &heap3);
    printf("Heap 4: %p\n", &heap4);
    printf("---------------------\n");
    printf("Stack 1: %p\n", &stack1);
    printf("Stack 2: %p\n", &stack2);
    printf("Stack 3: %p\n",&stack3);
    printf("Stack 4: %p\n", &stack4);
    printf("---------------------\n");
    printf("Data 1: %p\n", &ptr1);
    printf("Data 2: %p\n", &ptr2);
    printf("Data 3: %p\n", &ptr3);
    printf("Data 4: %p\n", &ptr4);
    
    free (heap1);
    free (heap2);
    free(heap3);
    free(heap4);


    FILE *text;

    printf("-------------------\n");
    if ((text = fopen("m","r")) == NULL){
       printf("Error! opening file");
       exit(1);
    }

    for(int i = 0; i < 5; i++){
    	printf("text%d=%p\n", i, &text[i]);
    }

    fclose(text);

    return 0;
}
