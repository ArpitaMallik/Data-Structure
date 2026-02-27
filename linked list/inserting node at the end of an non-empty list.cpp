#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

int main() {
    Node* A = nullptr;

    Node* temp = new Node;   // allocate memory

    temp->data = 2;
    temp->link = nullptr;

    A = temp;
    
    temp = new Node;
    temp->data = 4;
    A->link = temp;
    temp->link = NULL;

    Node* temp1 = A;
    while(temp1 != NULL){
        cout << temp1->data << " ";
        temp1 = temp1->link;
    }
}
