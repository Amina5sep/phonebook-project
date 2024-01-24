//           ##------------------->BUG SMASHERS<------------------##
//                              ** GROUP MEMBERS **
//                     (1 AMINA HABIB       2022-uam-4605
//                     (2 TAQADUS FATIMA    2022-uam-4616
//                     (3 ALISHBA SHAUKAT   2022-uam-4657
//                     (4 SHAISTA PARVEEN   2022-uam-4648  
//                     (5 LAIBA NOOR        2022-uam-4612
//                     (6 MEHWISH SHAREEF   2022-uam-4660
#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;
void loadingbar();
int menu();
int k = 0;

int main()
{
	loadingbar();
	string name[50];
	string no[50];
	string address[50];
	string email[50];
	int choice = 0;
	ofstream file("data.txt");
	choice = menu();
	do
	{
		// Add contacts 
		if (choice == 1)
		{
			cout << "\t\t\t\t\t\t Name :";
			cin >> name[k];
			file << "Name: " << name[k] << "\t\t" << endl;
			cout << "\t\t\t\t\t\t Phone no :";
			cin >> no[k];
			file << "Number: " << no[k] << endl;
			cout << "\t\t\t\t\t\t E-Mail :";
			cin >> email[k];
			file << "E-Mail: " << email[k] << "\t\t" << endl;
			cout << "\t\t\t\t\t\t Address :";
			cin >> address[k];
			file << "Address: " << address[k] << "\t\t" << endl;
			k++;
			file << "-----------------------------" << endl;
		}

		//Diplay contacts
		else if (choice == 2)
		{

			for (int i = 0; i < 50; i++)
			{
				if (name[i] != "\0") {

					cout << "\t\t\tName :" << name[i];
					cout << "\tPhone :" << no[i];
					cout << "\tE-Mail:" << email[i];
					cout << "\tAddress:" << address[i] << endl;


				}

			}
		}

		//Search By Name
		else if (choice == 3)
		{
			string temp;
			cout << "\t\t\t\t\tName : ";
			cin >> temp;
			int check = 0;
			for (int i = 0; i < 50; i++)
			{
				if (temp == name[i])
				{
					cout << "\t\t\t\t\tName is Found\n";
					cout << "\t\t\t\t\t Name :" << name[i] << "      Phone :" << no[i] << "      E-Mail:" << email[i] << "     Address:" << address[i] << endl;					check++;
				}

			}
			if (check == 0)
			{
				cout << "\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}
		
		
		// delete
		else if (choice == 4)
		{
			string temp;
			cout << "\t\t\t\t\tFor Delete Enter Name : ";
			cin >> temp;
			int check = 0;
			for (int i = 0; i < 50; i++)
			{
				if (temp == name[i])
				{
				
					cout << "\t\t\t\t\tDeleted Successfully\n";
					cout << "\t\t\t\t\t Name :" << name[i] << "      Phone :" << no[i] << "      E-Mail:" << email[i] << "     Address:" << address[i] << endl;
					name[i] = "\0";
					no[i] = "\0";
					email[i] = "\0";
					address[i] = "\0";
					check++;
				}
			}
			if (check == 0)
			{
				cout << "\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}


		choice = menu();

	} while (choice<5);

}

int menu()
{
	system("Color c");
	cout << "\n\n\n";
	cout << "\t\t\t\t\t-------------------------------------------\n";
	cout << "\t\t\t\t\t|     PHONE BOOK APPLICATION              |\n";
	cout << "\t\t\t\t\t-------------------------------------------\n";
	cout << "\t\t\t\t\t|                                         |\n";
	cout << "\t\t\t\t\t|    [1]   Add Contacts                   |\n";
	cout << "\t\t\t\t\t|    [2]   Display All Contacts           |\n";
	cout << "\t\t\t\t\t|    [3]   Search by Name                 |\n";
	cout << "\t\t\t\t\t|    [4]   Delete a Contact               |\n";
	cout << "\t\t\t\t\t-------------------------------------------\n";
	cout << "\t\t\t\t\t|    [5]   Exit                           |\n";
	cout << "\t\t\t\t\t-------------------------------------------\n\n";

	int a;
	cout << "\t\t\t\t\t Enter Your Operation: ", cin >> a;
	system("cls");
	return a;
}

void loadingbar()
{
	system("Color b");
	cout << "\n\n\n\n\n";
	cout << "\t\t\t\t\t---------------------------------\n";
	cout << "\t\t\t\t\t---------------------------------\n";
	cout << "\t\t\t\t\t Phone Book Application \n";
	cout << "\t\t\t\t\t---------------------------------\n";
	cout << "\t\t\t\t\t---------------------------------\n";
	cout << " \t\t\t\tLoading ";
	char x = 219;
	for (int i = 0; i <= 30; i++) {
		cout << x;
		if (i < 10)
			Sleep(300);
		if (i >= 10 && i < 20)
			Sleep(150);
		if (i >= 20)
			Sleep(50);
	}
	system("cls");

}