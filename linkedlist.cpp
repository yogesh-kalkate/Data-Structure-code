#include"linkedlist.h"
/////////////////////////////////////////
LinkedList::LinkedList()
{
	start = NULL;
}
/////////////////////////////////////////
void LinkedList::InsertBeg(int d)
{
	Node *temp=new Node(d);
	temp->setNext(start);
	start = temp;
}
/////////////////////////////////////////
void LinkedList::Display()
{
	if(start == NULL)
	{
		cout<<"\nNo nodes to print";
	}
	else
	{
		Node *p=start;
		while(p!=NULL)
		{
			cout<<"\t"<<p->getData();
			p=p->getNext();
		}
	}
}
/////////////////////////////////////////
void LinkedList::InsertEnd(int d)
{
	Node *temp=new Node (d);
	if (start == NULL)                   //if start is null
	{
		start = temp ;
		return;
	}
	Node *p=start;
	//we need to transverse to reach to the lasst node
	while(p->getNext()!= NULL)
	{
		p=p->getNext();
	}
	p->setNext(temp);
}
/////////////////////////////////////////////
void LinkedList::InsertAtPos(int data,int pos)
{
	Node *temp= new Node (data);
	if (start == NULL)
	{
		start =temp;
		return ;
	}
	//insert at beginning 
	if(pos == 1)
	{
		temp->setNext(start);
		start = temp;
		return;
	}
	int i = 1;
	Node *p = start;
	//traverse to the reach pos-1
	while(i<pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++ ;
		
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
}
/////////////////////////////////////////////////////////
void LinkedList::DeleteBeg()
{
	//empty list
	if(start==NULL)
	{
		cout<<"\nNo element  to delete" ;
		return ;
	}
	Node *p=start;
	cout<<"\n"<<p->getData()<<"is getting deleted.." ;
	start = p->getNext();
	delete p;
}
///////////////////////////////////////////
void LinkedList::DeleteEnd()
{
	//empty list check
	if (start == NULL)
	{
		cout<<"\n no node to delete " ;
		return;
	}
	Node *p=start;
	//only one node is present
	if(p->getNext()==NULL)
	{                                                                  //POSIBILITY 1
		cout<<"\n"<<p->getData()<<" is deleted " ;
		delete p;
		start =NULL;
		return;
	}
	//traverse to second last node
	while(p->getNext()->getNext()!=NULL)
	{
		p=p->getNext();
	}
	cout<<"\n"<<p->getNext()->getData()<<" is deleted " ;
	delete p->getNext();
	p->setNext(NULL);

}
/////////////////////////////////////////////////////////////////////////////
void LinkedList::DeleteAtPos(int Pos)
{
	//check empty
	if (start == NULL)
	{
		cout<<"\n no node to delete " ;
		return;
	}
	Node *p = start;
	if(Pos == 1)                                            //if only 1 node in that 
	{
		start=start->getNext();
		cout<<"\n" <<p->getData()<<"..is deleted" ;
		delete p;
		return ;
	}
	int i=1;
	while(p->getNext()!=NULL && i<Pos-1)
	{
		p=p->getNext();
		i ++;
		
	}
	if (i == Pos-1)
	{
		Node *q = p->getNext();
		cout<<"\n"<<q->getData()<<" is deleted" ;
		p->setNext(q->getNext());
		delete q;
		return;
	}
	else
	{
		cout<<"\n invalid position" ;
	}	
}
////////////////////////////////////////////////////////////////////////////
LinkedList::~LinkedList()
{
	if (start!=NULL)
	{
		Node *p=start;
		while(p!=NULL)
		{
			start=start->getNext();
			delete p;
			p=start;
		}
	}
}



