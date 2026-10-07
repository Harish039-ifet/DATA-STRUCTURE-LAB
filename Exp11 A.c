#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 3

struct node {
    int data;
    struct node *next;
};

struct node *head[TABLE_SIZE] = {NULL};

void insert(int val) {
    int i = val % TABLE_SIZE;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newnode->data = val;
    newnode->next = NULL;
    if (head[i] == NULL) {
        head[i] = newnode;
    } else {
        struct node *c = head[i];
        while (c->next != NULL) {
            c = c->next;
        }
        c->next = newnode;
    }
}

void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Entries at index %d: ", i);
        struct node *temp = head[i];
        if (temp == NULL) {
            printf("No Hash Entry\n");
        } else {
            while (temp != NULL) {
                printf("%d -> ", temp->data);
                temp = temp->next;
            }
            printf("NULL\n");
        }
    }
}

int main() {
    int opt, val;
    while (1) {
        printf("\nPress 1. Insert\t 2. Display \t3. Exit \n");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                printf("\nEnter a value to insert into hash table: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid option\n");
        }
    }
    return 0;
}

/*
OUTPUT:

Press 1. Insert  2. Display  3. Exit
1

Enter a value to insert into hash table: 12

Press 1. Insert  2. Display  3. Exit
1

Enter a value to insert into hash table: 7

Press 1. Insert  2. Display  3. Exit
1

Enter a value to insert into hash table: 3

Press 1. Insert  2. Display  3. Exit
2
Entries at index 0: 12 -> 3 -> NULL
Entries at index 1: 7 -> NULL
Entries at index 2: No Hash Entry

Press 1. Insert  2. Display  3. Exit
1

Enter a value to insert into hash table: 15

Press 1. Insert  2. Display  3. Exit
2
Entries at index 0: 12 -> 3 -> 15 -> NULL
Entries at index 1: 7 -> NULL
Entries at index 2: No Hash Entry

Press 1. Insert  2. Display  3. Exit
3
*/
