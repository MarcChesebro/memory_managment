#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// CIS 452 Lab 8 by Kaylin Zaroukian and Marc Chesebro

#define data1 16
#define data2 32
#define data3 48
#define data4 12

int a;
int b;
int c;
int d;

int main()
{
    char *heap1;
    char *heap2;
    char *heap3;
    char *heap4;

    int f =1;
    int r = 4;
    int p = 0;
    int e = 2;
    
    heap1 = malloc(f);
    heap2 = malloc(r);
    heap3 = malloc(p);
    heap4 = malloc(e);
    int stack1 = 1;
    int stack2 = 2;
    int stack3 = 3;
    int stack4 = 4;


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
    printf("--------------------\n");
    printf("UData 1: %p\n", &a);
    printf("UData 2: %p\n", &b);
    printf("UData 3: %p\n", &c);
    printf("UData 4: %p\n", &d);
    printf("--------------------\n");
    int *ptr5 = (int *)RAND_MAX;
    int *ptr6 = (int *)EXIT_FAILURE;
    int *ptr7 = (int *)BUFSIZ;
    int *ptr8 = (int *)MB_CUR_MAX;
    printf("C Library 1: %p\n", &ptr5);
    printf("C Library 2: %p\n", &ptr6);
    printf("C Library 3: %p\n", &ptr7);
    printf("C Library 4: %p\n", &ptr8);
     
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
    printf("\n");

    fclose(text);

    return 0;
}
