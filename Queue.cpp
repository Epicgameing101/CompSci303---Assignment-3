#pragma once
#include "Queue.h"
using namespace std;

template <typename Q>
Queue<Q>::Queue() : frontNode(nullptr), rearNode(nullptr), count(0) {}

template <typename Q>
void Queue<Q>::push(Q value) {
    auto newNode = make_shared<Node>(value);
    if (rearNode) {
        rearNode->next = newNode;
    }
    rearNode = newNode;
    if (!frontNode) {
        frontNode = newNode;
    }
    count++;
}

template <typename Q>
void Queue<Q>::pop() {
    if (!empty()) {
        frontNode = frontNode->next;
        if (!frontNode) {
            rearNode = nullptr;
        }
        count--;
    }
}

template <typename Q>
Q Queue<Q>::front() {
    if (!empty()) {
        return frontNode->data;
    }
    throw runtime_error("Queue is empty");
}

template <typename Q>
int Queue<Q>::size() {
    return count;
}

template <typename Q>
bool Queue<Q>::empty() {
    return count == 0;
}

template <typename Q>
void Queue<Q>::move_to_rear() {
    if (!empty()) {
        Q frontElement = front();
        pop();
        push(frontElement);
    }
}

template <typename Q>
void Queue<Q>::display() {
    Queue<Q> tempQueue = *this; // Making a copy so the orignal stays untouched
    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
}

