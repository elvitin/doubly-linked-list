#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"


void main()
{
    list myDesc;
    

    printf("----------Value Init----------\n");
    printf("Main() myDesc Address: %p - %lu\n", &myDesc, sizeof(&myDesc));
    printf("Main() firstNode Address: %p\n", &myDesc.firstNode);
    printf("Main() lastNode Address: %p\n", &myDesc.lastNode);
    printf("Main() firstNode Value: %p\n", myDesc.firstNode);
    printf("Main() lastNode Value: %p\n", myDesc.lastNode);
    valueInit(myDesc); 
    puts("--------------------------------------------------------");
    printf("Main() myDesc Address: %p\n", &myDesc);
    printf("Main() firstNode Address: %p\n", &myDesc.firstNode);
    printf("Main() lastNode Address: %p\n", &myDesc.lastNode);
    printf("Main() firstNode Value: %p\n", myDesc.firstNode);
    printf("Main() lastNode Value: %p\n", myDesc.lastNode);
    

    puts("\n\n\n----------Reference Init----------");
    printf("Main() myDesc Address: %p\n", &myDesc);
    printf("Main() firstNode Address: %p\n", &myDesc.firstNode);
    printf("Main() lastNode Address: %p\n", &myDesc.lastNode);
    printf("Main() firstNode Value: %p\n", myDesc.firstNode);
    printf("Main() lastNode Value: %p\n", myDesc.lastNode);
    referenceInit(&myDesc); 
    puts("--------------------------------------------------------");
    printf("Main() myDesc Address: %p\n", &myDesc);
    printf("Main() firstNode Address: %p\n", &myDesc.firstNode);
    printf("Main() lastNode Address: %p\n", &myDesc.lastNode);
    printf("Main() firstNode Value: %p\n", myDesc.firstNode);
    printf("Main() lastNode Value: %p\n", myDesc.lastNode);


    list *myPoiterDesc;
    puts("\n\n\n----------Value Init with Poiter----------");
    printf("Main() myPoiterDesc Address: %p - size(%lu)\n", &myPoiterDesc, sizeof(&myPoiterDesc));
    printf("Main() myPoiterDesc Value: %p - size(%lu)\n", myPoiterDesc, sizeof(myPoiterDesc));


    printf("Main() myPoiterDesc->firstNode Address: %p - size(%lu)\n", &myPoiterDesc->firstNode, sizeof(&myPoiterDesc->firstNode));
    printf("Main() myPoiterDesc->firstNode Value: %p - size(%lu)\n", myPoiterDesc->firstNode, sizeof(myPoiterDesc->firstNode));

    printf("Main() myPoiterDesc->lastNode Address: %p - size(%lu)\n", &myPoiterDesc->lastNode, sizeof(&myPoiterDesc->lastNode));
    printf("Main() myPoiterDesc->lastNode Value: %p - size(%lu)\n", myPoiterDesc->lastNode, sizeof(myPoiterDesc->lastNode));

    valueInitWithPointer(myPoiterDesc);
    puts("----------------------------------------------------------------");

    printf("Main() myPoiterDesc Address: %p - size(%lu)\n", &myPoiterDesc, sizeof(&myPoiterDesc));
    printf("Main() myPoiterDesc Value: %p - size(%lu)\n", myPoiterDesc, sizeof(myPoiterDesc));

    printf("Main() myPoiterDesc->firstNode Address: %p - size(%lu)\n", &myPoiterDesc->firstNode, sizeof(&myPoiterDesc->firstNode));
    printf("Main() myPoiterDesc->firstNode Value: %p - size(%lu)\n", myPoiterDesc->firstNode, sizeof(myPoiterDesc->firstNode));

    printf("Main() myPoiterDesc->lastNode Address: %p - size(%lu)\n", &myPoiterDesc->lastNode, sizeof(&myPoiterDesc->lastNode));
    printf("Main() myPoiterDesc->lastNode Value: %p - size(%lu)\n", myPoiterDesc->lastNode, sizeof(myPoiterDesc->lastNode));

    
    puts("\n\n\n----------Reference Init with Poiter----------");
    printf("Main() myPoiterDesc Address: %p - size(%lu)\n", &myPoiterDesc, sizeof(&myPoiterDesc));
    printf("Main() myPoiterDesc Value: %p - size(%lu)\n", myPoiterDesc, sizeof(myPoiterDesc));


    printf("Main() myPoiterDesc->firstNode Address: %p - size(%lu)\n", &myPoiterDesc->firstNode, sizeof(&myPoiterDesc->firstNode));
    printf("Main() myPoiterDesc->firstNode Value: %p - size(%lu)\n", myPoiterDesc->firstNode, sizeof(myPoiterDesc->firstNode));

    printf("Main() myPoiterDesc->lastNode Address: %p - size(%lu)\n", &myPoiterDesc->lastNode, sizeof(&myPoiterDesc->lastNode));
    printf("Main() myPoiterDesc->lastNode Value: %p - size(%lu)\n", myPoiterDesc->lastNode, sizeof(myPoiterDesc->lastNode));

    referenceInitWithPointer(&myPoiterDesc);
    puts("----------------------------------------------------------------");

    printf("Main() myPoiterDesc Address: %p - size(%lu)\n", &myPoiterDesc, sizeof(&myPoiterDesc));
    printf("Main() myPoiterDesc Value: %p - size(%lu)\n", myPoiterDesc, sizeof(myPoiterDesc));

    printf("Main() myPoiterDesc->firstNode Address: %p - size(%lu)\n", &myPoiterDesc->firstNode, sizeof(&myPoiterDesc->firstNode));
    printf("Main() myPoiterDesc->firstNode Value: %p - size(%lu)\n", myPoiterDesc->firstNode, sizeof(myPoiterDesc->firstNode));

    printf("Main() myPoiterDesc->lastNode Address: %p - size(%lu)\n", &myPoiterDesc->lastNode, sizeof(&myPoiterDesc->lastNode));
    printf("Main() myPoiterDesc->lastNode Value: %p - size(%lu)\n", myPoiterDesc->lastNode, sizeof(myPoiterDesc->lastNode));
}