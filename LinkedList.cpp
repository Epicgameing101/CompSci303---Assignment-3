#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::push(int data) {
    auto newNode = make_shared<Node>(data);
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertionSort() {
    shared_ptr<Node> sorted = nullptr;
    shared_ptr<Node> current = head;

    while (current != nullptr) {
        shared_ptr<Node> next = current->next;
        sortedInsert(sorted, current);
        current = next;
    }
    head = sorted;
}

void LinkedList::sortedInsert(shared_ptr<Node>& sorted, shared_ptr<Node>& newNode) {
    if (!sorted || sorted->data >= newNode->data) {
        newNode->next = sorted;
        sorted = newNode;
    }
    else {
        shared_ptr<Node> current = sorted;
        while (current->next && current->next->data < newNode->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void LinkedList::display() {
    shared_ptr<Node> temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
