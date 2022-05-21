#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;

// Function to get the LENGTH of the linked-list
int length()
{
    if (head == NULL)
        return 0;
    else
    {
        int length = 0;
        struct node *traverse = head;
        while (traverse->link != NULL)
        {
            length++;
            traverse = traverse->link;
        }
        return length;
    }
}
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
    if (head == NULL)
        printf("\nNo elements to delete...");
    else
    {
        struct node *traverse = head;
        struct node *holdNode;
        while (traverse->link->link != NULL)
        {
            traverse = traverse->link;
        }
        holdNode = traverse->link;
        traverse->link = NULL;
        printf("\n%d : Deleted...", holdNode->data);
        free(holdNode);
    }
}
// Function to DELETE a node from the FRONT
void delete_front()
{
    if (head == NULL)
        printf("\nNo elements to delete...");
    else
    {
        struct node *holdFrontNode = head;
        head = head->link;
        holdFrontNode->link = NULL;
        printf("\n%d : Deleted...", holdFrontNode->data);
        free(holdFrontNode);
    }
}
// Funciton to DELETE a node from the SPECIFIED LOCATION
void delete_at_location()
{
    if (head == NULL)
        printf("\nNo elements to delete...");
    else
    {
        int location;
        printf("\nEnter the location you want to delete the node, count first node to be at location 1 : ");
        scanf("%d", &location);
        struct node *traverseNode = head;
        while (location > 1)
        {
            traverseNode = traverseNode->link;
        }
        printf("\nYou want to delete %d node : ", traverseNode->data);
        struct node *deleteNode = traverseNode->link;
        traverseNode->link = deleteNode->link;
        printf("\n%d : Deleted...", deleteNode->data);
        deleteNode->link = NULL;
        free(deleteNode);
    }
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
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_front();
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