#include <stdio.h>
#include <stdlib.h>

//define structure for a node
struct Node {
    int data;
    struct Node* next ;

};

int main() {
    struct Node *head = NULL , *temp = NULL , *newNode = NULL;
    int choice;

    do {
        //crete a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for new node: ");
        scanf("%d",&newNode->data);
        newNode->next = NULL;
        //if list is empty , new node becomes head
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        }

        else {
            temp->next = newNode;
            temp = newNode;
        }
    
        printf("Press 1 for YES , any other for NO : " );
        scanf("%d", &choice);
    }
    while(choice == 1);
    struct Node *p;
    p = head;
    while(p!=NULL){
        printf("%d " ,p->data);
        p=p->next;
    }
}




