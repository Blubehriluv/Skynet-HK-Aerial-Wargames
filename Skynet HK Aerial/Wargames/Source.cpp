// Creating Skynet Hunter Killer Aerial 

	//Things to include so the code isn't broken
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

	//Placed the namespace in to make using "cout", "cin", "endl", etc., easier.
using namespace std;

	//Initialized variables
int enemyLoc;
int counter = 0;
int highNum = 64;
int lowNum = 1;
int guess = ((highNum - lowNum) / 2) + lowNum;
int myGuess;
int myTotalGuesses;
int randGuess;
int countGuess;

//~~~~~~~~~~~~ BEGINNING OF PLAYER GUESSING ~~~~~~~~~~~~

	//Calls function to beginning so nothing breaks
void playerChecking();

	//Function that asks the player to guess again when they are wrong
void guessAgain()
{
	cout << "Guess again: ";
		//Accepts new guess value
	cin >> myGuess;
		//Goes to check if answer is right
	playerChecking();
}

	//Helps the player find the answer 
void playerSolve()
{
	//If the player's guess is greater than the enemy location
	if (myGuess > enemyLoc)
	{
		cout << "	The location is lower!\n" << endl;
			//They are told to guess again
		guessAgain();
	}
	//When the player's guess is lower than the enemy location
	if (myGuess < enemyLoc)
	{
		cout << "	The location is higher!\n" << endl;
			//They are told to guess again
		guessAgain();
	}
}
	//Checks to see if the player guess is correct
void playerChecking()
{
	//If the enemy is NOT found
	if (myGuess != enemyLoc)
	{
		cout << "\nThe guess " << myGuess << " is incorrect." << endl;
			//Sends the player to a hint before guessing again
		playerSolve();
			//Counts the player's total guesses before they're correct
		myTotalGuesses++;
		return;
	}
	//If the enemy IS found
	if (myGuess == enemyLoc)
	{
		cout << "Correct! You found the enemy!" << endl;
		return;
	}
}
//~~~~~~~~~~~~~~~~~END OF PLAYER GUESSING ~~~~~~~~~~~~~~~~~~




/*
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
}*/

int main()
{
	srand(time(NULL));
	enemyLoc = 1 + rand() % 64;
	cout << "		SKYNET 'HK' AERIAL ACTIVATED!\n" << endl;
	cout << "	Spawn enemy on 8 x 8 grid!" << endl;

	system("pause");
	cout << "\n" << endl;

	//cout << "	ENEMY LOCATION: " << enemyLoc << ".\n" << endl;
	cout << "What is your guess?" << endl;
	cin >> myGuess;
	playerChecking();


	system("pause");

	//checking();

	system("pause");
	return 0;
}