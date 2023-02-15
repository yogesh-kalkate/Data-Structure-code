#include"node.h"
//////////////////////////
class LinkedList
{
	Node *start;
	public:
		LinkedList();
		void InsertBeg(int);
		void InsertEnd (int);
		void InsertAtPos(int,int);
		void DeleteBeg();
		void DeleteEnd();
		void DeleteAtPos(int);
		~LinkedList();
		void Display();
};
