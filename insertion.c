// insertion of  node in the End and  Starting of the doubly linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} node;

void insertLast(node **s, int data)
{
    node *p, *t;
    p = (node *)(malloc(sizeof(node)));

    p->data = data;
    p->next = NULL;
    if (*s == NULL)
    {
        *s = p;
    }
    else
    {
        t = *s;
        while (t->next != NULL)
        {
            t = t->next;
        }
        p->prev = t;
        t->next = p;
    }
}
void insertStart(node **s, int data)
{
    node *p, *t;
    p = (node *)(malloc(sizeof(node)));

    p->data = data;
    p->prev = NULL;
    p->next = *s;
    *s = p;
}

int main()
{
    node *start = NULL;
    insertLast(&start, 10);
    insertLast(&start, 20);
    insertLast(&start, 30);
    insertStart(&start, -10);
    insertStart(&start, -20);
    insertStart(&start, -30);
    node *temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}