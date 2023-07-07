#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void addnode(void *head, int entry)
{
    struct Node *current;
    if(head == NULL)
    {
        struct Node *new = malloc(sizeof(struct Node));
        new->data = entry;
        new->link = NULL;
    }
    else
    {
        current = head;
        addnode(current, entry);
    }

}
void removenode()
{
}
void insertnode()
{
}
void printlist()
{
    
}

void select_choice(int choice, void *head)
{
    int data;
    switch (choice)
    {
    case 1:
        printf("Enter the data toe entry:\n");
        scanf("%d", &data);
        addnode(head, data);
        break;
    case 2:
        removenode();
        break;
    case 3:
        insertnode();
        break;
    }
}

int menu()
{
    int choice;
    printf("\t1.Add Node\n");
    printf("\t1.Remove Node\n");
    printf("\t1.Insert Node\n");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    void *head = NULL;
    int choice, dummy;
    while (1)
    {
        choice = menu();
        select_choice(choice, head);
        printf("Current List:\n");
        printlist(head);
    }
    
    return 0;
}