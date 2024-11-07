#include <iostream>
using namespace std;

struct Node {
    int data;
    shared_ptr<Node> next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    shared_ptr<Node> head;
    LinkedList();
    void push(int data);
    void insertionSort();
    void display();

private:
    void sortedInsert(shared_ptr<Node>& sorted, shared_ptr<Node>& newNode);
};

