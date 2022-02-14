#include <string.h>
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

struct plane
{
	bool visa = true;
	int PlaneNo;
	int hours = 0;
	int arrival = 0, departure = 0;
	int Eseats = 25, Bseats = 5;
	int available;
	string destination, stop = " ";
};
class Flight
{
private:
	plane Islamabad[20], Lahore[20], Quetta[20], Peshawer[20], Karachi[20];
	int choice, FN, LF, IF, PM;
public:
	Flight()
	{
		choice = FN = LF = IF = PM = 0;
	}
	void FlightSchedule() // the user will enter which airports will have how many local and international flights and give the departure, arrival and stops(in case of international flight)
	{
		cout << "Which airport's flights would you like to schedule" << endl;
		cout << "1) Islamabad \n 2) Lahore \n 3) Quetta \n 4) Peshawer \n 5) Karachi" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("CLS");
			cout << "How many local flights?" << endl;
			cin >> LF;
			cout << "How many international flights?" << endl;
			cin >> IF;
			FN = LF + IF;
			if (LF > 0)
			{
				for (int j = 0; j < LF; j++)
				{
					cout << "enter local destination" << endl;
					cin >> Islamabad[j].destination;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Islamabad[j].departure;
					cout << "enter arrival time , use 24 hour clock time" << endl;
					cin >> Islamabad[j].arrival;
					system("CLS");
				}
			}
			if (IF > 0)
			{
				for (int k = 0 + LF; k < IF + LF; k++)
				{
					cout << "enter destination" << endl;
					cin >> Islamabad[k].destination;
					cout << "enter the stop inbetween the flight" << endl;
					cin >> Islamabad[k].stop;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Islamabad[k].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Islamabad[k].arrival;
					system("CLS");
				}
				break;

			}

			break;
		case 2:
			system("CLS");
			cout << "How many local flights?" << endl;
			cin >> LF;
			cout << "How many international flights?" << endl;
			cin >> IF;
			if (LF > 0)
			{
				for (int j = 0; j < LF; j++)
				{
					cout << "enter destination" << endl;
					cin >> Lahore[j].destination;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Lahore[j].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Lahore[j].arrival;
					system("CLS");
				}
			}
			if (IF > 0)
			{
				for (int k = 0 + LF; k < IF + LF; k++)
				{
					cout << "enter destination" << endl;
					cin >> Lahore[k].destination;
					cout << "enter the stop inbetween the flight" << endl;
					cin >> Lahore[k].stop;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Lahore[k].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Lahore[k].arrival;
					system("CLS");
				}
			}
			FN = LF + IF;
			break;
		case 3:
			system("CLS");
			cout << "How many local flights?" << endl;
			cin >> LF;
			cout << "How many international flights?" << endl;
			cin >> IF;
			if (LF > 0)
			{
				for (int j = 0; j < LF; j++)
				{
					cout << "enter destination" << endl;
					cin >> Quetta[j].destination;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Quetta[j].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Quetta[j].arrival;
					system("CLS");
				}
			}
			if (IF > 0)
			{
				for (int k = 0 + LF; k < IF + LF; k++)
				{
					cout << "enter destination" << endl;
					cin >> Quetta[k].destination;
					cout << "enter the stop inbetween the flight" << endl;
					cin >> Quetta[k].stop;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Quetta[k].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Quetta[k].arrival;
					system("CLS");
				}
			}
			FN = LF + IF;
			break;
		case 4:
			system("CLS");
			cout << "How many local flights?" << endl;
			cin >> LF;
			cout << "How many international flights?" << endl;
			cin >> IF;
			if (LF > 0)
			{
				for (int j = 0; j < LF; j++)
				{
					cout << "enter destination" << endl;
					cin >> Peshawer[j].destination;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Peshawer[j].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Peshawer[j].arrival;
					system("CLS");
				}
			}
			if (IF > 0)
			{
				for (int k = 0 + LF; k < IF + LF; k++)
				{
					cout << "enter destination" << endl;
					cin >> Peshawer[k].destination;
					cout << "enter the stop inbetween the flight" << endl;
					cin >> Peshawer[k].stop;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Peshawer[k].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Peshawer[k].arrival;
					system("CLS");
				}
			}
			FN = LF + IF;
			break;
		case 5:
			system("CLS");
			cout << "How many local flights?" << endl;
			cin >> LF;
			cout << "How many international flights?" << endl;
			cin >> IF;
			if (LF > 0)
			{
				for (int j = 0; j < LF; j++)
				{
					cout << "enter destination" << endl;
					cin >> Karachi[j].destination;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Karachi[j].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Karachi[j].arrival;
					system("CLS");
				}
			}
			if (IF > 0)
			{
				for (int k = 0 + LF; k < IF + LF; k++)
				{
					cout << "enter destination" << endl;
					cin >> Karachi[k].destination;
					cout << "enter the stop inbetween the flight" << endl;
					cin >> Karachi[k].stop;
					cout << "enter departure time, use 24 hour clock time" << endl;
					cin >> Karachi[k].departure;
					cout << "enter arrival time, use 24 hour clock time" << endl;
					cin >> Karachi[k].arrival;
					system("CLS");
				}
			}
			FN = LF + IF;
			break;
		default:
			system("CLS");
			cerr << "Invalid entry" << endl;
			break;
		}
		for (int i = 0; i < 20; i++)
		{
			Islamabad[i].PlaneNo = Lahore[i].PlaneNo = Quetta[i].PlaneNo = Peshawer[i].PlaneNo = Karachi[i].PlaneNo = i;
		}

	}
	void booking()
	{
		int des, seat, PNO, SNO, choice, ch, payment, pay; //des = destination, seat = bussiness/economy, PNO = plane no, SNO = number of seats, payment = money cost, pay = money paid
		string arr;
		des = seat = 0;
		string s;

		cout << "Ticket type: \n Press 1 for Economy\n Press 2 for Business" << endl; // asks for business or economy. press 1 or 2
		cin >> seat;
		cout << "Enter departure :\n Press 1 for Islamabad\n Press 2 for Lahore\n Press 3 for Quetta\n Press 4 for Peshawer\n Press 5 for Karachi" << endl; //asks airport, press numbers
		cin >> des;
		switch (des)
		{
		case 1:
			cout << "Where would you like to travel \n 1) local \n 2) International" << endl; //asks for international or local, enter numbers
			cin >> choice;
			if (choice == 1)
			{
				cout << "Enter destination :\n Press 1 for Lahore\n Press 2 for Quetta\n Press 3 for Peshawer\n Press 4 for Karachi" << endl; // asks for which airport
				cin >> arr; // enter a string NOT numbers
				cout << "Available Flights from islamabad" << endl;
				for (int i = 0; i < FN; i++) // shows all local flights
				{
					if (Islamabad[i].destination == arr)
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Plane No " << Islamabad[i].PlaneNo << " Leaving from Islamabad to " << Islamabad[i].destination << " Leaves at " << Islamabad[i].departure << " and arrives at " << Islamabad[i].arrival << endl;
						cout << "The available seats in economy are " << Islamabad[i].Eseats << " and " << Islamabad[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}

				}
				cout << "enter the plane No you wish to fly on " << endl; //booking starts here
				cin >> PNO;
				for (int i = 0; i < FN; i++)
				{
					if (Islamabad[i].PlaneNo == PNO)
					{
						cout << "Enter the number of seats you wish to book" << endl;
						cin >> SNO;
						if (seat == 1) //seat == 1 = economy
						{
							while (SNO > Islamabad[i].Eseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Islamabad[i].hours = Islamabad[i].arrival - Islamabad[i].departure;//payment starts here
							payment = Islamabad[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Islamabad[i].Eseats -= SNO;
								cout << "available seats in business now are " << Islamabad[i].Eseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}

						}
						if (seat == 2) //seat == 2 means business
						{
							while (SNO > Islamabad[i].Bseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}

							Islamabad[i].hours = Islamabad[i].arrival - Islamabad[i].departure; //claculating time so payment starts here
							payment = Islamabad[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Islamabad[i].Bseats -= SNO;
								cout << "available seats in business now are " << Islamabad[i].Bseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}

						}

					}


				}
			}
			else if (choice == 2) // choice == 2 means international
			{
				for (int i = 0; i < FN; i++)
				{
					if (Islamabad[i].stop != " ") //shows all international flights by checking is stops is empty or not
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Islamabad[i].PlaneNo << " Leaving from Islamabad to " << Islamabad[i].destination << " Leaves at " << Islamabad[i].departure << " and arrives at " << Islamabad[i].arrival << " while stopping at " << Islamabad[i].stop << endl;
						cout << "The available seats in economy are " << Islamabad[i].Eseats << " and " << Islamabad[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}

				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				cout << "Do you have the visa to fly to your destination? " << endl; //checks for visa
				cout << "1) Yes \n 2) No" << endl;
				cin >> ch;
				if (ch == 1) //if there is visa
				{
					for (int i = 0; i < FN; i++) //booking starts here
					{
						if (Islamabad[i].PlaneNo == PNO) //rest is same as local but international cost 20k instead of 10k
						{
							cout << "Enter the number of seats you wish to book" << endl;
							cin >> SNO;
							if (seat == 1)
							{
								while (SNO > Islamabad[i].Eseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Islamabad[i].hours = Islamabad[i].arrival - Islamabad[i].departure;
								payment = Islamabad[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Islamabad[i].Eseats -= SNO;
									cout << "available seats in business now are " << Islamabad[i].Eseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}
							if (seat == 2)
							{
								while (SNO > Islamabad[i].Bseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Islamabad[i].hours = Islamabad[i].arrival - Islamabad[i].departure;
								payment = Islamabad[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Islamabad[i].Bseats -= SNO;
									cout << "available seats in business now are " << Islamabad[i].Bseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}

							}

						}
					}
				}
				else
				{
					cout << "sorry you dont have the visa so you cant book the seats" << endl;
				}
			}
			break;
		case 2:
			cout << "Where would you like to travel \n 1) local \n 2) International" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "Enter destination :\n Press 1 for Islamabad\n Press 2 for Quetta\n Press 3 for Peshawer\n Press 4 for Karachi" << endl;
				cin >> arr;
				cout << "Available Flights from Lahore" << endl;
				for (int i = 0; i < FN; i++)
				{
					if (Lahore[i].destination == arr)
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Plane No " << Lahore[i].PlaneNo << " Leaving from Lahore to " << Lahore[i].destination << " Leaves at " << Lahore[i].departure << " and arrives at " << Lahore[i].arrival << endl;
						cout << "The available seats in economy are " << Lahore[i].Eseats << " and " << Lahore[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				for (int i = 0; i < FN; i++)
				{
					if (Lahore[i].PlaneNo == PNO)
					{
						cout << "Enter the number of seats you wish to book" << endl;
						cin >> SNO;
						if (seat == 1)
						{
							while (SNO > Lahore[i].Eseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Lahore[i].hours = Lahore[i].arrival - Lahore[i].departure;
							payment = Lahore[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Lahore[i].Eseats -= SNO;
								cout << "available seats in business now are " << Lahore[i].Eseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}
						if (seat == 2)
						{
							while (SNO > Lahore[i].Bseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Lahore[i].hours = Lahore[i].arrival - Lahore[i].departure;
							payment = Lahore[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Lahore[i].Bseats -= SNO;
								cout << "available seats in business now are " << Lahore[i].Bseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}

					}
				}
			}
			else if (choice == 2)
			{
				for (int i = 0; i < FN; i++)
				{
					if (Lahore[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Lahore[i].PlaneNo << " Leaving from Lahore to " << Lahore[i].destination << " Leaves at " << Lahore[i].departure << " and arrives at " << Lahore[i].arrival << " while stopping at " << Lahore[i].stop << endl;
						cout << "The available seats in economy are " << Lahore[i].Eseats << " and " << Lahore[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}

				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				cout << "Do you have the visa to fly to your destination? " << endl;
				cout << "1) Yes \n 2) No" << endl;
				cin >> ch;
				if (ch == 1)
				{
					for (int i = 0; i < FN; i++)
					{
						if (Lahore[i].PlaneNo == PNO)
						{
							cout << "Enter the number of seats you wish to book" << endl;
							cin >> SNO;
							if (seat == 1)
							{
								while (SNO > Lahore[i].Eseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Lahore[i].hours = Lahore[i].arrival - Lahore[i].departure;
								payment = Lahore[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Lahore[i].Eseats -= SNO;
									cout << "available seats in business now are " << Lahore[i].Eseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}
							if (seat == 2)
							{
								while (SNO > Lahore[i].Bseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Lahore[i].hours = Lahore[i].arrival - Lahore[i].departure;
								payment = Lahore[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Lahore[i].Bseats -= SNO;
									cout << "available seats in business now are " << Lahore[i].Bseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}
						}

					}

				}
			}
			else
			{
				cout << "sorry you dont have the visa so you cant book the seats" << endl;
			}

			break;
		case 3:
			cout << "Where would you like to travel \n 1) local \n 2) International" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "Enter destination :\n Press 1 for Islamabad\n Press 2 for Lahore\n Press 3 for Peshawer\n Press 4 for Karachi" << endl;
				cin >> arr;
				cout << "Available Flights from Quetta" << endl;
				for (int i = 0; i < FN; i++)
				{
					if (Quetta[i].destination == arr)
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Plane No " << Quetta[i].PlaneNo << " Leaving from Quetta to " << Quetta[i].destination << " Leaves at " << Quetta[i].departure << " and arrives at " << Quetta[i].arrival << endl;
						cout << "The available seats in economy are " << Quetta[i].Eseats << " and " << Quetta[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}

				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				for (int i = 0; i < FN; i++)
				{
					if (Quetta[i].PlaneNo == PNO)
					{
						cout << "Enter the number of seats you wish to book" << endl;
						cin >> SNO;
						if (seat == 1)
						{
							while (SNO > Quetta[i].Eseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Quetta[i].hours = Quetta[i].arrival - Quetta[i].departure;
							payment = Quetta[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Quetta[i].Eseats -= SNO;
								cout << "available seats in business now are " << Quetta[i].Eseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}
						if (seat == 2)
						{
							while (SNO > Quetta[i].Bseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Quetta[i].hours = Quetta[i].arrival - Quetta[i].departure;
							payment = Quetta[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Quetta[i].Bseats -= SNO;
								cout << "available seats in business now are " << Quetta[i].Bseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}

					}
				}
			}
			else if (choice == 2)
			{
				for (int i = 0; i < FN; i++)
				{
					if (Quetta[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Quetta[i].PlaneNo << " Leaving from Quetta to " << Quetta[i].destination << " Leaves at " << Quetta[i].departure << " and arrives at " << Quetta[i].arrival << " while stopping at " << Quetta[i].stop << endl;
						cout << "The available seats in economy are " << Quetta[i].Eseats << " and " << Quetta[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}

				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				cout << "Do you have the visa to fly to your destination? " << endl;
				cout << "1) Yes \n 2) No" << endl;
				cin >> ch;
				if (ch == 1)
				{
					for (int i = 0; i < FN; i++)
					{
						if (Quetta[i].PlaneNo == PNO)
						{
							cout << "Enter the number of seats you wish to book" << endl;
							cin >> SNO;
							if (seat == 1)
							{
								while (SNO > Quetta[i].Eseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Quetta[i].hours = Quetta[i].arrival - Quetta[i].departure;
								payment = Quetta[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Quetta[i].Eseats -= SNO;
									cout << "available seats in economy now are " << Quetta[i].Eseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}
							if (seat == 2)
							{
								while (SNO > Quetta[i].Bseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Quetta[i].hours = Quetta[i].arrival - Quetta[i].departure;
								payment = Quetta[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Quetta[i].Bseats -= SNO;
									cout << "available seats in business now are " << Quetta[i].Bseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}

						}
					}
				}
				else
				{
					cout << "you can travel since you dont have the visa" << endl;
				}
			}

			break;
		case 4:
			cout << "Where would you like to travel \n 1) local \n 2) International" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "Enter destination :\n Press 1 for Islamabad\n Press 2 for Lahore\n Press 3 for0 Quetta\n Press 4 for Karachi" << endl;
				cin >> arr;
				cout << "Available Flights from Peshawer" << endl;
				for (int i = 0; i < FN; i++)
				{
					if (Peshawer[i].destination == arr)
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Plane No " << Peshawer[i].PlaneNo << " Leaving from Peshawer to " << Peshawer[i].destination << " Leaves at " << Peshawer[i].departure << " and arrives at " << Peshawer[i].arrival << endl;
						cout << "The available seats in economy are " << Peshawer[i].Eseats << " and " << Peshawer[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				for (int i = 0; i < FN; i++)
				{
					if (Peshawer[i].PlaneNo == PNO)
					{
						cout << "Enter the number of seats you wish to book" << endl;
						cin >> SNO;
						if (seat == 1)
						{
							while (SNO > Peshawer[i].Eseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Peshawer[i].hours = Peshawer[i].arrival - Peshawer[i].departure;
							payment = Peshawer[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Karachi[i].Eseats -= SNO;
								cout << "available seats in economy now are " << Karachi[i].Eseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}
						if (seat == 2)
						{
							while (SNO > Peshawer[i].Bseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Peshawer[i].hours = Peshawer[i].arrival - Peshawer[i].departure;
							payment = Peshawer[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Peshawer[i].Bseats -= SNO;
								cout << "available seats in business now are " << Peshawer[i].Bseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}

					}
				}
			}
			else if (choice == 2)
			{
				for (int i = 0; i < FN; i++)
				{
					if (Peshawer[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Peshawer[i].PlaneNo << " Leaving from Peshawer to " << Peshawer[i].destination << " Leaves at " << Peshawer[i].departure << " and arrives at " << Peshawer[i].arrival << " while stopping at " << Peshawer[i].stop << endl;
						cout << "The available seats in economy are " << Peshawer[i].Eseats << " and " << Peshawer[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}

				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				cout << "Do you have the visa to fly to your destination? " << endl;
				cout << "1) Yes \n 2) No" << endl;
				cin >> ch;
				if (ch == 1)
				{
					for (int i = 0; i < FN; i++)
					{
						if (Peshawer[i].PlaneNo == PNO)
						{
							cout << "Enter the number of seats you wish to book" << endl;
							cin >> SNO;
							if (seat == 1)
							{
								while (SNO > Peshawer[i].Eseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Peshawer[i].hours = Peshawer[i].arrival - Peshawer[i].departure;
								payment = Peshawer[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Karachi[i].Eseats -= SNO;
									cout << "available seats in economy now are " << Karachi[i].Eseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}
							if (seat == 2)
							{
								while (SNO > Peshawer[i].Bseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Peshawer[i].hours = Peshawer[i].arrival - Peshawer[i].departure;
								payment = Peshawer[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Peshawer[i].Bseats -= SNO;
									cout << "available seats in business now are " << Peshawer[i].Bseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}

						}
					}
				}
				else
				{
					cout << "you dont have the visa to travel" << endl;
				}
			}
			break;
		case 5:
			cout << "Where would you like to travel \n 1) local \n 2) International" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "Enter destination :\n Press 1 for Islamabad\n Press 2 for Lahore\n Press 3 for Quetta\n Press 4 for Peshawar" << endl;
				cin >> arr;
				cout << "Available Flights from Karachi" << endl;
				for (int i = 0; i < FN; i++)
				{
					if (Karachi[i].destination == arr)
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Plane No " << Karachi[i].PlaneNo << " Leaving from Karachi to " << Karachi[i].destination << " Leaves at " << Karachi[i].departure << " and arrives at " << Karachi[i].arrival << endl;
						cout << "The available seats in economy are " << Karachi[i].Eseats << " and " << Karachi[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				for (int i = 0; i < FN; i++)
				{
					if (Karachi[i].PlaneNo == PNO)
					{
						cout << "Enter the number of seats you wish to book" << endl;
						cin >> SNO;
						if (seat == 1)
						{
							while (SNO > Karachi[i].Eseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Karachi[i].hours = Karachi[i].arrival - Karachi[i].departure;
							payment = Karachi[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Karachi[i].Eseats -= SNO;
								cout << "available seats in economy now are " << Karachi[i].Eseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}
						if (seat == 2)
						{
							while (SNO > Karachi[i].Bseats)
							{
								cout << "not enough seats available" << endl;
								cout << "enter a valid number of seats" << endl;
								cin >> SNO;
							}
							Karachi[i].hours = Karachi[i].arrival - Karachi[i].departure;
							payment = Karachi[i].hours * 10000;
							cout << "Your final payment is " << payment << endl;
							cin >> pay;
							if (pay >= payment)
							{
								cout << "your payment was successful" << endl;
								Karachi[i].Bseats -= SNO;
								cout << "available seats in business now are " << Karachi[i].Bseats << endl;
							}
							else
							{
								cout << "Not enough payment, your seats have been cancelled" << endl;
							}
						}

					}
				}
			}
			else if (choice == 2)
			{
				for (int i = 0; i < FN; i++)
				{
					if (Karachi[i].stop != " ")
					{
						cout << "---------------------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Karachi[i].PlaneNo << " Leaving from Karachi to " << Karachi[i].destination << " Leaves at " << Karachi[i].departure << " and arrives at " << Karachi[i].arrival << " while stopping at " << Karachi[i].stop << endl;
						cout << "The available seats in economy are " << Karachi[i].Eseats << " and " << Karachi[i].Bseats << " Business seats" << endl;
						cout << "----------------------------------------------------------------------------------------------------" << endl;
					}

				}
				cout << "enter the plane No you wish to fly on " << endl;
				cin >> PNO;
				cout << "Do you have the visa to fly to your destination? " << endl;
				cout << "1) Yes \n 2) No" << endl;
				cin >> ch;
				if (ch == 1)
				{
					for (int i = 0; i < FN; i++)
					{
						if (Karachi[i].PlaneNo == PNO)
						{
							cout << "Enter the number of seats you wish to book" << endl;
							cin >> SNO;
							if (seat == 1)
							{
								while (SNO > Karachi[i].Eseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Karachi[i].hours = Karachi[i].arrival - Karachi[i].departure;
								payment = Karachi[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Karachi[i].Eseats -= SNO;
									cout << "available seats in economy now are " << Karachi[i].Eseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}
							if (seat == 2)
							{
								while (SNO > Karachi[i].Bseats)
								{
									cout << "not enough seats available" << endl;
									cout << "enter a valid number of seats" << endl;
									cin >> SNO;
								}
								Karachi[i].hours = Karachi[i].arrival - Karachi[i].departure;
								payment = Karachi[i].hours * 20000;
								cout << "Your final payment is " << payment << endl;
								cin >> pay;
								if (pay >= payment)
								{
									cout << "your payment was successful" << endl;
									Karachi[i].Bseats -= SNO;
									cout << "available seats in business now are " << Karachi[i].Bseats << endl;
								}
								else
								{
									cout << "Not enough payment, your seats have been cancelled" << endl;
								}
							}

						}
					}
				}
				else
				{
					cout << "you cant travel to this country" << endl;
				}
			}
			break;
		default:
			cerr << "Invalid selection!" << endl;
			break;
		}
	}
	void display()
	{
		int e = 0;
		while (e != 1)
		{
			for (int i = 0; i < FN; i++)
			{
				if (Islamabad[i].departure != 0)
				{
					if (Islamabad[i].stop == " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Local Flights" << endl;
						cout << "Plane No " << Islamabad[i].PlaneNo << " Leaving from Islamabad to " << Islamabad[i].destination << " Leaves at " << Islamabad[i].departure << " and arrives at " << Islamabad[i].arrival << endl;
						cout << "The available seats in economy are " << Islamabad[i].Eseats << " and " << Islamabad[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
					if (Islamabad[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Islamabad[i].PlaneNo << " Leaving from Islamabad to " << Islamabad[i].destination << " Leaves at " << Islamabad[i].departure << " and arrives at " << Islamabad[i].arrival << " while stopping at " << Islamabad[i].stop << endl;
						cout << "The available seats in economy are " << Islamabad[i].Eseats << " and " << Islamabad[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				if (Lahore[i].departure != 0)
				{
					if (Islamabad[i].stop == " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Local Flights" << endl;
						cout << "Plane No " << Lahore[i].PlaneNo << " Leaving from Lahore to " << Lahore[i].destination << " Leaves at " << Lahore[i].departure << " and arrives at " << Lahore[i].arrival << endl;
						cout << "The available seats in economy are " << Lahore[i].Eseats << " and " << Lahore[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
					if (Islamabad[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Lahore[i].PlaneNo << " Leaving from Lahore to " << Lahore[i].destination << " Leaves at " << Lahore[i].departure << " and arrives at " << Lahore[i].arrival << " while stopping at " << Lahore[i].stop << endl;
						cout << "The available seats in economy are " << Lahore[i].Eseats << " and " << Lahore[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				if (Quetta[i].departure != 0)
				{
					if (Islamabad[i].stop == " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Local Flights" << endl;
						cout << "Plane No " << Quetta[i].PlaneNo << " Leaving from Quetta to " << Quetta[i].destination << " Leaves at " << Quetta[i].departure << " and arrives at " << Quetta[i].arrival << endl;
						cout << "The available seats in economy are " << Quetta[i].Eseats << " and " << Quetta[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
					if (Islamabad[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Quetta[i].PlaneNo << " Leaving from Quetta to " << Quetta[i].destination << " Leaves at " << Quetta[i].departure << " and arrives at " << Quetta[i].arrival << " while stopping at " << Quetta[i].stop << endl;
						cout << "The available seats in economy are " << Quetta[i].Eseats << " and " << Quetta[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				if (Peshawer[i].departure != 0)
				{
					if (Islamabad[i].stop == " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Local Flights" << endl;
						cout << "Plane No " << Peshawer[i].PlaneNo << " Leaving from Peshawer to " << Peshawer[i].destination << " Leaves at " << Peshawer[i].departure << " and arrives at " << Peshawer[i].arrival << endl;
						cout << "The available seats in economy are " << Peshawer[i].Eseats << " and " << Peshawer[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
					if (Islamabad[i].stop != " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Peshawer[i].PlaneNo << " Leaving from Peshawer to " << Peshawer[i].destination << " Leaves at " << Peshawer[i].departure << " and arrives at " << Peshawer[i].arrival << " while stopping at " << Peshawer[i].stop << endl;
						cout << "The available seats in economy are " << Peshawer[i].Eseats << " and " << Peshawer[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
				}
				if (Karachi[i].departure != 0)
				{
					if (Islamabad[i].stop == " ")
					{
						cout << "------------------------------------------------------------------------------------" << endl;
						cout << "Local Flights" << endl;
						cout << "Plane No " << Karachi[i].PlaneNo << " Leaving from Karachi to " << Karachi[i].destination << " Leaves at " << Karachi[i].departure << " and arrives at " << Karachi[i].arrival << endl;
						cout << "The available seats in economy are " << Karachi[i].Eseats << " and " << Karachi[i].Bseats << " Business seats" << endl;
						cout << "------------------------------------------------------------------------------------" << endl;
					}
					if (Islamabad[i].stop != " ")
					{
						cout << "---------------------------------------------------------------------------------------------------" << endl;
						cout << "International Flight:" << endl;
						cout << "Plane No " << Karachi[i].PlaneNo << " Leaving from Karachi to " << Karachi[i].destination << " Leaves at " << Karachi[i].departure << " and arrives at " << Karachi[i].arrival << " while stopping at " << Karachi[i].stop << endl;
						cout << "The available seats in economy are " << Karachi[i].Eseats << " and " << Karachi[i].Bseats << " Business seats" << endl;
						cout << "----------------------------------------------------------------------------------------------------" << endl;
					}
				}
			}
			cout << "enter 1 to exit" << endl;
			cin >> e;
		}
	}

};