#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib> 
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

//These are the functions that I am using for this program
string getHunter();
string getMage();
string getGuardian();
string getAssassin();
string getWarrior();


int main()
{
	//Delcaring a int for the user's choice
	int godType;
	//Initializing and assigning the pointer to the int above
	int* pGodType = &godType;
	//These are the 5 types of gods in the game
	cout << "What type of god are you using?\n";
	cout << "1 - Hunter\n";
	cout << "2 - Mage\n";
	cout << "3 - Guardian\n";
	cout << "4 - Assassin\n";
	cout << "5 - Warrior\n";
	//Assigning the user's input to the dereferenced pointer
	cin >> *pGodType;
	//Using a switch statement with a pointer as a parameter
	switch (*pGodType)
	{
		//This will be displayed if you choose a hunter god
	case 1:
		cout << "Your random Hunter god is: " << getHunter() << endl;
		cout << "Good Luck!\n";
		cout << "Have Fun!\n";
		break;
	case 2:
		//This will be displayed if you choose a mage god
		cout << "Your random Mage god is: " << getMage() << endl;
		cout << "Good Luck!\n";
		cout << "Have Fun!\n";
		break;
	case 3:
		//This will be displayed if you choose a guardian god
		cout << "Your random Guardian god is: " << getGuardian() << endl;
		cout << "Good Luck!\n";
		cout << "Have Fun!\n";
		break;
	case 4:
		//This will be displayed if you choose an assassin god
		cout << "Your random Assassin god is: " << getAssassin() << endl;
		cout << "Good Luck!\n";
		cout << "Have Fun!\n";
		break;
	case 5:
		//This will be displayed if you choose a warrior god
		cout << "Your random Warrior god is: " << getWarrior() << endl;
		cout << "Good Luck!\n";
		cout << "Have Fun!\n";
		break;
	default:
		//If the user input's something other than 1, 2, 3, 4, or 5 this will display and the program will rerun.
		cout << "You have made an illegal choice please try again";
		return main();
	}
	//Pausing the program
	system("pause");
	//Ending the program
	return 0;
}
//Fucntion that will run if the user inputs 1 (Hunter god)
string getHunter()
{
	//Creating a vector with all of the hunter gods in the game
	vector<string> hunterGods;
	hunterGods.push_back("AH MUZEN CAB");
	hunterGods.push_back("ANHUR");
	hunterGods.push_back("APOLLO");
	hunterGods.push_back("ARTEMIS");
	hunterGods.push_back("CERNUNNOS");
	hunterGods.push_back("CHERNOBOG");
	hunterGods.push_back("CHIRON");
	hunterGods.push_back("CUPID");
	hunterGods.push_back("HACHIMAN");
	hunterGods.push_back("HOU YI");
	hunterGods.push_back("IZANAMI");
	hunterGods.push_back("JING WEI");
	hunterGods.push_back("MEDUSA");
	hunterGods.push_back("NEITH");
	hunterGods.push_back("RAMA");
	hunterGods.push_back("SKADI");
	hunterGods.push_back("ULLR");
	hunterGods.push_back("XBALANQUE");
	//Shuffling the vector
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(hunterGods.begin(), hunterGods.end());
	//Delcaring a string
	string randomHunter;
	//Initializing and assigning a pointer to the string above
	string *PRandomHunter = &randomHunter;
	//Setting the dereferenced pointer to the first item in the shuffled vector
	*PRandomHunter = hunterGods[0];
	//Returning the dereferenced pointer
	return *PRandomHunter;
}

//Fucntion that will run if the user inputs 2 (Mage god)
string getMage()
{
	//Creating a vector with all of the mage gods in the game
	vector<string> mageGods;
	mageGods.push_back("AGNI");
	mageGods.push_back("AH PUCH");
	mageGods.push_back("ANUBIS");
	mageGods.push_back("AO KUANG");
	mageGods.push_back("APHRODITE");
	mageGods.push_back("BARON SAMEDI");
	mageGods.push_back("CHANG'E");
	mageGods.push_back("CHRONOS");
	mageGods.push_back("DISCORDIA");
	mageGods.push_back("FREYA");
	mageGods.push_back("HADES");
	mageGods.push_back("HE BO");
	mageGods.push_back("HEL");
	mageGods.push_back("HERA");
	mageGods.push_back("ISIS");
	mageGods.push_back("JANUS");
	mageGods.push_back("KUKULKAN");
	mageGods.push_back("MERLIN");
	mageGods.push_back("NOX");
	mageGods.push_back("NU WA");
	mageGods.push_back("POSEIDON");
	mageGods.push_back("RA");
	mageGods.push_back("RAIJIN");
	mageGods.push_back("SCYLLA");
	mageGods.push_back("SOL");
	mageGods.push_back("THE MORRIGAN");
	mageGods.push_back("THOTH");
	mageGods.push_back("VULCAN");
	mageGods.push_back("ZEUS");
	mageGods.push_back("ZHONG KUI");
	//Shuffling the vector
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(mageGods.begin(), mageGods.end());
	//Delcaring a string
	string randomMage;
	//Initializing and assigning a pointer to the string above
	string *PRandomMage = &randomMage;
	//Setting the dereferenced pointer to the first item in the shuffled vector
	*PRandomMage = mageGods[0];
	//Returning the dereferenced pointer
	return *PRandomMage;
}

