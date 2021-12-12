// implementation using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
void push(int data)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("stack is empty\n");
    }
    else
    {
        while (temp != 0)
        {
            printf("Elements are:- %d\n", temp->data);
            temp = temp->link;
        }
    }
}
void peek()
{
    if (top == 0)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("Last added Elements is:- %d\n", top->data);
    }
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("popped element is %d\n", top->data);
        top = top->link;
        free(temp);
    }
}

void main()
{

    while (1)
    {
        int choice;
        printf("1. Enter for Push\n");
        printf("2. Enter for Peek\n");
        printf("3. Enter for pop\n");
        printf("4. Enter for Display\n");
        printf("5. Enter to Exit\n");

        printf("\n PLEASE ENTER INPUT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("You have opted for push\n");
            int val;
            printf("Please enter data\n");
            scanf("%d", &val);
            push(val);
            break;

        case 2:
            printf("You have opted for Peek\n");
            peek();
            break;
        case 3:
            printf("You have opted for pop\n");
            pop();
            break;
        case 4:
            printf("You have opted for display\n");
            display();
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("Please Enter Valid Input\n");
            break;
        
        }
    }
}