#include <stdio.h>
#include "linkedlist.h"

void printMenu();

int main(int argc, char **argv)
{
    char input = '\0';

    struct linkedlist *head;

    printMenu();
    printf("::   ");
    while (input != 'X')
    {

        input = getchar();
        (void)getchar();
        input = toupper(input);
        switch (input)
        {
        case 'A':
        {
            int data;
            int index;
            printf("Input data ");
            scanf("%d", &data);
            
            printf("Input index ");
            scanf("%d", &index);
            
            printf("the input values are %d and %d \n", data, index);
            add_to_list(&head, data, index);
            break;
        }
        case 'B':
            break;
        case 'C':
            break;
        case 'D':
            break;
        case 'E':
            break;
        case 'F':
            break;
        case 'G':
            break;
        case 'H':
            break;
        case 'I':
            init_linkedlist(&head);
            break;
        case 'J':
            break;
        case 'K':
            break;
        case 'L':
            length(&head);
            break;
        case 'M':
            printMenu();
            break;
        case 'N':
            break;
        case 'O':
            break;
        case 'P':
            print(&head);
            break;
        case 'Q':
            print(&head);
            break;
        case 'R':
            reverse(&head);
            break;
        case 'x':
            break;
        default:
            break;
        }
        printf("::   ");
    }
    return 0;
}

void printMenu()
{
    printf("+=====================+        \n");
    printf("A - Add to list                 \n");
    printf("I - Init linkedlist            \n");
    printf("L - Length of  linkedlist      \n");
    printf("P - Print linkedlist           \n");
    printf("R - Reverse linkedlist           \n");
    printf("+=====================+        \n");
}