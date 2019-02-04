// Creating Skynet Hunter Killer Aerial 

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
int enemyLoc;
int counter = 0;
int highNum = 64;
int lowNum = 1;
int guess = ((highNum - lowNum) / 2) + lowNum;
//bool found = false;

void found()
{
	cout << "	ENEMY SPOTTED!\n" << endl;
	cout << "Success in [" << counter << "] tries.\n" << endl;
}

//Testing to see if the enemy has been found yet

void checking();

void predict()
{
	guess = ((highNum - lowNum) / 2) + lowNum;
	checking();
}

void solve()
{
	//When the guess is greater than the enemy location
	if (guess > enemyLoc)
	{
		highNum = guess;
		counter += 1;
		cout << "	The location is lower!\n" << endl;
		predict();
	}
	//When the guess is less than the enemy location
	if (guess < enemyLoc)
	{
		lowNum = guess;
		counter += 1;
		cout << "	The location is higher!\n" << endl;
		predict();
	}
}

void checking()
{
	//If the enemy is NOT found
	while (guess != enemyLoc)
	{
		cout << "\nThe Skynet HK is searching at '" << guess << "'..." << endl;
		solve();
		return;
	}
	//If the enemy IS found
	while (guess == enemyLoc)
	{
		found();
		return;
	}
}

int main()
{
	srand(time(NULL));
	enemyLoc = 1 + rand() % 64;
	cout << "		SKYNET 'HK' AERIAL ACTIVATED!\n" << endl;
	cout << "	Spawn enemy on 8 x 8 grid!" << endl;

	system("pause");
	cout << "\n" << endl;

	cout << "	ENEMY LOCATION: " << enemyLoc << ".\n" << endl;

	system("pause");

	checking();

	system("pause");
	return 0;
}