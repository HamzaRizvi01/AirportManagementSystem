#include <string.h>
#include <string>
#include "Flight.h"
#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;


class login
{
private:
	string password, name, CNIC;
	int choice;
	string data;
	bool flag1, passport;
	bool flag2;
public:
	login()
	{
		password = " ", name = " ", CNIC = " ", data = " ";
		choice = 0;
		flag1 = true, flag2 = true, passport = false;
	}
	void userlogin()
	{

		cout << "enter name" << endl;
		getline(cin, name);
		cin.ignore(); //cin.ignore() used as without it the first char isnt read
		cout << "enter CNIC" << endl;
		cin >> CNIC;
		cout << "enter password" << endl;
		cin >> password;
		ifstream obj; //passengers.txt opened
		obj.open("C:\\Users\\Hamza\\Desktop\\passengers.txt");
		while (!obj.eof())
		{
			getline(obj, data);
			if (data == name)
			{
				getline(obj, data);
				if (data == CNIC)
				{
					getline(obj, data);
					if (data == password)
					{
						//will take name, CNIC and password as input then compare with data in admin already written
						//if its there then flag will be false otherwise false
						flag1 = false;
					}
					else
					{
						flag1 = true;
					}
				}
			}

		}
		if (flag1 == true)
		{
			cout << "invalid data" << endl;
		}
		else
		{
			cout << "login successful" << endl;
		}
	}
	void Register()
	{
		bool NUC = true, NLC = true, NN = true, NSC = false, PL = true; //bool initialised to check password validity
		ofstream obj;
		obj.open("C:\\Users\\Hamza\\Desktop\\passengers.txt", ios::app); //passenger.txt opened inorder to write in it
		cout << "enter name" << endl;
		getline(cin, name);
		cin.ignore();
		obj << name << endl;
		cout << "enter CNIC" << endl;
		cin >> CNIC;
		cout << CNIC.length() << endl;
		do
		{
			if (CNIC.length() != 13) //check for CNIC to be 13 characters long
			{
				cout << "Invalid CNIC, please enter a valid one" << endl;
				getline(cin, CNIC);
				cin.ignore();
			}

		} while (CNIC.length() < 13);
		obj << CNIC << endl; //after check CNIC entered into file
		do
		{
		Check: //goto function
			cout << "enter password" << endl;
			cin >> password;
			if (password.length() < 8) //check for password length
			{
				PL = false;
				goto Check; //if its less than 8 then it'll run the entire check again
			}
			for (int i = 0; i < password.length(); i++)
			{
				if (isupper(password[i])) //checks every character for ASCII of uppercase
				{
					NUC = false; //if uppercase exist then it'll break the loop and move forward
					break;
				}
				if (i == password.length() - 1)
				{
					goto Check; //goto check inorder to check the length and uppercase
				}
			}
			for (int i = 0; i < password.length(); i++)
			{
				if (islower(password[i]))      //checks every character for ASCII of lowercase
				{
					NLC = false;			//if lowercase exist then it'll break the loop and move forward
					break;
				}
				if (i == password.length() - 1)
				{
					goto Check;       //goto check inorder to check the length, uppercase and lower case again
				}
			}
			for (int i = 0; i < password.length(); i++)
			{
				if (isdigit(password[i]))  //checks every character for ASCII of digit
				{
					NN = false;      //if digit exist then it'll break the loop and move forward
					break;
				}
				if (i == password.length() - 1)
				{
					goto Check;    //goto check inorder to check the length, uppercase, lowercase and digit again
				}
			}
			for (int i = 0; i < password.length(); i++)
			{
				if ((((int(password[i]) >= 48 && int(password[i]) <= 57) ||       //all the ASCII range for special characters
					(int(password[i]) >= 65 && int(password[i]) <= 90) ||
					(int(password[i]) >= 97 && int(password[i]) <= 122))))
				{
					NSC = true;        //if special character exist then it'll break the loop and move forward
					break;
				}
				if (i == password.length() - 1)
				{
					goto Check;       //goto check inorder to check the length, uppercase, lowercase, digit and special character again
				}
			}
		} while (PL == true && NUC == true && NLC == true && NN == true && NSC == false); //will stop once all conditions are met
		obj << password << endl; //password written into file
		cout << "You have successfully registered" << endl;
	}
	void adminlogin()
	{
		cout << "enter name" << endl;
		getline(cin, name);
		cin.ignore();
		cout << "enter CNIC" << endl;
		cin >> CNIC;
		cout << "enter password" << endl;
		cin >> password;
		ifstream obj;
		obj.open("C:\\Users\\Hamza\\Desktop\\admin.txt"); //admin.txt opened
		while (!obj.eof())
		{
			getline(obj, data);
			if (data == name)
			{
				getline(obj, data);
				if (data == CNIC)
				{
					getline(obj, data);
					if (data == password)
					{
						//will take name, CNIC and password as input then compare with data in admin already written
						//if its there then flag will be true otherwise false
						flag2 = false;
					}
					else
					{
						flag2 = true;
					}
				}
			}

		}
		if (flag2 == true)
		{
			cout << "invalid data" << endl;
		}
		else
		{
			cout << "login successful" << endl;
		}
	}
	void menu()
	{
		int c, d;
		Flight obj;
		int choice = 0;
		while (choice != 5)
		{
			system("CLS");
			cout << "Press the corresponding key for the mode of login" << endl;
			cout << "1) User Login" << endl;
			cout << "2) User registration" << endl;
			cout << "3) Admin login" << endl;
			cout << "4) Display" << endl;
			cout << "5) Exit" << endl;
			cout << "Enter your choice" << endl;
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1:
				system("CLS");
				userlogin();
				if (flag1 == false)
				{
					cout << "What would you like to do?" << endl;
					cout << "1) Book seats \n 2) Display \n 3) exit" << endl;
					cin >> d;
					switch (d)
					{
					case 1:
						system("CLS");
						obj.booking();
						break;
					case 2:
						system("CLS");
						obj.display();
						break;
					case 3:
						system("CLS");
						break;
					default:
						system("CLS");
						cerr << "Invalid Entry" << endl;
						break;
					}
				}
				else
				{
					system("pause");
					break;
				}
				break;
			case 2:
				system("CLS");
				Register();
				cout << "What would you like to do?" << endl;
				cout << "1) Book seats \n 2) Display \n 3) exit" << endl;
				cin >> d;
				switch (d)
				{
				case 1:
					system("CLS");
					obj.booking();
					break;
				case 2:
					system("CLS");
					obj.display();
					break;
				case 3:
					system("CLS");
					break;
				default:
					system("CLS");
					cerr << "Invalid Entry" << endl;
					break;
				}
				break;
			case 3:
				system("CLS");
				adminlogin();
				if (flag2 == false)
				{
					cout << "What would you like to do?" << endl;
					cout << "1) Schedule Flights \n 2) Display \n 3) Exit" << endl;
					cin >> c;
					switch (c)
					{
					case 1:
						system("CLS");
						obj.FlightSchedule();
						break;
					case 2:
						system("CLS");
						obj.display();
						break;
					case 3:
						system("CLS");
						break;
					default:
						cerr << "Invalid entry" << endl;
						break;
					}
				}
				else
				{
					system("pause");
					break;
				}
				break;
			case 4:
				obj.display();
				break;
			case 5:
				system("CLS");
				exit(0);
			default:
				cerr << "Invalid choice" << endl;
				break;
			}


		}
	}
};
