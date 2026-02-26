#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link; //A is a pointer to a struct Node
};

int main(){
    struct Node* A;
    A = NULL;

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    (*temp).data = 2; //can also write temp->data = 2;
    (*temp).link = NULL;

    A = temp;
}