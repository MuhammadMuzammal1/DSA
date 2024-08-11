#include<iostream>
#include<cstdlib>
#define SIZE 20
//#include "Stack.h"
#include "Design.h"
#include "DH.h"

using namespace std;

//Gobal variable
int emergencycheck=0;
int normalcheck=0;

struct PatientNode{
	int id;
    int age;
    int roomnumber;
	string name;
	string address;
	string disease;
	string gender;
	string catagory;
    int roomrent;
    int doctorfee;
    int total;
   	PatientNode *next;
	PatientNode *prev;
};

class Patient{	
	PatientNode	 *head,*tail;
	int top;
	int arr[SIZE];
	public:
		Patient(){
			head=tail=NULL;
			top=-1;
		}
		
		//Stack Part Start
			//below Function  is push value into stack
			void push(int d){
				top++;
				arr[top]=d;
			}
			
			//below function is used pop value from stack
			void pop(){
				top--;
			}
			
			//below function is used to check either stack is empty are not
			bool empty(){
				if(top==-1)
		   			return true;
		   		else 
		   			return false;
			}
		//Stack Part ends
		
		//Node Part Start
			//Below Function is used to check list of node are empty are not
		   	bool pempty(){
		   		if(head==NULL)
		   			return true;
		   		else 
		   			return false;
		   	}
			
			//Below function is used for providing security 
			bool login() {
			    string username;
			    string password;
				string ans;
				login:
					cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
				    cout<<"\t\t\t\t\t\t\t\t------------------------------";
				    cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
				    cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
				    cout << "\t\t\t\t\t\t\t\tEnter Username : ";
					cin >> username;	
					cout << "\t\t\t\t\t\t\t\tEnter Password : ";
			  		cin >> password;
			
			    /*Below statement compair username & pasword enter user with already stored Username & password
			    check either username and password enter by user is correct or not */
			    if (username == "Admin" && password == "Admin123") {
			        cout << "\n\t\t\t\t\t\t\t\tLogin successful. Welcome, " << username << "!\n";
			        cout<<"\n\t\t\t\t\t\t\t\t";
			        system("pause");
			        system("CLS");
			        return true;
			    } 
				else {
			        cout << "\n\t\t\t\t\t\t\t\tLogin failed. Incorrect username or password.\n";
			        cout<<"\n\t\t\t\t\t\t\t\tPress yes if you want to try again : ";
			        cin>>ans;
			        if(ans=="yes"){
			        	system("CLS");
			        	goto login;
			        }
			        else
			        	return false;
			    }
			}
			
