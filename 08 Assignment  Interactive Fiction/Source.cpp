#include <iostream>
#include <string>
#include <vector>
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


int main()
{
	// Get character name from user
	string CharacterName;
	// Notice we have to catch the character name coming back from this function.
	// We do this with our characterName variable.
	CharacterName = GetCharacterName();
	// here we use char name
	welcomeUser(CharacterName);

	cout << "You are standing in apartment number 123, Which just so happens to be the scene\n";
	cout << "of a terrable murder, your the ace detective " << CharacterName << "and it is your job to \n";
	cout << "find the cause of death, murder weapon "
	
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
	cout << "You must find a murder weapon and solve the case.\n";
}

string getMurderWeapon()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "come on man, it's just the name of the game."}
	}
}