//Fucntion that will run if the user inputs 3 (Guardian god)
string getGuardian()
{
	//Creating a vector with all of the guardian gods in the game
	vector<string> guardianGods;
	guardianGods.push_back("ARES");
	guardianGods.push_back("ARTIO");
	guardianGods.push_back("ATHENA");
	guardianGods.push_back("BACCHUS");
	guardianGods.push_back("CABRAKAN");
	guardianGods.push_back("CERBERUS");
	guardianGods.push_back("FAFNIR");
	guardianGods.push_back("GANESHA");
	guardianGods.push_back("GEB");
	guardianGods.push_back("KHEPRI");
	guardianGods.push_back("JORMUNGANDR");
	guardianGods.push_back("KUMBHAKARNA");
	guardianGods.push_back("KUZENBO");
	guardianGods.push_back("SOBEK");
	guardianGods.push_back("SYLVANUS");
	guardianGods.push_back("TERRA");
	guardianGods.push_back("XING TIAN");
	guardianGods.push_back("YMIR");
	//Shuffling the vector
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(guardianGods.begin(), guardianGods.end());
	//Delcaring a string
	string randomGuardian;
	//Initializing and assigning a pointer to the string above
	string *PRandomGuardian = &randomGuardian;
	//Setting the dereferenced pointer to the first item in the shuffled vector
	*PRandomGuardian = guardianGods[0];
	//Returning the dereferenced pointer
	return *PRandomGuardian;
}

//Fucntion that will run if the user inputs 4 (Assassin god)
string getAssassin()
{
	//Creating a vector with all of the guardian gods in the game
	vector<string> assassinGods;
	assassinGods.push_back("ARACHNE");
	assassinGods.push_back("AWILIX");
	assassinGods.push_back("BAKASURA");
	assassinGods.push_back("BASTET");
	assassinGods.push_back("CAMAZOTZ");
	assassinGods.push_back("DA JI");
	assassinGods.push_back("FENRIR");
	assassinGods.push_back("HUN BATZ");
	assassinGods.push_back("KALI");
	assassinGods.push_back("LOKI");
	assassinGods.push_back("MERCURY");
	assassinGods.push_back("NE ZHA");
	assassinGods.push_back("NENEMIS");
	assassinGods.push_back("PELE");
	assassinGods.push_back("RATAOSKR");
	assassinGods.push_back("RAVANA");
	assassinGods.push_back("SERQET");
	assassinGods.push_back("SUSANO");
	assassinGods.push_back("THANATOS");
	assassinGods.push_back("THOR");

	//Shuffling the vector
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(assassinGods.begin(), assassinGods.end());
	//Delcaring a string
	string randomAssassin;
	//Initializing and assigning a pointer to the string above
	string *PRandomAssassin = &randomAssassin;
	//Setting the dereferenced pointer to the first item in the shuffled vector
	*PRandomAssassin = assassinGods[0];
	//Returning the dereferenced pointer
	return *PRandomAssassin;
}

//Fucntion that will run if the user inputs 5 (Warrior god)
string getWarrior()
{
	//Creating a vector with all of the warrior gods in the game
	vector<string> warriorGods;
	warriorGods.push_back("ACHILLES");
	warriorGods.push_back("AMATERASU");
	warriorGods.push_back("BELLONA");
	warriorGods.push_back("CHAAC");
	warriorGods.push_back("CU CHULAINN");
	warriorGods.push_back("ERLANG SHEN");
	warriorGods.push_back("GUAN YU");
	warriorGods.push_back("HERCULES");
	warriorGods.push_back("KING ARTHUR");
	warriorGods.push_back("NIKE");
	warriorGods.push_back("ODIN");
	warriorGods.push_back("OSIRIS");
	warriorGods.push_back("SUN WUKONG");
	warriorGods.push_back("TYR");
	warriorGods.push_back("VAMANA");

	//Shuffling the vector
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(warriorGods.begin(), warriorGods.end());

	//Delcaring a string
	string randomWarrior;
	//Initializing and assigning a pointer to the string above
	string *PRandomWarrior = &randomWarrior;
	//Setting the dereferenced pointer to the first item in the shuffled vector
	*PRandomWarrior = warriorGods[0];
	//Returning the dereferenced pointer
	return *PRandomWarrior;
}