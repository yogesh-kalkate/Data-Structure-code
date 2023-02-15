#include "linkedlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList l;
	int choice = 0;
	while(choice!=10)
	{
		cout<<"\n\t\t1.Insert at the beginning";
		cout<<"\n\t\t2.Display";
		cout<<"\n\t\t3.Insert at the end";
		cout<<"\n\t\t4.Insert at the pos";
		cout<<"\n\t\t5.delete at the beg" ;
		cout<<"\n\t\t6.delete at the end" ;
		cout<<"\n\t\t7.delete at pos" ;
		cout<<"\n\t\t10.Exit";
		cout<<"\nEnter your choice " ;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int data;
					cout<<"\nEnter data" ;
					cin>>data;
					l.InsertBeg(data);
					
				}
				break;
			case 2:
				l.Display();
				break;
			case 3:
				{
					int data;
					cout<<"\nenter data";
					cin>>data;
					l.InsertEnd(data);
				}
				break;
			case 4 :
				{
					int data,pos;
					cout<<"\n enter data and position" ;
					cin>>data>>pos;
					l.InsertAtPos(data,pos);
				}
				break;
			case 5 :
				
					l.DeleteBeg();
				break;
			case 6 :
				  
				   l.DeleteEnd();
				break;
			case 7 :
				{
					int Pos;
					cout<<"\n enter position" ;
					cin>>Pos;
					l.DeleteAtPos(Pos);
				}
				break;
				
			
			case 10:
				cout<<"\n=========End of Program=======";
				break;
			default:
				cout<<"\nInvalid choice";
		}
	}
	return 0;
}
