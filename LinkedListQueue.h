#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include "QueueADT.h"

class LinkedListQueue : public QueueADT {
private:
    struct Node {
        int data;
        Node* next;
        Node(int data, Node* next = nullptr){
            this->data = data;
            this->next = next;
        }
    };
    Node* head;
    Node* tail;
    int count;

public:
    LinkedListQueue();
    ~LinkedListQueue();
    void enqueue(int);
    void dequeue();
    int front();
    bool isEmpty();
    int size();
};


#endif // LINKEDLISTQUEUE_H