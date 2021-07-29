struct doublyLinkedNode
{
    struct doublyLinkedNode *prev;
    int data;
    struct doublyLinkedNode *next;
};
typedef struct doublyLinkedNode node;


struct doublyLinkedList
{
    struct doublyLinkedNode *firstNode;
    struct doublyLinkedNode *lastNode;
};
typedef struct doublyLinkedList list;


void valueInit(list desc)
{    
    puts("----------------------------------------------------------------");
    desc.firstNode = desc.lastNode = NULL;

    printf("Init() desc Address: %p\n", &desc);
    //printf("Init() desc Value: %p\n", desc); //Erro

    printf("Init() firstNode Address: %p\n", &desc.firstNode);
    printf("Init() lastNode Address: %p\n", &desc.lastNode);

    printf("Init() firstNode Value: %p\n", desc.firstNode);
    printf("Init() lastNode Value: %p\n", desc.lastNode);
}


void referenceInit(list *desc)
{    
    puts("----------------------------------------------------------------");
    (*desc).firstNode = (*desc).lastNode = NULL;

    printf("Init() desc Address: %p\n", &desc);
    printf("Init() desc Value: %p\n", desc);

    printf("Init() firstNode Address: %p\n", &(*desc).firstNode);
    printf("Init() lastNode Address: %p\n", &(*desc).lastNode);

    printf("Init() firstNode Value: %p\n", (*desc).firstNode);
    printf("Init() lastNode Value: %p\n", (*desc).lastNode);
}

void valueInitWithPointer(list *desc)
{

    puts("----------------------------------------------------------------");
    printf("Init() desc Address: %p - size(%lu)\n", &desc, sizeof(&desc));
    printf("Init() desc Value: %p - size(%lu)\n", desc, sizeof(desc));


    printf("Init() desc->firstNode Address: %p - size(%lu)\n", &desc->firstNode, sizeof(&desc->firstNode));
    printf("Init() desc->firstNode Value: %p - size(%lu)\n", desc->firstNode, sizeof(desc->firstNode));

    printf("Init() desc->lastNode Address: %p - size(%lu)\n", &desc->lastNode, sizeof(&desc->lastNode));
    printf("Init() desc->lastNode Value: %p - size(%lu)\n", desc->lastNode, sizeof(desc->lastNode));

    puts("----------------------------------------------------------------");

    list *newDesc = (list*) malloc(sizeof(list));
    printf("Init() newDesc Address: %p - size(%lu)\n", &newDesc, sizeof(&newDesc));
    printf("Init() newDesc Value: %p - size(%lu)\n", newDesc, sizeof(newDesc));

    printf("Init() newDesc->firstNode Address: %p - size(%lu)\n", &newDesc->firstNode, sizeof(&newDesc->firstNode));
    printf("Init() newDesc->firstNode Value: %p - size(%lu)\n", newDesc->firstNode, sizeof(newDesc->firstNode));

    printf("Init() newDesc->lastNode Address: %p - size(%lu)\n", &newDesc->lastNode, sizeof(&newDesc->lastNode));
    printf("Init() newDesc->lastNode Value: %p - size(%lu)\n", newDesc->lastNode, sizeof(newDesc->lastNode));
    
    puts("----------------------------------------------------------------");
    newDesc->firstNode = newDesc->lastNode = NULL;
    printf("Init() newDesc Address: %p - size(%lu)\n", &newDesc, sizeof(&newDesc));
    printf("Init() newDesc Value: %p - size(%lu)\n", newDesc, sizeof(newDesc));

    printf("Init() newDesc->firstNode Address: %p - size(%lu)\n", &newDesc->firstNode, sizeof(&newDesc->firstNode));
    printf("Init() newDesc->firstNode Value: %p - size(%lu)\n", newDesc->firstNode, sizeof(newDesc->firstNode));

    printf("Init() newDesc->lastNode Address: %p - size(%lu)\n", &newDesc->lastNode, sizeof(&newDesc->lastNode));
    printf("Init() newDesc->lastNode Value: %p - size(%lu)\n", newDesc->lastNode, sizeof(newDesc->lastNode));



    puts("----------------------------------------------------------------");
    desc = newDesc;
    printf("Init() desc Address: %p - size(%lu)\n", &desc, sizeof(&desc));
    printf("Init() desc Value: %p - size(%lu)\n", desc, sizeof(desc));


    printf("Init() desc->firstNode Address: %p - size(%lu)\n", &desc->firstNode, sizeof(&desc->firstNode));
    printf("Init() desc->firstNode Value: %p - size(%lu)\n", desc->firstNode, sizeof(desc->firstNode));

    printf("Init() desc->lastNode Address: %p - size(%lu)\n", &desc->lastNode, sizeof(&desc->lastNode));
    printf("Init() desc->lastNode Value: %p - size(%lu)\n", desc->lastNode, sizeof(desc->lastNode));
}


