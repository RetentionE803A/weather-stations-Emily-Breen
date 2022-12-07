// Name: Emily Breen
// Login: C00288668
// Date: 07/12/2022
// Approximate time taken: 20mins (maybe)
// Actual time taken: 50 mins
//----------------------------------------------------------------------------------------------------------------------
// Program: to output the number of stations, the temp and the highest temp between them - apologies I couldn't get to Q2 
// ---------------------------------------------------------------------------------------------------------------------
// Known Bugs: 
// None

#include <iostream>
#include <string>

void stationtemp(int t_station); // Function declaration for question part 1


int main()
{
	// Local variable to main
	int stationNo = 0;
	
	// Ask the user for input

	std::cout << "Enter the number of stations: ";
	std::cin >> stationNo;
		
	// Function call  
	stationtemp(stationNo);


	system("Pause");
	return 0;

}

void stationtemp(int t_station) // Function definition for question part 1
{
	//Local variables to Function - 
	int count = 0;
	int highestTemp = 0;
	int temp = 0;
	std::string station_Name = " ";
	std::string highest_Temp_Station_Name = " ";
	
  
    
	
	// For loop to compare the temps in each station to determine the highest temp.

	for (count = 0; count < t_station; count++)
	{
		std::cout << "Enter station name: ";

		std::cin >> station_Name;
	

		std::cout << "Enter the Temperature at this station: ";
		std::cin >> temp;

		if (temp > highestTemp)
		{
			highestTemp = temp;
			highest_Temp_Station_Name = station_Name;
		}

	}
	
	std::cout << highest_Temp_Station_Name << " had the highest reported temperature " << " with " << highestTemp << " degrees" << std::endl;


} // End functiom
