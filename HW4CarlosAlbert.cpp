//Carlos Albert
//HW4 Race Results Program
//COP2000


#include <iostream>
#include <string>
using namespace std;


void occurRaceTimes(string &, double &);

void searchWinner(string, string, string, double, double, double);

void welcome();                                                     //Function Prototype

double raceAverage(double, double, double);

//_____________________________________________________________________________
int main()
{

	string name1,
		name2,
		name3;
	//Variables.
	double time1 = 0,
		time2 = 0,
		time3 = 0;



	welcome();      //Display Menu.


	occurRaceTimes(name1, time1);        //Data 1 for first racer


	occurRaceTimes(name2, time2);        //Data 2 for second racer


	occurRaceTimes(name3, time3);        //Data 3 for third racer

	searchWinner(name1, name2, name3, time1, time2, time3);   //Winner to be determined.

	double average = raceAverage(time1, time2, time3);
	cout << endl;
	cout << endl;                                                   //Average of race
	cout << "Overall Race Time Average: " << average << endl;
	system("pause");
	return 0;
}

void occurRaceTimes(string &racerName, double &racerTime)
{
	cout << "Please enter the racer's first name > ";
	cin >> racerName;
	cout << "Please enter the racer's time > ";             //enter racer info for outputs
	cin >> racerTime;
	while (racerTime <= 0)
	{
		cout << "Invalid time input...time must be greater than 0 ";
		cout << "Enter the racers time: ";
		cin >> racerTime;
	}
}

void searchWinner(string racerName1, string racerName2, string racerName3, double racerTime1, double racerTime2, double racerTime3)



{
	string nameOfWinner1, nameOfWinner2; double timeOfWinner = 0;

	if (racerTime1 < racerTime2 && racerTime3)
	{
		nameOfWinner1 = racerName1;
		timeOfWinner = racerTime1;
		cout << "Congratulations " << nameOfWinner1 << "!" << "You are the winner!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime1 && racerTime2 < racerTime3)
	{
		nameOfWinner1 = racerName1;
		nameOfWinner2 = racerName2;
		timeOfWinner = racerTime1;
		cout << "We have a TIE " << nameOfWinner1 << " and " << nameOfWinner2 << " win!!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	if (racerTime2 < racerTime3 && racerTime1)
	{
		nameOfWinner1 = racerName2;
		timeOfWinner = racerTime2;
		cout << "Congratulations " << nameOfWinner1 << "!" << "You are the winner!" << endl;        //Answers are displayed 
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime2 && racerTime3 < racerTime1)
	{
		nameOfWinner1 = racerName2;
		nameOfWinner2 = racerName3;
		timeOfWinner = racerTime2;
		cout << "We have a TIE " << nameOfWinner1 << " and " << nameOfWinner2 << " win!!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	if (racerTime3 < racerTime1 && racerTime2)
	{
		nameOfWinner1 = racerName3;
		timeOfWinner = racerTime3;
		cout << "Congratulations " << nameOfWinner1 << "!" << "You are the winner!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime3 &&racerTime1 < racerTime2)
	{
		nameOfWinner1 = racerName1;
		nameOfWinner2 = racerName3;
		timeOfWinner = racerTime1;
		cout << "We have a TIE " << nameOfWinner1 << " and " << nameOfWinner2 << " win!!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime1 && racerTime2 == racerTime3)
	{
		cout << "We have a 3 way TIE!!! No Winner for this Race..." << endl;
	}

}
void welcome()
{
	cout << "*****************************************************************\n";
	cout << "                                                                 \n";
	cout << "Welcome to Race Results Program\n";
	cout << "You are asked to enter the Three Racer’s Names\n";             //Program Message Displays
	cout << "and their Associated Race Time.\n";
	cout << " \n";
	cout << " \n";
	cout << "Please enter a real number for Race Time (The Race Time Must Be > 0)\n";
	cout << " \n";
	cout << " \n";
	cout << "Program Developed by: Carlos Albert \n";
	cout << "*****************************************************************\n";
}
double raceAverage(double time1, double time2, double time3)
{
	double average = 0;
	average = (time1 + time2 + time3) / 3;    //Average is calculated
	return average;
}
