#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"


void main()
{
    list *myPoiterDesc;
    init(&myPoiterDesc);
    

    insertAfter(myPoiterDesc, 10);
    insertAfter(myPoiterDesc, 11);
    insertBefore(myPoiterDesc, 12);
    insertBefore(myPoiterDesc, 13);
    insertAfter(myPoiterDesc, 14);

    display(myPoiterDesc);

    deleteNode(myPoiterDesc, 12);
    
    display(myPoiterDesc);
}