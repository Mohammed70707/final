/*My name: Mohammed Awad Musa Mohammed
    Class: second 
Department: computer
*/


#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
class slist{
   struct Node
{
		int value;
	slist *nxet;
     
	public:
		void search();
		void add();
		void del();
		void modification ();
		void merge();
};
};
	class userdata {
		public:
			string name;
			int  number;
			string  title;
			string  nickname;
	};
void slist ::search(1)
{
	if(head == NULL)
	cout<< "\n list is empty ";
	else{
		str m;
		cout <<"\n Enter a value you to search about = ";
		cin>> m;
		slist  *c = head;
		while (c!=NULL && m!=c->value)
		c =c->nxet;
		if(c==NULL)
		cout <<"\n Item is not found ";
		else
		cout <<"\n Item is found ";
	}
	getch();
}
void slist :: add()
{
	slist  *node = new slist;
	cout << "\n Enter a value  =   ";
	cin >>node -> value;
	node->nxet = NULL;
	if (head ==NULL)
	      head =node;
	else
	{
		slist *prev= NULL, *cur=head;
		while(cur!=NULL&& node->value > cur->value)
		{
			prev= cur;
			cur = cur->nxet;
		}
		if(prev == NULL)
		{
			node->nxet = head;
			head = node;
		}
		else if(cur == NULL)
		prev->nxet =node;
		else
		{
			node ->nxet = cur;
			prev ->nxet = node;	 
		}
	}
	getch();
}
void  slist ::del()
{
	if(head==NULL)
	{
		cout << "\n list is empty ";
		getch();
	}
	{
		else
	}
	int m;
	cout << "\n Enter a value to delete = ";
	cin>> m;
	slist *prev = NULL, *cur =head;
	while(cur !=NULL && m != cur->value)
	{
		prev = cur;
		cur = cur->nxet;
		
	}
	{
		if (cur==NULL)
		
	{
			cout << "\n value is not found ";
			getch();
	}
		else if(prev==NULL)
		{
			head =head->nxet;
			delete cur;
			
		}
		else if (cur->nxet ==NULL)
		{
			prev->nxet= NULL;
			delete cur;
		}
		else
		{
			prev->nxet = cur->nxet;
			delete cur;
		}
		else
		{
			prev->nxet = cur->nxet;
			delete cur;
		}
	}
	getch();
}
void slist ::modification()
    void modification()
    {
        cout << "<<<< THE STILST... >>>>\n";
        Node*cur = first;
        cout << "[ ";
        while (cur != NULL)
        {
            cout << cur->item <<" ";
            cur=cur->next;
        }  
        cout << "]\n";      
    }

};

void slist ::merge()

	node *p;
	for (p=start;p!=NULL;p=p->link)
	cout<<p->data<<endl;
	}


void  main()
{
	user data    user data1;
	 user data1.name ="ahmed ali mohammed ";
	 user data1.number = "0912301234";
	 user data1.title = "atbara,Airport district";
     user data1.nickname ="wed elawad";
     
        cout<<"user data --------------------\n";
        cout<<name: <<user data1.name<<"\n";
     	cout<<number: <<user data1.number<<"\n";
     	cout<<title: <<user data1.title<<"\n";
     	cout<<nickname: <<user data1.nickname<<"\n";
     	
	for(i=0;i<=50;i++)
	int op;
	while (1)
	{
		clrscr ();
			cout << "\n 1- Search";
		cout << "\n 2- Add";
			cout << "\n 3- Delete";
		cout << "\n 4- Modification ";
		    cout<< "\n 5- Merge";
	        	cout << "\n 6- Exit";
		cout << "\n Enter your choice.....";
		cin>> op;
		switch(op)
	{
		case 1:
			head ->search();
			break;
      	case 2:   
			head->add();
			break;
    	case 3:
	    	head->del();
	    	break;
		case 4:		 
			head->modification();
			break;
		case 5:
			head->merge();
			break;
		case 6:
			exit(0);
			break;
			default: cout << "\n Erorr input ";
		}
				
	}
	rutern 0;
	
}
