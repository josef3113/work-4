#include <iostream>
#include <queue>
#include "Node.h"
#include "Queue.h"

using namespace std;

Queue::Queue()
{
}


void Queue::addNode(Node &toadd)
{
	newQ.push(toadd);

}

Node Queue::getNode()
{
	if (!newQ.empty())
	{
		Node temp;
		temp=newQ.front();
		newQ.pop();
		cout<<"pop out"<<endl;
		return temp;
    }
	else
	{
		cout<<"the queue is empty\n";
	}
}

Node Queue::topNode()
{
	return (newQ.front());
}

int Queue::isempty()
{
	if(newQ.empty())
		return 1;
	else 
		return 0;
}

void printQueue(Queue toprint)              //printQueue(Queue&) so in during print is delete the queue!!!!!
{
	if(toprint.isempty())
	{
		cout<<"the queue is empty\n";
	}
	else
	{
		//Queue copy=toprint;

		int i=1;
		while (!toprint.isempty())
			{
				cout<<i<<")";
				printNode(toprint.getNode());
				i++;
			}
	}
}