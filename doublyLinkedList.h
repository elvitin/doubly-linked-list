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

void init(list *desc)
{
    desc->firstNode = desc->lastNode = NULL;
}

node *createNode(int info)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->prev = newNode->next = NULL;
    newNode->data = info;
    return newNode;
}
/*
void inserirNoInicio (list *LD, int x)
{
	node *nova = (node *) malloc (sizeof(node));
	nova->data = x;
	nova->prev = NULL;
	nova->next = (*LD).firstNode;
	
	if ((*LD).firstNode == NULL)
		(*LD).firstNode = (*LD).lastNode = nova;
	else
	{
		(*LD).firstNode->prev = nova;
		(*LD).firstNode = nova;
	}
}
*/
void insertBefore(list *desc, int info)
{
    if (desc->firstNode == NULL)
        desc->firstNode = desc->lastNode = createNode(info);
    else
    {
        desc->firstNode->prev = createNode(info);
        desc->firstNode->prev->next = desc->firstNode;
        desc->firstNode = desc->firstNode->prev;
    }
}

void insertAfter(list *desc, int info)
{
    if (desc->lastNode == NULL)
        desc->lastNode = desc->firstNode = createNode(info);
    else
    {
        desc->lastNode->next = createNode(info);
        desc->lastNode->next->prev = desc->lastNode;
        desc->lastNode = desc->lastNode->next;
    }
}

node *searchNode(list desc, int info)
{   
    while (desc.firstNode != NULL && desc.firstNode->data != info)
        desc.firstNode = desc.firstNode->next;

    return desc.firstNode;
}

char isEmpty(list desc)
{
    return desc.firstNode == NULL;
}

void deleteNode(list *desc, int info)
{
    node *node = searchNode(*desc, info);
    if (node != NULL)
    {
        if (node == desc->firstNode && node == desc->lastNode)
            desc->firstNode = desc->lastNode = NULL;
        else
        {
            if (node == desc->firstNode)
            {
                desc->firstNode = node->next;
                desc->firstNode->prev = node->prev;
            }
            else if (node == desc->lastNode)
            {
                desc->lastNode = node->prev;
                desc->lastNode->next = node->next;
            }
            else
            {
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }
        }
        free(node);
    }
}

void display(list desc)
{
    while (desc.firstNode != NULL) {
        printf("[%d]", desc.firstNode->data);
        desc.firstNode = desc.firstNode->next;
    }
    putchar('\n');
}
