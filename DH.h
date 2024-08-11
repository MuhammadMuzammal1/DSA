#include<iostream>
using namespace std;

struct DoctorNode
{
	string name;
	string department;
	int fees;
	DoctorNode *next;
};
class Doctor{
	public:
		DoctorNode *head,*tail;
	public:
	Doctor(){
		head=tail=NULL;
	}
	
	//Below Function is used to check list of node are empty are not
	bool isempty(){
		if(head==NULL)
			return true;
		else 
			return false;
	}
	
	//Below Function is used to insert node at end
	void insert(string n,string d,int f){
		DoctorNode *temp=new DoctorNode;
		temp->name=n;
		temp->department=d;
		temp->fees=f;
		temp->next=NULL;
		
		if(isempty()){
			head=tail=temp;
		}
		else{
			tail->next=temp;
			tail=temp;
		}
	}
	void displayallDoctors()
	{
		DoctorNode *cur=head;
		while(cur!=NULL)
		{
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
	  		cout<<"\n\t\t\t\t\t\t\t\t     Displaying Record \n";	
			cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
			cout<<"\n\t\t\t\t\t\t\t\tName of Doctor: "<<cur->name<<endl;
			cout<<"\n\t\t\t\t\t\t\t\tThe specialist in: "<<cur->department<<endl;
			cout<<"\n\t\t\t\t\t\t\t\tFee of Doctor "<<cur->name<<" is "<<cur->fees;
			cout<<"\n\t\t\t\t\t\t\t\t------------------------------\n\n";
			cur=cur->next;
			cout<<"\t\t\t\t\t\t\t\t";
			system("pause");
			system("cls");
		}
	}
};