void referenceInitWithPointer(list **desc)
{

    puts("----------------------------------------------------------------");
    printf("Init() desc Address: %p - size(%lu)\n", &desc, sizeof(&desc));
    printf("Init() desc Value: %p - size(%lu)\n", desc, sizeof(desc));


    printf("Init() desc->firstNode Address: %p - size(%lu)\n", &(*desc)->firstNode, sizeof(&(*desc)->firstNode));
    printf("Init() desc->firstNode Value: %p - size(%lu)\n", (*desc)->firstNode, sizeof((*desc)->firstNode));

    printf("Init() desc->lastNode Address: %p - size(%lu)\n", &(*desc)->lastNode, sizeof(&(*desc)->lastNode));
    printf("Init() desc->lastNode Value: %p - size(%lu)\n", (*desc)->lastNode, sizeof((*desc)->lastNode));

    puts("----------------------------------------------------------------");

    list *newDesc = (list*) malloc(sizeof(list));
    printf("Init() newDesc Address: %p - size(%lu)\n", &newDesc, sizeof(&newDesc));
    printf("Init() newDesc Value: %p - size(%lu)\n", newDesc, sizeof(newDesc));

    printf("Init() newDesc->firstNode Address: %p - size(%lu)\n", &newDesc->firstNode, sizeof(&newDesc->firstNode));
    printf("Init() newDesc->firstNode Value: %p - size(%lu)\n", newDesc->firstNode, sizeof(newDesc->firstNode));

    printf("Init() newDesc->lastNode Address: %p - size(%lu)\n", &newDesc->lastNode, sizeof(&newDesc->lastNode));
    printf("Init() newDesc->lastNode Value: %p - size(%lu)\n", newDesc->lastNode, sizeof(newDesc->lastNode));
    
    puts("----------------------------------------------------------------");
    newDesc->firstNode = newDesc->lastNode = NULL;
    printf("Init() newDesc Address: %p - size(%lu)\n", &newDesc, sizeof(&newDesc));
    printf("Init() newDesc Value: %p - size(%lu)\n", newDesc, sizeof(newDesc));

    printf("Init() newDesc->firstNode Address: %p - size(%lu)\n", &newDesc->firstNode, sizeof(&newDesc->firstNode));
    printf("Init() newDesc->firstNode Value: %p - size(%lu)\n", newDesc->firstNode, sizeof(newDesc->firstNode));

    printf("Init() newDesc->lastNode Address: %p - size(%lu)\n", &newDesc->lastNode, sizeof(&newDesc->lastNode));
    printf("Init() newDesc->lastNode Value: %p - size(%lu)\n", newDesc->lastNode, sizeof(newDesc->lastNode));



    puts("----------------------------------------------------------------");
    *desc = newDesc;
    printf("Init() desc Address: %p - size(%lu)\n", &desc, sizeof(&desc));
    printf("Init() desc Value: %p - size(%lu)\n", desc, sizeof(desc));


    printf("Init() desc->firstNode Address: %p - size(%lu)\n", &(*desc)->firstNode, sizeof(&(*desc)->firstNode));
    printf("Init() desc->firstNode Value: %p - size(%lu)\n", (*desc)->firstNode, sizeof((*desc)->firstNode));

    printf("Init() desc->lastNode Address: %p - size(%lu)\n", &(*desc)->lastNode, sizeof(&(*desc)->lastNode));
    printf("Init() desc->lastNode Value: %p - size(%lu)\n", (*desc)->lastNode, sizeof((*desc)->lastNode));
}