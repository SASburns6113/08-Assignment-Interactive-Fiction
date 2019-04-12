#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
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
//string getMurderWeapon();
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

	//getMurderWeapon();

	int play = 0;
	do 
	{
		string story;
		int choice1, choice2, choice3;
		int randomWeapon,body;

		string bodyArray[3] = {"The body is filled with bullets.","The body is filled with stab wounds.","The body's skull is smashed in."}
		string randomWeaponArray[3] = {"Gun","knife","bat"}

		srand(time(NULL));
		body = rand() % 3;
		randomWeapon = rand() % 3;



	}

	
}

//lets the user put their own character into the story
string GetCharacterName()
{
	cout << "Please enter your character name: ";

	string CharacterName;
	getline(cin, CharacterName);

	return CharacterName;
	
}

void welcomeUser(string CharacterName)
{
	cout << "\nWelcome " << CharacterName << " to Slaughterhouse.\n";
	cout << "You must find a murder weapon and solve the case.\n\n\n";
}

//meant to setup the story for the user
void openingStory(string CharacterName)
{
	cout << "You are standing in apartment number 123, Which just so happens to be the scene\n";
	cout << "of a terrable murder. your the ace detective " << CharacterName << " and it is your job to \n";
	//hoping to add one the ability to find a cause of death and suspect
	cout << "find the murder weapon.\n";
}


//tring to find a why to make it so the player has to see a random story and
//then guess the right weapon used in the crime

//string getMurderWeapon()
//{
	////Create a collection of 10 words you had wrote down manually
	//vector<string> weapons;  //collection of possible words to guess
	//weapons.push_back("GUN");
	//weapons.push_back("KNIFE");
	//weapons.push_back("BAT");

	//srand(static_cast<unsigned int>(time(0)));
	//random_shuffle(weapons.begin(), weapons.end());
	

	//return string();
//}

