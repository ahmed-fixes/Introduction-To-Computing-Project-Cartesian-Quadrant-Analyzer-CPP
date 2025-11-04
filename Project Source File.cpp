#include <iostream>
using namespace std;
int main()
{
	const int size = 5;
	// taking 5 arrays because it is mentioned in the instructions 
	int xCoordinates[size];
	int yCoordinates[size];
	char quadrantResults[size];
	int cartesianProductX[size];
	int cartesianProductY[size];
	int totalpoints;

	cout << "Enter the number of points (Maximum 5 or upto 5 points): ";
	cin >> totalpoints;

	if (totalpoints < 1 || totalpoints > size)
	{
		cout << "Invalid number of points. Please enter a value between 1 and 5 ( Maximum 5 )." << endl;
	
	}

	else
	{

		for (int i = 0; i < totalpoints; i++)
		{
			cout << "Enter x coordinate of point " << i + 1 << ": ";
			cin >> xCoordinates[i];

			cout << "Enter y coordinate of point " << i + 1 << ": ";
			cin >> yCoordinates[i];
		}
		
			cout << endl << "Results:" << endl;
		



		for (int i = 0; i < totalpoints; i++)
		{
			if (xCoordinates[i] > 0 && yCoordinates[i] > 0)
			{
				quadrantResults[i] = '1';
			}
			else if (xCoordinates[i] < 0 && yCoordinates[i] > 0)
			{
				quadrantResults[i] = '2';
			}
			else if (xCoordinates[i] < 0 && yCoordinates[i] < 0)
			{
				quadrantResults[i] = '3';
			}
			else if (xCoordinates[i] > 0 && yCoordinates[i] < 0)
			{
				quadrantResults[i] = '4';
			}
			else if (xCoordinates[i] == 0 && yCoordinates[i] != 0)
			{
				quadrantResults[i] = 'Y';
			}
			else if (xCoordinates[i] != 0 && yCoordinates[i] == 0)
			{
				quadrantResults[i] = 'X';
			}
			else
			{
				quadrantResults[i] = 'O';
			}

			// Calculate the Cartesian product of the coordinates
			cartesianProductX[i] = xCoordinates[i] * yCoordinates[i];
			cartesianProductY[i] = yCoordinates[i] * xCoordinates[i];
		}

		for (int i = 0; i < totalpoints; i++)
		{
			cout << "Point " << i + 1 << ": (" << xCoordinates[i] << ", " << yCoordinates[i] << ")" << endl;
			cout << "Quadrant: ";
			if (quadrantResults[i] == '1')
			{
				cout << "Quadrant I";
			}
			else if (quadrantResults[i] == '2')
			{
				cout << "Quadrant II";
			}
			else if (quadrantResults[i] == '3')
			{
				cout << "Quadrant III";
			}
			else if (quadrantResults[i] == '4')
			{
				cout << "Quadrant IV";
			}
			else if (quadrantResults[i] == 'X')
			{
				cout << "On the x-axis";
			}
			else if (quadrantResults[i] == 'Y')
			{
				cout << "On the y-axis";
			}
			else
			{
				cout << "At the origin";
			}

			cout << ", Cartesian product of x and y : (" << cartesianProductX[i] << "," << cartesianProductY[i] << ")" << endl;
		}
	}
	system("pause");
	return 0;
} 