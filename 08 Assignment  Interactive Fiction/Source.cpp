#include <iostream>
#include <string>
#include <vector>
#include <random>
//Create an Interactive Fiction game.
//Create a C++ program that uses more than one function.
//Control all your functions through the main function.
//Pass and return parameters to your functions.
//Your program must do something and be an interactive fiction game, it must not just demo functions.
//Have fun!

using namespace std;
// Must declare functions before use!
string GetCharacterName();
void welcomeUser(string CharacterName);
void openingStory(string CharacterName);
void randStroyandChoose();
int weapons;
int body;




int main()
{
	// Get character name from user
	string CharacterName;
	// Notice we have to catch the character name coming back from this function.
	// We do this with our characterName variable.
	CharacterName = GetCharacterName();
	// here we use char name
	welcomeUser(CharacterName);

	openingStory(CharacterName);

	randStroyandChoose();
		

	system("pause");
	return 0;



	
}

//lets the user put their own character into the story
string GetCharacterName()
{
	cout << "Please enter your character name: ";

	string CharacterName;
	getline(cin, CharacterName);

	return CharacterName;
	
}

//this is the welcome function
void welcomeUser(string CharacterName)
{
	cout << "\nWelcome " << CharacterName << " to Slaughterhouse.\n";
	cout << "You must find a murder weapon and solve the case.\n\n\n";
	system("pause");
}

//meant to setup the story for the user
void openingStory(string CharacterName)
{
	cout << "You are standing in apartment number 123, Which just so happens to be the scene\n";
	cout << "of a terrable murder. your the ace detective " << CharacterName << " and it is your job to \n";
	//hoping to add one the ability to find a cause of death and suspect
	cout << "find the murder weapon.\n\n";
	system("pause");
}

//this function randamizes the story and player choose
void randStroyandChoose()
{
	random_device rd; // obtain a random number from hardware
	mt19937 eng(rd()); // seed the generator
	uniform_int_distribution<> distr(0, 2); // define the range

	int myRandNumber = distr(eng);
	cout << myRandNumber;

	string bodyArray[3] = { "The body is filled with bullets.\n","The body is filled with stab wounds.\n","The body's skull is smashed in.\n" };
	string selected = bodyArray[myRandNumber];

	cout << selected;

	cout << "your weapons: Gun, Knife, Bat\n\n";
	string choose;
	cin >> choose;
	if (choose == "gun" && selected == bodyArray[0])
	{
		cout << "You found the murder weapon!\nYou Win!\n\n";
	}
	else if (choose == "bat" && selected == bodyArray[2])
	{
		cout << "You found the murder weapon!\nYou Win!\n\n";
	}
	else if (choose == "knife" && selected == bodyArray[1])
	{
		cout << "You found the murder weapon!\nYou Win!\n\n";
	}
	else if (choose != "gun", "bat", "knife")
	{
		cout << "invalid, pick gun, knife, or bat.\n\n";
		
	}
}



