#ifndef QUEUE_H
#define QUEUE_H
#include <queue>
#include "Node.h"

using namespace std;

class Queue
{
private:
	queue<Node> newQ; 
public:
	Queue();
	void addNode(Node&);
	Node getNode();
	Node topNode();
	int isempty();
	friend void printQueue(Queue);//if printQueue(Queue&)

};

void printQueue(Queue );//printQueue(Queue&)

#endif