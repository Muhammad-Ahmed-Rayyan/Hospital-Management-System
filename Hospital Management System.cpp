#include<iostream>				// for input output stream
#include<conio.h>				// for system pause and clear screen
#include<string.h>				// for string arguments
#include<iomanip>				// for setw
#include<windows.h>				// for graphics
#include<stdlib.h>

using namespace std;

bool check(string);
bool check_alphabet(string);

struct node
{
	string name,fname,dob,ward,id;
	int srNo;
	int days;
	node *next;
};


// Start of the class
class list
{
private:
	int count;
    node *head,*tail;
public:
	list()
	{
		head=tail=NULL;
		count=0;
	}
	bool isEmpty()
	{
		if(head == NULL)
		{
			return true;
		}
		else 
			return false;
	}
// for positioning of the cursor
	void gotoxy(int x, int y)
	{
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}		
// patient data
	void add_data(int n)
	{
		int gp=0;
//1
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
//2
		gotoxy(2,5);	
		Above_horizental();
		gotoxy(2,6);
		Line();
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		below_Horizental();
//3		
		gotoxy(2,8);	
		Above_horizental();
		gotoxy(2,9);
		Line();
		gotoxy(77,9);
		Line();	
		gotoxy(2,10);
		below_Horizental();
//4
		gotoxy(2,11);	
		Above_horizental();
		gotoxy(2,12);
		Line();
		gotoxy(77,12);
		Line();
		gotoxy(2,13);
		below_Horizental();
//5
		gotoxy(2,14);	
		Above_horizental();
		gotoxy(2,15);
		Line();
		gotoxy(77,15);
		Line();
		gotoxy(2,16);
		below_Horizental();
//6
		gotoxy(2,17);	
		Above_horizental();
		gotoxy(2,18);
		Line();
		gotoxy(77,18);
		Line();
		gotoxy(2,19);
		below_Horizental();
//		
		node *temp=new node;
		temp->srNo=n;
//1		
		gotoxy(23,3);
		cout<<"Enter Patient Name: ";
		cin>>temp->name;
		if(isEmpty())
		{
			goto z;
		}
		else
		{
			while(tail->name==temp->name)
			{
				gotoxy(43,3);
				cout<<"                     	  ";
				gotoxy(43,3);
				cin>>temp->name;
			}
		}		
		z:
		while(check(temp->name)==false)
		{
			gotoxy(43,3);
			cout<<"                     	  ";
			gotoxy(43,3);
			cin>>temp->name;
		}
//2		
		gotoxy(23,6);
		cout<<"Enter Patient Father Name: ";
		cin>>temp->fname;
		
		if(isEmpty())
		{
			goto y;
		}
		else
		{
			while(tail->fname==temp->fname)
			{
				gotoxy(50,6);
				cout<<"                     ";
				gotoxy(50,6);
				cin>>temp->fname;
			}
		}
		y:
		while(check(temp->fname)==false)
		{
			gotoxy(50,6);
			cout<<"                     ";
			gotoxy(50,6);
			cin>>temp->fname;
		}
//3
		gotoxy(23,9);
		cout<<"Enter Patient ID: ";
		cin>>temp->id;
		if(isEmpty())
		{
			goto a;
		}
		else
		{
			while(tail->id==temp->id)
			{
				gotoxy(46,9);
				cout<<"                  	 "<<endl;
				gotoxy(46,9);
				cin>>temp->id;
			}
		}
		a:
		while(check_alphabet(temp->id) == false)
			{
				cin.clear();
				gotoxy(46,9);
				cout<<"                  	 "<<endl;
				gotoxy(46,9);
				cin>>temp->id;
			}
//4
		gotoxy(23,12);
		cout<<"Enter Patient Birth Year: ";
		cin>>temp->dob;
//5
		gotoxy(23,15);
		cout<<"Enter Ward Assigned: ";
		cin>>temp->ward;
//6
		sa:
		gotoxy(23,18);
		cout<<"Enter Days of Stay: ";
		gotoxy(43,18);
		cout<<"                   	";
//
		gotoxy(43,18);
		while(!(cin >> temp->days ) )
		{
			gotoxy(43,18);
			cout<<"                   	";
			gotoxy(43,18);
			cin>>temp->days;
		}
		if(temp->days > 30)
		{	
			goto sa;
		}
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
			temp=NULL;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
		count++;
	}
//
	void Edit_Record()
	{
		node *f=new node;
		node *t=new node;
		cout<<"Enter The Serial Number of Patient which you want to Edit :\n";
		while(!(cin>>t->srNo))
			{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto ss;
			}
		f=head;
		while(f!=NULL)
		{
			if(t->srNo==f->srNo)
				break;
			f=f->next;
		}
		if(f==NULL)
		{
			ss:
			system("CLS");
			cout<<"Sorry .....Record of Patient does'nt Exist \n\n";
		}
		else
		{
		system("CLS");
//1
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
//2
		gotoxy(2,5);	
		Above_horizental();
		gotoxy(2,6);
		Line();
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		below_Horizental();
//3
		gotoxy(2,8);	
		Above_horizental();
		gotoxy(2,9);
		Line();
		gotoxy(77,9);
		Line();	
		gotoxy(2,10);
		below_Horizental();
//4
		gotoxy(2,11);	
		Above_horizental();
		gotoxy(2,12);
		Line();
		gotoxy(77,12);
		Line();
		gotoxy(2,13);
		below_Horizental();
//5
		gotoxy(2,14);	
		Above_horizental();
		gotoxy(2,15);
		Line();
		gotoxy(77,15);
		Line();
		gotoxy(2,16);
		below_Horizental();
//6
		gotoxy(2,17);	
		Above_horizental();
		gotoxy(2,18);
		Line();
		gotoxy(77,18);
		Line();
		gotoxy(2,19);
		below_Horizental();
//
		node *tempo=new node;

		gotoxy(23,3);
		cout<<"Enter Patient Name: ";
		cin>>tempo->name;

		while(check(tempo->name)==false)
		{
			gotoxy(43,3);
			cout<<"                     	  ";
			gotoxy(43,3);
			cin>>tempo->name;
		}
//
		f->name=tempo->name;
		gotoxy(23,6);
		cout<<"Enter Patient Father Name: ";
		cin>>tempo->fname;

		while(check(tempo->fname)==false)
		{
			gotoxy(50,6);
			cout<<"                     ";
			gotoxy(50,6);
			cin>>tempo->fname;
		}
		f->fname=tempo->fname;
		gotoxy(23,9);
		cout<<"Enter Patient ID: ";
		cin>>tempo->id;
		while(check_alphabet(tempo->id) == false)
			{
				gotoxy(46,9);
				cout<<"                  	 "<<endl;
				gotoxy(46,9);
				cin>>tempo->id;
			}
		f->id=tempo->id;
//		
		gotoxy(23,12);
		cout<<"Enter Patient DOB: ";
		cin>>tempo->dob;
		f->dob=tempo->dob;
//
		gotoxy(23,15);
		cout<<"Enter Ward Assigned: ";
		cin>>tempo->ward;
		f->ward=tempo->ward;
//
		s:
		gotoxy(23,18);
		cout<<"Enter Days of Stay: ";
		gotoxy(43,18);
		cout<<"                   	";
//
		gotoxy(43,18);
		while(!(cin >> tempo->days ) )
		{
			cin.clear();
			gotoxy(43,18);
			cout<<"                   	";
			gotoxy(43,18);
			cin>>tempo->days;
		}
		if(tempo->days > 30)
		{	
			goto s;
		}
		f->days=tempo->days;
		cout<<"\n\n";
		}
	}

//
	void search_Record()
	{
		node *temp=new node; 
		node *t;
		cout<<"Enter The Serial Number of Patient In Order To Search :\n";
		while(!(cin>>temp->srNo))
			{
				cin.clear();
				system("CLS");
				cout << "Invalid input...! \n\n";
				system("pause");
				system("CLS");
				goto zz;
			}
			t=head;
			while(t!=NULL)
			{
				if( t->srNo==temp->srNo)
					break;	
				t=t->next;
			}
			if(t==NULL)
			{
				zz:
				system("CLS");
				cout<<"Sorry ..... Record does'nt Exist \n\n";
			}	
			else
			{
			display_table();
			gotoxy(2,8);	
			Above_horizental();
			gotoxy(2,9);
			Line();
			gotoxy(77,9);
			Line();
			gotoxy(4,9);
		 	cout<<setw(9)<<left<<t->srNo<<setw(11)<<left<<t->name<<setw(12)<<left<<t->fname<<setw(12)<<left<<t->id<<setw(11)<<left<<t->dob<<setw(13)<<left<<t->ward<<setw(1)<<left<<t->days;
			gotoxy(2,10);
			below_Horizental();	
			}
	}

//
	void Delete_Record()
	{
		int s;
		node *temp;
		node *curr, *pre;
		cout<<"Enter The Serial Number of Patient In Order To Delete :\n";
		while(!(cin>>s))
			{
			cin.clear();
			system("CLS");
			cout << "Invalid input...! \n\n";
			system("pause");
			system("CLS");
			goto aa;
			}
		if(s==head->srNo)
		{
			temp=head;
			head=head->next;
			delete temp;
			cout<<endl<<endl;
			display_table();
			table_data();	
		}
		else
		{
			curr=head;
			pre=NULL;
			while(curr!=NULL)
			{
				if(curr->srNo==s)
				{
					break;
				}
				pre=curr;
				curr=curr->next;
			}
			if(curr==NULL)
			{
				aa:
				system("CLS");
				cout<<"No record Found \n\n";
			}
			else{
				pre->next=curr->next;
				delete curr;
				display_table();
				table_data();
			}				
		}
	}
//
	void Day(float x,float y)
	{
			if(x==y)
			{
				return;
			}
			node *prex=NULL;
			node *currx=head;
			while(currx && currx->days!=x)
			{
				prex=currx;
		 		currx=currx->next;
			}
			node *prey=NULL;
			node *curry=head;
			while(curry && curry->days!=y )
			{
				prey=curry;
				curry=curry->next;
			}
			if(currx==NULL || curry==NULL)
			{
				return;
			}
			if(prey!=NULL)
			{
				prey->next=currx;	
			}
			else
			{
				head=currx;
			}
			if(prex!=NULL)
			{
				prex->next=curry;	
			}
			else
			{
				head=curry;
			}
			node *temp=currx->next;
			currx->next=curry->next;
			curry->next=temp;
	}
//	
	void table_data()
	{
		node *t;
		t=head;
		int x=4;
		int y=8;
		int s=2;
		while(t!=NULL)
		{
			gotoxy(s,y);
			Above_horizental();
			gotoxy(s,y+1);
			Line();
			gotoxy(s+75,y+1);
			Line();
			gotoxy(x,y+1);
			cout<<setw(9)<<left<<t->srNo<<setw(11)<<left<<t->name<<setw(12)<<left<<t->fname<<setw(12)<<left<<t->id<<setw(11)<<left<<t->dob<<setw(13)<<left<<t->ward<<setw(1)<<left<<t->days;
			t=t->next;
			gotoxy(s,y+2);
			below_Horizental();	
			y=y+3;
		}
		gotoxy(s,y+1);
		Above_horizental();
		gotoxy(s,y+2);
		Line();
		gotoxy(s+75,y+2);
		Line();
		gotoxy(x+31,y+2);
		cout<<"Finish";
		gotoxy(s,y+3);
		below_Horizental();		
	}
//
	void display_table()
	{
		gotoxy(2,3);	
		Above_horizental();
		gotoxy(2,4);
		Line();	
		gotoxy(77,4);
		Line();	
		gotoxy(2,5);
		Line();	
		gotoxy(77,5);
		Line();
		gotoxy(2,6);
		Line();	
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		below_Horizental();	
		gotoxy(33,4);	
		cout<<"PATIENT RECORD"<<endl;
		gotoxy(4,6);
		cout<<"Sr.No    "<<"Name       "<<"Father      "<<"ID		"<<"D-O-B      "<<"WARD		"<<"STAY";
	
	}
//
	void Above_horizental()
	{
		char prev = ' ';
		prev = cout.fill((char)205);
		cout << (char)201 << setw(74) << "" << (char)187 << endl;
		cout.fill(prev);
	}
//
	void Line()
	{
	cout << (char)186<< endl;
	}
//
	void below_Horizental()
	{
		char prev = ' ';
		prev = cout.fill((char)205);
		cout << (char)200 << setw(74) << "" << (char)188 << endl;
		cout.fill(prev);
	}
//
	void Menu()
	{
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		Line();
		gotoxy(77,4);
		Line();
		gotoxy(2,5);
		Line();
		gotoxy(77,5);
		Line();
		gotoxy(2,6);
		Line();
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		Line();
		gotoxy(77,7);
		Line();
		gotoxy(2,8);
		Line();
		gotoxy(77,8);
		Line();
		gotoxy(2,9);
		Line();
		gotoxy(77,9);
		Line();
		gotoxy(2,10);
		Line();
		gotoxy(77,10);
		Line();
		gotoxy(2,11);
		Line();
		gotoxy(77,11);
		Line();
		gotoxy(2,12);
		Line();
		gotoxy(77,12);
		Line();
		gotoxy(2,13);
		Line();
		gotoxy(77,13);
		Line();
		gotoxy(2,14);
		Line();
		gotoxy(77,14);
		Line();
		gotoxy(2,15);
		Line();
		gotoxy(77,15);
		Line();
		gotoxy(2,16);
		Line();
		gotoxy(77,16);
		Line();
		gotoxy(2,17);
		Line();
		gotoxy(77,17);
		Line();
		gotoxy(2,18);
		Line();
		gotoxy(77,18);
		Line();
		gotoxy(2,19);
		Line();
		gotoxy(77,19);
		Line();
		gotoxy(2,20);
		Line();
		gotoxy(77,20);
		Line();
		gotoxy(2,21);
		below_Horizental();
//
		gotoxy(35,3);
	cout<<"MAIN MENU"<<endl;
		gotoxy(28,1);
	cout<<"HOSPITAL MANAGEMENT SYSTEM"<<endl;
		gotoxy(33,6);
	cout<<"1-Add Record"<<endl;
		gotoxy(33,8);
	cout<<"2-Edit Record"<<endl;
		gotoxy(33,10);
	cout<<"3-Search Record"<<endl;
		gotoxy(33,12);
	cout<<"4-Delete Record"<<endl;
		gotoxy(33,14);
	cout<<"5-Display Record"<<endl;
		gotoxy(33,16);
	cout<<"6-Quit Program"<<endl;
	}
};
//End of The Class


