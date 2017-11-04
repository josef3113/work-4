#ifndef Node_H
#define Node_H
#include<queue>

using namespace std;

class Node
{
	char * name;
	int sum;
	int idnode;
public:
	Node(char *);
	Node();
	int getsum();
	void setsum(int);

	friend void printNode(Node &);
	

};

void printNode(Node &);



#endif