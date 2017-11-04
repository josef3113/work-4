// ConsoleApplication2.cpp : Defines the entry point for the console application.


#include<queue>
#include <iostream>
#include "Node.h"
#include "Queue.h"

using namespace std;


int main()
{

	Queue  myQ;

	printQueue(myQ);
	Node yosi("yosi");
	Node einav("einav");
	Node doli("doli");
	Node david("david");
	Node izak("izak");
	
	myQ.addNode(yosi);
	myQ.addNode(einav);
	myQ.addNode(doli);
	myQ.addNode(david);
	myQ.addNode(izak);
	printQueue(myQ);

	cout<<"get the node\n";

	myQ.getNode();
	printNode(myQ.getNode());

	printQueue(myQ);

	while(!myQ.isempty())
	{
		myQ.getNode();
	}
	cout <<"after delete all\n";
	printQueue(myQ);




	
	cout << "it success" << endl;
	system("pause");
}

