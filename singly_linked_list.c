#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;

// Funcion to PRINT the linked-list
void display()
{
    if (head == NULL)
    {
        printf("Linked List is empty...\n");
    }
    else
    {
        struct node *tempNode = head;
        while (tempNode)
        {
            printf("%d->", tempNode->data);
            tempNode = tempNode->link;
        }
        printf("NULL\n");
    }
}

// Funciton to ADD a node in the END of the linked-list
void insert_front()
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node *));
    if (tempNode == NULL)
        printf("Insufficient Memory..., List can't be created");
    else
    {
        printf("\nEnter the data you want to insert into the linked list : ");
        scanf("%d", &tempNode->data);
        tempNode->link = NULL;
        if (head == NULL)
            head = tempNode;
        else
        {
            tempNode->link = head;
            head = tempNode;
        }
    }
}

// Function to ADD a node in the FRONT of the linked-list
void insert_end()
{
    struct node *tempNode = (struct node *)malloc(sizeof(struct node *));
    if (tempNode == NULL)
        printf("Insufficient Memory..., List can't be created");
    else
    {
        printf("\nEnter the data you want to insert into the linked list : ");
        scanf("%d", &tempNode->data);
        tempNode->link = NULL;
        if (head == NULL)
            head = tempNode;
        else
        {
            struct node *traverse_till_last = head;
            while (traverse_till_last->link != NULL)
            {
                traverse_till_last = traverse_till_last->link;
            }
            traverse_till_last->link = tempNode;
        }
    }
}

// Function to ADD a node in the SPECIFIED LOCATION
void insert_at_location()
{
}

// Function to DELETE a node from the END
void delete_end()
{
}
// Function to DELETE a node from the FRONT
void delete_front()
{
}
// Funciton to DELETE a node from the SPECIFIED LOCATION
void delete_at_location()
{
}
int main()
{
    int choice;
    while (choice != 8)
    {
        printf("\nChoose the below option : \n");
        printf("1.Print Linked List\n2.Add a node in the end\n3.Add a node in the front\n4.Add a node in the specific location\n5.Delete a node from the end\n6.Delete a node from the front\n7.Delete a node from the specific location\n8.Quit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_front();
            break;
        case 4:
            insert_at_location();
        case 5:
            delete_front();
            break;
        case 6:
            delete_end();
            break;
        case 7:
            delete_at_location();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nYou have enetered a wrong choice...Please choose the correct option given\n");
            break;
        }
    }
    return 0;
}