int main()
{
	list obj;

	system("CLS");
	int n,ch,srno=1;
	char loader=254;
	cout<<"\t\t\t\tLoading"<<endl;
	obj.gotoxy(20,2);
	for(int i=0;i<30;i++ )
	{
		system("color 7");
		cout<<loader;
		Sleep(80);
	}
	system("cls");

	L:
	obj.Menu();
	obj.gotoxy(4,23);
	cout<<"Enter Your Choice: ";
	
	l:
	char c=getch();
  		if(c>='1' && c<='6')
		{
			ch=c-48;
			cout<<c;
	  		goto l2;
		}
		else
		{
			ch=getch();
		}
  	goto l;

	l2:
  	Sleep(200);
  	system("CLS");
	switch(ch)
	{
//1
		case 1:
		cout<<"How Many Patients Record You Want To Enter: ";
		while(!(cin >> n))
			{
				cin.clear();
				system("CLS");
				obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
			cout << "Invalid input...  Try again: \n\n";
			system("pause");
			system("CLS");
	goto L;
			}
			
	system("CLS");
	if(obj.isEmpty())
 		{	
			srno=1;
			for(int i=0;i<n;i++)
			{
				obj.add_data(srno);
				srno++;
				system("CLS");
			}
		}
	else
	{
		for(int i=0;i<n;i++)
		{
			obj.add_data(srno);
			srno++;
			system("CLS");
		}
	}
	cout<<"Record Added Successfully...! \n";			
	system("pause");
	system("CLS");
	goto L;
	break;

//2		
	case 2:
		system("CLS");
		if(obj.isEmpty())
		{
				cout<<"Please Add Record first....! \n"<<endl;
		}
		else
		{
			obj.Edit_Record();	
		}
		system("pause");
		system("CLS");
		goto L;		
		break;

//3
		case 3:
			system("CLS");
			if(obj.isEmpty())
			{
				cout<<"Please Add Record first....! \n"<<endl;
			}
			else
			{
				obj.search_Record();
			}
			system("pause");
			system("CLS");
			goto L;
			break;

//4
	case 4:
		system("CLS");
			if(obj.isEmpty())
			{
				cout<<"record Is Empty....! \n"<<endl;
			}
			else
			{
				obj.Delete_Record();
			}
				system("pause");
				system("CLS");
				goto L;
				break;

//5
		case 5:
			system("CLS");
			if(obj.isEmpty())
			{
				cout<<"Please Add Record first....! \n"<<endl;
			}
			else
			{
				obj.display_table();
				obj.table_data();
			}
				system("pause");
				system("CLS");
				goto L;
				break;

//6
		case 6:
				return 0;
		default:
			system("CLS");
			cout<<"INVALID NUMBER.. "<<endl;
			system("pause");
			system("CLS");
			goto L;	
	}
}
//
bool check(string a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>=48 && a[i]<=53)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}
//
bool check_alphabet(string a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>=65 && a[i]<=122)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
