#include "Queue.h"
#include "RLS.h"
#include "LinkedList.h"
using namespace std;

int main() {
    // Q1
    cout << "Question 1:" << endl;
    Queue<int> q;
    //Creates a queue from 1-10
    for (int i = 1; i <= 10; i++) {
        q.push(i);
    }
    cout << "Queue: ";
    q.display();
    q.move_to_rear();
    cout << "Queue after using move to rear: ";
    q.display();

    // Q2
    cout << "\nQuestion 2:" << endl;
    //Creating a vector
    vector<int> vec = { 25, 6, 95, 2, 2, 1, 95 };
    int target = 95;
    int lastOccurrence = findLastOccurrence(vec, target);
    cout << "The last time " << target << " was seen at index: " << lastOccurrence << endl;

    // Q3
    cout << "\nQuestion 3:" << endl;
    LinkedList list;
    //Creating a list
    list.push(30);
    list.push(4);
    list.push(80);
    list.push(5);
    list.push(1);

    cout << "Unsorted: ";
    list.display();
    list.insertionSort();
    cout << "Sorted: ";
    list.display();

    return 0;
}
