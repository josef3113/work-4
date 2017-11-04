#ifndef NODE_H
#define NODE_H
#include "Node.h"
#include <iostream>



using namespace std;


Node::Node()
{
}

Node::Node(char* nodename)
{
	static int x=1;
	idnode = x;
	x++;
	name = nodename;
	sum = 0;

}

int Node::getsum()
{
	return sum;
}

void Node::setsum(int x)
{
	sum = x;
}


void printNode(Node &toprint)
{
	cout << "nodename is:" << toprint.name << " sum is:" << toprint.sum <<" id is:"<<toprint.idnode<< endl;
}

#endif
