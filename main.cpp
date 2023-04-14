#include <iostream>
#include "CircularArrayQueue.h"

using namespace std;

int main(){

    CircularArrayQueue queue(1);

    queue.enqueue(2);
    cout << queue.front() << endl;

    queue.dequeue();
    //cout << queue.front() << endl;
    queue.enqueue(3);   
    queue.enqueue(4);
    queue.enqueue(5);

    //cout << queue.front() << endl;
    return 0;
}