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

    return 0;
}