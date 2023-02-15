#include<iostream>
using namespace std;

class Node
{
	int data;
	Node *next;
   public:
	Node(int);
	int getData();
	Node *getNext();
	void setData(int);
	void setNext(Node *);
};