			//Below function is use for Calculating Bill
			int Bill(string a){
				PatientNode *temp = new PatientNode;
		   	    temp->roomrent=1000; //fixed roomrate for all patient
		   	    
		   	    /*Below part compare a (parameter value passed by inertion function of disease enter by user)
				  with diseases of which treatment is avaible in this hospital to calulate bill of patient */
				if(a=="Heart Disease" || a=="heart disease"){
					temp->doctorfee=2000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="Diabetes" || a=="diabates"){
					temp->doctorfee=3000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="AIDS" || a=="aids"){
					temp->doctorfee=5000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="Depression" || a=="depression"){
					temp->doctorfee=2000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="Stroke" || a=="stroke"){
					temp->doctorfee=3000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="Arthrities" || a=="arthrities"){
					temp->doctorfee=2000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="Asthma" || a=="asthma"){
					temp->doctorfee=2000;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else if(a=="Cancer" || a=="cancer"){
					temp->doctorfee=1500;
					temp->total=temp->roomrent + temp->doctorfee;
					push(temp->total);
					return temp->total;
				}
				else{
					cout<<"\t\t\t\t\t\t\t\tTreatment of "<<temp->disease<<" is not avalible int this Hospital"<<endl;
					cout<<"\t\t\t\t\t\t\t\t";
					system("pause");
					return 0;
				}
			}
			
			//Below Function is used to calculate the bill of all patient
			void totalbill(){
				cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
			   	cout<<"\n\t\t\t\t\t\t\t\t     Displaying Total BILL  \n";	
				cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
				if (pempty()) {  //this part excute if stack is empty 
			        cout << "\n\t\t\t\t\t\t\t\t   No records available." << endl;
			        cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
			        cout << "\n\t\t\t\t\t\t\t\t";
			        system("pause");
			    } 
				else{ //this part excute if stack is not empty 
					int total = 0;
					int answer;
					/*Loop body value at top of stack is add to total then pop value in which top 
				     come to previous value process continue until stack is empty*/
					while (!empty()) {
				        total +=arr[top];
				        pop();
				    }
				    //push(total);
				   
				    cout<<"\n\t\t\t\t\t\t\t\tTotal Bill of Patient is: " <<total<<endl;
				    cout<<"\n\t\t\t\t\t\t\t\tPress 1 if you want to calculate Profit percentage : ";
				    cin>>answer;
				    
				    //Body of Conditon statement is use to calculate Profit percentage
				    if(answer==1){
				    	int expense;
				    	float profit;
				    	cout<<"\n\t\t\t\t\t\t\t\tEnter your Expense of hospital : ";
				    	cin>>expense;
				    	profit=total-expense;
				    	cout<<"\n\t\t\t\t\t\t\t\tProfit of Hospital is : " <<profit;
				    	profit=(profit/total)*100;
				    	cout<<"\n\t\t\t\t\t\t\t\tProfit Percentage of Hospital is : " <<profit;
					}
				    cout<<"\n\t\t\t\t\t\t\t\t------------------------------\n\n";
				    cout << "\n\t\t\t\t\t\t\t\t";
			        system("pause");
				}
			}
			
		   	//Below Function is used to insert Patient record in list
		   	void insertion() {
		   	    PatientNode *temp = new PatientNode;
		   	    temp->roomrent=1000;
		   	    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
		   	    cout<<"\n\t\t\t\t\t\t\t\t\t     Insertion \n";	
			    cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
				cout << "\t\t\t\t\t\t\t\tEnter Patient ID : " ;
		   	    cin >> temp->id;	
		   	    cin.ignore();
				cout << "\t\t\t\t\t\t\t\tEnter Patient Name : ";
		   	    getline(cin, temp->name);
		   	    cout << "\t\t\t\t\t\t\t\tEnter Patient Catagory : ";
		   	    getline(cin, temp->catagory);
		   	    if(temp->catagory=="Emergency")
		   	    {
		   	    	emergencycheck++;
				}
				else
				{
					normalcheck++;
				}
		   	    cout << "\t\t\t\t\t\t\t\tEnter Patient Age : " ;
		   	    cin >> temp->age;
		   	    cin.ignore();
		   	    cout << "\t\t\t\t\t\t\t\tEnter Patient Gender : ";
		   	    getline(cin, temp->gender);
		   	    cout << "\t\t\t\t\t\t\t\tEnter Patient Disease : ";
		   	    getline(cin, temp->disease);
		   	    cout << "\t\t\t\t\t\t\t\tEnter Patient Room number : ";
		   	    cin >> temp->roomnumber;
		   	    cin.ignore();
		   	    cout << "\t\t\t\t\t\t\t\tEnter Patient Address : ";
		   	    getline(cin, temp->address);
		   	    cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
		   		temp->total=Bill(temp->disease);
				
				//Insertion at End
		   	    if (pempty()) {
		   	        head = tail = temp;
		   	    }
		   		else {
		   	        temp->prev = tail;
		   	        tail->next = temp;
		   	        tail = temp;
		   	        tail->next = NULL;
		   	    }
		   	    cout<<"\t\t\t\t\t\t\t\t";
				system("pause");  
			}
	
			//Below function used to delete patient record by name
			void deletionbyname() {
			    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
			    cout << "\n\t\t\t\t\t\t\t\t\t     Deletion \n";
			    cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
			
			    if (pempty()) {
			        cout << "\n\t\t\t\t\t\t\t\t\tNo records available." << endl;
			        cout << "\n\t\t\t\t\t\t\t\t------------------------------\n\n";
			        cout << "\t\t\t\t\t\t\t\t";
			        system("pause");
			    } 
				else {
			        string n;
			        cout << "\t\t\t\t\t\t\t\tEnter the Name of the Patient: ";
			        cin >> n;
			
			        PatientNode* cur = head;
			        bool found = false;
			
			        // Deletion at start
			        if (n == head->name) {
			            cout << "\t\t\t\t\t\t\t\tThe data of patient: " << head->name << " has been deleted.";
			            cout << "C\t\t\t\t\t\t\t\t";
			            system("pause");
			            head = cur->next;
			            if (head != NULL) {
			                head->prev = NULL;
			            }
			            if(cur->catagory=="Emergency")
			            	emergencycheck--;
			            else
			            	normalcheck--;
			            delete cur;
			            	found = true;
			        }
			        
			        // Deletion at End
			        else if (n == tail->name) {
			            cur = tail;
			            tail = cur->prev;
			            if (tail != NULL) {
			                tail->next = NULL;
			            }
			            cout << "\n\t\t\t\t\t\t\t\tThe data of patient: " << cur->name << " has been deleted.";
			            cout << "\n\t\t\t\t\t\t\t\t";
						system("pause");
			            if(cur->catagory=="Emergency")
			            emergencycheck--;
			            else
			            normalcheck--;
			            delete cur;
			            found = true;
			        }
			        
			        // Deletion at Position
			        else {
			            while (cur != NULL) {
			                if (n == cur->name) {
			                    PatientNode* temp = cur->next;
			                    if (temp != NULL) {
			                        temp->prev = cur->prev;
			                    }
			                    cur->prev->next = temp;
			                    cout << "\t\t\t\t\t\t\t\tThe data of patient: " << cur->name << " has been deleted.";
			                    cout << "\n\t\t\t\t\t\t\t\t";
			                    system("pause");
			                    if(cur->catagory=="Emergency")
			                    	emergencycheck--;
			                    else
			                    	normalcheck--;
			                    delete cur;
			                    found = true;
			                    break; // break out of the loop after deletion
			                }
			                cur = cur->next;
			            }
			        }
			
			        if (!found) {
			            cout << "No patient found with the name: " << n << ". Invalid string." << endl;
			            system("pause");
			        }
			    }
			}
	
			//Below function used to display patient record by name
			void displaybyname(){
				cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
			   	cout<<"\n\t\t\t\t\t\t\t\t     Displaying Record \n";	
				cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
				if(pempty()){
					cout<<"\t\t\t\t\t\t\t\t\tNo record availbe "<<endl;
					cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
					cout<<"\t\t\t\t\t\t\t\t";
					system("pause");
				}
				else{
					string n;
			        cout<<"\t\t\t\t\t\t\t\tEnter the Name of the Patient: ";
			        //getline(cin,n);
			        //cin.ignore();
			        cin>>n;
			        cout<<"\n\t\t\t\t\t\t\t\t------------------------------\n\n";
			        PatientNode *cur,*pre;
			        pre=new PatientNode;
			        cur=head;
			        int c;
			        while(cur!=NULL)
			        {
			        	
			            if(cur->name==n){
			                // Display the details
			                cout<<"\t\t\t\t\t\t\t\tId of patient is : "<<cur->id<<endl;
			        		cout<<"\t\t\t\t\t\t\t\tName of patient is : "<<cur->name<<endl;
							cout<<"\t\t\t\t\t\t\t\tAge of patient is : "<<cur->age<<endl;
							cout<<"\t\t\t\t\t\t\t\tCatagory of patient is : "<<cur->catagory<<endl;
							cout<<"\t\t\t\t\t\t\t\tGender of patient is : "<<cur->gender<<endl;
							cout<<"\t\t\t\t\t\t\t\tDisease description of patient is : "<<cur->disease<<endl;
							cout<<"\t\t\t\t\t\t\t\tRoomnumber of patient is : "<<cur->roomnumber<<endl;
							cout<<"\t\t\t\t\t\t\t\tAddress of patient is : "<<cur->address<<endl;
							cout<<"\t\t\t\t\t\t\t\tTotal Bill of patient is : "<<cur->total<<endl;
			                cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
			                cout<<"\t\t\t\t\t\t\t\t";
			                system("pause");
			                c=1;
			                return;    
			            }
			            else{
			        	    pre=cur;
			         	    cur=cur->next;
			         	    c=0;
			         	    continue;
			        	}
			        }
					if(c==0){
						cout<<"\t\t\t\t\t\t\t\t\tRecord not Found"<<endl;
						cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
			            cout<<"\t\t\t\t\t\t\t\t";
			            system("pause");
					}	
	    		}
				
			}
		
			//Below function used to display all record of patient 
			void displayall(){
				if(pempty()){
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
			   		cout<<"\n\t\t\t\t\t\t\t\t     Displaying Record  \n";	
					cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
					cout<<"\t\t\t\t\t\t\t\t\tNo record availbe "<<endl;
					cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
					cout<<"\t\t\t\t\t\t\t\t";
					system("pause");
				}
				else{
					PatientNode *cur=head;
						while(cur!=NULL)
						{	
							cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t--------------------------------------";
					   		cout<<"\n\t\t\t\t\t\t\t\t\tDisplaying Record  \n";	
							cout<<"\t\t\t\t\t\t\t\t--------------------------------------\n\n";
							cout<<"\t\t\t\t\t\t\t\tId of patient is : "<<cur->id<<endl;
							cout<<"\t\t\t\t\t\t\t\tName of patient is : "<<cur->name<<endl;
							cout<<"\t\t\t\t\t\t\t\tAge of patient is : "<<cur->age<<endl;
							cout<<"\t\t\t\t\t\t\t\tCatagory of patient is : "<<cur->catagory<<endl;
							cout<<"\t\t\t\t\t\t\t\tGender of patient is : "<<cur->gender<<endl;
							cout<<"\t\t\t\t\t\t\t\tDisease description of patient is : "<<cur->disease<<endl;
							cout<<"\t\t\t\t\t\t\t\tRoomnumber of patient is : "<<cur->roomnumber<<endl;
							cout<<"\t\t\t\t\t\t\t\tAddress of patient is : "<<cur->address<<endl;
							cout<<"\t\t\t\t\t\t\t\tTotal Bill of patient is : "<<cur->total<<endl;
							cout<<"\t\t\t\t\t\t\t\t--------------------------------------\n\n";
							cout<<"\t\t\t\t\t\t\t\t";
							system("pause");
							system("ClS");
							cur=cur->next;
						}
					}
				}
			
			void displayallnames(){
				int z=1;
				cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t------------------------------";
			   	cout<<"\n\t\t\t\t\t\t\t\t     Displaying Record \n";	
				cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
				if(pempty()){
					cout<<"\t\t\t\t\t\t\t\t\tNo record availbe "<<endl;
					cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
					cout<<"\t\t\t\t\t\t\t";
					system("pause");
				}
				else{
					cout<<"\t\t\t\t\t\t\t\t   Name of all Patients    "<<endl;
					cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
					PatientNode *cur=head;
					while(cur!=NULL)
						{
							cout<<"\t\t\t\t\t\t\t\t\t";
							cout<<z<<" : "<<cur->name<<endl;
							z++;
							cur=cur->next;
						}
						cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";
						cout<<"\t\t\t\t\t\t\t\t";
						system("pause");
					}
				}
		
			void emergencypatients() {
			    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t--------------------------------------";
			    cout << "\n\t\t\t\t\t\t\t\t\t    Emergency Patients \n";
			    cout << "\t\t\t\t\t\t\t\t--------------------------------------\n\n";
			
			    if (pempty()) {
			        cout << "\t\t\t\t\t\t\t\t\t    No records available." << endl;
			        cout << "\t\t\t\t\t\t\t\t--------------------------------------\n\n";
			        cout << "\t\t\t\t\t\t\t\t";
			        system("pause");
			    }
				else if(emergencycheck!=0) {
			        PatientNode* cur = head;
			
			        // Traverse the list and display emergency patients
			        while (cur != NULL) {
			            if (cur->catagory == "Emergency") {
			            	cout<<"\t\t\t\t\t\t\t\t\t "<< cur->name << endl;
			            }
			            cur = cur->next;
			        }
			        cout << "\t\t\t\t\t\t\t\t";
			        system("pause");
			    }
				else{
					cout<<"\t\t\t\t\t\t\t\t\tThere is no patient in emergency "<<endl;
					cout << "\t\t\t\t\t\t\t\t";
					system("pause");
				}
			    cout << "\t\t\t\t\t\t\t\t------------------------------\n\n";
			    cout << "\t\t\t\t\t\t\t\t";    
			}
		//Node Part end
};

int main()
{
	Design B;
	Doctor s;
	Patient D;
	int ans;
	s.insert("Muzammal","Cardiologist",2000);
	s.insert("Uzair"," Endocrinologist",1000);
	s.insert("Ahmad","HIV/AIDS",5000);
	s.insert("Hanzala","Psychologist",2000);
	s.insert("Dawood","Neurologist",3000);
	s.insert("Qasim"," Rheumatologist",2000);
	s.insert("Raffey","Pulmonologist",2000);
	s.insert("Ata-ul-Rehman","Oncologist",1500);
	B.Welcomescreen();
	if(D.login()){
	
		a:
			switch(B.Menu()){
				int ans;
				
				case 1:
					system("CLS");
					D.insertion();
					goto a;
				case 2:
					D.deletionbyname();
					goto a;
				case 3:
					s.displayallDoctors();
					goto a;
				case 4:
					D.displaybyname();
						if(emergencycheck!=0 || normalcheck!=0)
						{
						 cout<<"\n\t\t\t\t\t\t\t\tIf you want to Delete this patient record than press 1"<<endl; 
						 cout<<"\n\t\t\t\t\t\t\t\tPress 0 for Main Menu ";
						cin>>ans;
						system("cls");
						if(ans==1)
						{
						D.deletionbyname();
							goto a;
						}
						else
							goto a;
						}
						else 
							goto a;					
				case 5:
					D.displayallnames();
					if(emergencycheck!=0 || normalcheck!=0)
					{
					 cout<<"\n\t\t\t\t\t\t\t\tIf you want to Delete the any patient record than press 1"<<endl; 
					 cout<<"\n\t\t\t\t\t\t\t\tIf you want to see the record of any patient press 2"<<endl;
					 cout<<"\n\t\t\t\t\t\t\t\tPress 0 for Main Menu ";
					 cin>>ans;
						system("cls");
					if(ans==1)
					{
						D.deletionbyname();
						goto a;
					}
					else if(ans==2)
					{
						D.displaybyname();
						goto a;
					}
					else
						goto a;
					}
					else
						goto a;
				case 6:
					D.displayall();
					if(emergencycheck!=0 || normalcheck!=0)
					{
					 cout<<"\n\t\t\t\t\t\t\tIf you want to Delete the any patient record than press 1"<<endl; 
					 cout<<"\n\t\t\t\t\t\t\tPress 0 for Main Menu ";
					cin>>ans;
					system("cls");
						if(ans==1)
						{
							D.deletionbyname();
							goto a;
						}
						else
							goto a;
					}
					else
						goto a;
				case 7:
					D.emergencypatients();
					if(emergencycheck!=0)
					{
						cout<<"\n\t\t\t\t\t\t\t\tIf you want to Delete the any patient record than press 1"<<endl; 
						cout<<"\n\t\t\t\t\t\t\t\tPress 0 for Main Menu ";
						cin>>ans;
						system("cls");
						if(ans==1){	
							D.deletionbyname();
							goto a;
						}
						else{
							goto a;
						}	
					}
					else
						goto a;
				case 8:
					D.totalbill();
					goto a;
				case 9:
					break;	
				default:
					cout<<"\n\t\t\t\t\t\t\t\tInvalid choice!!!"<<endl;
					system("pause");
					goto a;
		}
	}
	z:
		B.closingscreen();
}
