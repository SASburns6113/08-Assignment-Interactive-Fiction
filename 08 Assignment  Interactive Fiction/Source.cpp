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



	system("pause");

	return 0;
}

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

void openingStory(string CharacterName)
{
	cout << "You are standing in apartment number 123, Which just so happens to be the scene\n";
	cout << "of a terrable murder. your the ace detective " << CharacterName << " and it is your job to \n";
	cout << "find the cause of death, murder weapon, and suspect.";
}

//string getMurderWeapon()
//{
	//// Create a collection of 10 words you had wrote down manually
	//vector<string> weapons;  //collection of possible words to guess
	//weapons.push_back("GUN");
	//weapons.push_back("KNIFE");
	//weapons.push_back("BAT");

	//srand(static_cast<unsigned int>(time(0)));
	//random_shuffle(weapons.begin(), weapons.end());
//}