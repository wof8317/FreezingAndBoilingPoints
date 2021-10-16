#include <iostream>
using namespace std;

int main()
{
	// Variable to hold temperature entered
	int temp;
	char Again; //allows user to enter another temperature

	do {
		cout << "This program compares the temperature in fahrenheit that the user enters,";
		cout << "\ncompares it with the following table, and shows all the substances that will";
		cout << "\nfreeze and boil at that temperature." << endl;
		cout << "\nPlease enter the current temperature in Fahrenheit: ";
		cin >> temp;
		cout << "\nSUBSTANCE                   FREEZING POINT (F)                   BOILING POINT (F)";
		cout << "\n__________________________________________________________________________________";
		cout << "\nEthyl Alcohol               -173 Degrees                         172 Degrees";
		cout << "\nMercury                     -38 Degrees                          676 Degrees";
		cout << "\nOxygen                      -362 Degrees                        -306 Degrees";
		cout << "\nWater                        32 Degrees                          212 Degrees";
		cout << "\n\nWhen the temperature is " << temp << " Degrees";
		if (temp <= -173) //Ethyl will freeze
			cout << "\n\nEthyl Alcohol    Freezes";
		else if (temp >= 172)//Ethyl will boil
			cout << "\n\nEthyl Alcohol    Boils";
		else //No change
			cout << "\n\nEthyl Alcohol    No Change!";
		if (temp <= -38) //Mercury will freeze
			cout << "\n\nMercury          Freezes!";
		else if (temp >= 676) //Mercury will boil
			cout << "\n\nMercury          Boils!";
		else //No change
			cout << "\n\nMercury          No Change!";
		if (temp <= -362) //Oxygen will freeze
			cout << "\n\nOxygen           Freezes!";
		else if (temp >= -306) //Oxygen will boil
			cout << "\n\nOxygen           Boils!";
		else //No change
			cout << "\n\nOxygen           No Change!";
		if (temp <= 32) //Water will freeze
			cout << "\n\nWater            Freezes!";
		else if (temp >= 212) //Water will boil
			cout << "\n\nWater            Boils!";
		else //No change
			cout << "\n\nWater            No Change!";
		cout << "\n\nSUMMARY:"; //Outputs the same thing as above, but much cleaner and detailed
		if (temp <= -173)
			cout << "\nAt this temperature Ethyl Alcohol will freeze!";
		else if (temp >= 172)
			cout << "\nAt this temperature Ethyl Alcohol will boil!";
		else
			cout << "\nAt this temperature nothing will happen to the contents of the Ethyl Alcohol!";
		if (temp <= -38)
			cout << "\nAt this temperature Mercury will freeze!";
		else if (temp >= 676)
			cout << "\nAt this temperature Mercury will boil!";
		else
			cout << "\nAt this temperature nothing will happen to the contents of the Mercury!";
		if (temp <= -362)
			cout << "\nAt this temperature Oxygen will freeze!";
		else if (temp >= -306)
			cout << "\nAt this temperature Oxygen will boil!";
		else
			cout << "\nAt this temperature nothing will happen to the contents of the Oxygen!";
		if (temp <= 32)
			cout << "\nAt this temperature Water will freeze!";
		else if (temp >= 212)
			cout << "\nAt this temperature Water will boil!";
		else
			cout << "\nAt this temperature nothing will happen to the contents of the Water!";
		cout << "\n\nWould you like to test another temperature?";
		cout << "\nEnter y for yes or n for no: ";
		cin >> Again;
		if (tolower(Again) == 'y')
			system("cls");
	} while (tolower(Again) == 'y'); //allows program to repeat as
										//long as user would like to
}