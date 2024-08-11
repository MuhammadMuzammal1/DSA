#include<iostream>
#include<cstdlib>
using namespace std;

class Design{
	public:
		void Welcomescreen(){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                      WELCOME TO                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                HOSPITAL MANAGEMENT SYSTEM                             |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
		cout<<"\t\t\t\t\t\t\t\t";
		system("pause");
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                             HOSPITAL MANAGEMENT SYSTEM                                |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                                    Group Info                                         |@@\n";
		cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
		cout<<"\t\t\t\t\t@@|                            Uzair Saeed     220224119-167                              |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                            Hanzala Anees    22024119-179                              |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                            Muhammad Ahmed   22024119-180                              |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                            Muhammad Muzamil 22024119-195                              |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
		cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
		cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n";
		cout<<"\t\t\t\t\t\t\t\t";
		system("pause");
		system("cls");
	}
	
		int Menu(){
			system("CLS");
			int i;
		    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                             HOSPITAL MANAGEMENT SYSTEM                                |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                             Choose from the following Options:                        |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                             1  >> Add New Patient Record                              |@@\n";
			cout<<"\t\t\t\t\t@@|                             2  >> Delete Patient Record                               |@@\n";
			cout<<"\t\t\t\t\t@@|                             3  >> Displaying Doctor List                              |@@\n";
			cout<<"\t\t\t\t\t@@|                             4  >> Display Specfic Patient Record                      |@@\n";
			cout<<"\t\t\t\t\t@@|                             5  >> Display Name of all Patient in List                 |@@\n";
			cout<<"\t\t\t\t\t@@|                             6  >> Display Record of all Patient in List               |@@\n";
			cout<<"\t\t\t\t\t@@|                             7  >> Display Record of all Emergency patient             |@@\n";
			cout<<"\t\t\t\t\t@@|                             8  >> Display Total Bill of all  patients                 |@@\n";
			cout<<"\t\t\t\t\t@@|                             9  >> To exit program                                     |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
			cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
			cout<<"\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
			cin>>i;
			cout<<"\n\t\t\t\t\t\t\t\t\t";
			//system("pause");
			system("CLS");
			return i;
		}
		
		void closingscreen(){
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout<<"\t\t\t\t\t@@|                                  Thanks for Using                                     |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                              HOSPITAL MANAGEMENT SYSTEM                               |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
			cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
			cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";
			cout<<"\t\t\t\t\t\t\t\t";
			system("pause");
			cout<<"\t\t\t\t\t\t";
		}
};
