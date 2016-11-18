#include "linkedlist.h"




int init_linkedlist(struct linkedlist **head)
{
    *head = NULL;
    printf("The list has been initilized, list is clear \n");
    return LL_SUCCESS;
}

int length(struct linkedlist **head)
{
    unsigned int length = 0;
    struct linkedlist * cur = *head;
    while(cur != NULL)
    {
        length++;
    }
    printf("the length of linkedlist is %d \n", length);
    return length;
}
int print(struct linkedlist **head)
{
    unsigned int i = 0;
    struct linkedlist * cur = *head;


    if(cur == NULL)
    {
        printf("The list is empty \n");
        return LL_FAILED;
    }

    while(cur != NULL)
    {
        printf("index %d value %d ", i++, cur->data );
    }
    return LL_SUCCESS;
}
int reverse(struct linkedlist **head)
{
    struct linkedlist * cur = *head;
    struct linkedlist * next = *head;

    while(cur != NULL )
    {
        cur = cur->next;
    }
      return 0;
}
int sort(struct linkedlist **head)
{


    return 0;
}

int enqueue(struct linkedlist **head, int item)
{
    return 0;
}
int dequeue(struct linkedlist **head)
{
    return 0;
}
int push(struct linkedlist **head, int item)
{
    return 0;
}
int pop(struct linkedlist **head)
{
    return 0;
}

int add_to_list(struct linkedlist **head, int item, int index)
{
    struct linkedlist * cur = *head;
    
    if( index > length(cur) )
    {
        printf("Out of index \n");
        return LL_FAILED;
    }

    return 0;
}
int remove_from_list(struct linkedlist **head, int index)
{
    return 0;
}
