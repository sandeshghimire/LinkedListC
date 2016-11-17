#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <stdio.h>
#include <stdlib.h>

enum 
{
    LL_SUCCESS, 
    LL_FAILED
};


struct linkedlist
{
    int data;
    struct linkedlist * next;
    struct linkedlist * prev;
}linkedlist;





int init_linkedlist(struct linkedlist ** head);
int length(struct linkedlist ** head);
int print(struct linkedlist ** head);
int reverse(struct linkedlist ** head);
int sort(struct linkedlist ** head);


int enqueue(struct linkedlist ** head, int item);
int dequeue(struct linkedlist ** head);
int push(struct linkedlist ** head, int item);
int pop(struct linkedlist ** head);


int add_to_list(struct linkedlist ** head, int item, int index);
int remove_from_list(struct linkedlist ** head,  int index);



#endif /*LINKEDLIST_H*/