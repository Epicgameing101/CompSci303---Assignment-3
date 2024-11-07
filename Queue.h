#pragma once
#include <iostream>
using namespace std;

template <typename Q>
class Queue {
private:
    struct Node {
        Q data;
        shared_ptr<Node> next;
        Node(Q value) : data(value), next(nullptr) {}
    };

    shared_ptr<Node> frontNode;
    shared_ptr<Node> rearNode;
    int count;

public:
    Queue();
    void push(Q value);
    void pop();
    Q front();
    int size();
    bool empty();
    void move_to_rear();
    void display();
};

#include "Queue.cpp" //for the template 
