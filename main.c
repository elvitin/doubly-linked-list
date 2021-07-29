#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "doublyLinkedList.h"


void main()
{
    list myDesc;
    init(&myDesc);
    //srand(time(NULL));

    insertAfter(&myDesc, 10);
    insertAfter(&myDesc, 11);
    insertBefore(&myDesc, 12);
    insertBefore(&myDesc, 13);
    insertAfter(&myDesc, 14);

    /*
    for (unsigned int i = 0; i < 4294967295; i++) {
        if (rand() % 2)
            insertAfter(&myDesc, rand() % 101);
        else
            insertBefore(&myDesc, rand() % 101);
    } 
    */

    display(myDesc);

    deleteNode(&myDesc, 10);

    display(myDesc);
}