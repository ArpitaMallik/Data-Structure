#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;   // return updated head
}

void Print(struct Node* head){
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;  // local variable

    int n, x;
    printf("How many numbers?\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        head = Insert(head, x);  // IMPORTANT
    }

    Print(head);
}