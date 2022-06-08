//HomeWork 5

#include <iostream>
using namespace std;

int main()
{
	//Task 5.1
	cout << "Task 5.1\n\n";
	double distance, time, speed;
	cout << "Enter distance (km): ";
	cin >> distance;
	cout << "Enter time (h): ";
	cin >> time;
	cout << "Enter speed (km/h): ";
	cin >> speed;
	double trueSpeed = distance / time;
	if (speed <= trueSpeed)
		cout << "Will have time.\n";
	else
		cout << "Not in time.\n";

	//Task 5.2
	cout << "\n\nTask 5.2\n\n";
	int A, B, C, D;
	cout << "Enter four numbers: ";
	cin >> A >> B >> C >> D;
	if (A > B && A > C && A > D)
		cout << "max = " << A;
	else
		if (B > A && B > C && B > D)
			cout << "max = " << B;
			if (C > A && C > B && C > D)
				cout << "max = " << C;
				if (D > A && D > B && D > C)
					cout << "max = " << D;

	//Task 5.3
	cout << "\n\n\nTask 5.3\n\n";
	double distance_AB, distance_BC, weight_A, weight_B, time_B;
	cout << "Enter the distance from A to B (km): ";
	cin >> distance_AB;
	cout << "Enter the distance fron B to C (km): ";
	cin >> distance_BC;
	cout << "Enter the initial load (kg): ";
	cin >> weight_A;
	cout << "Enter the amount of dropped cargo (kg): ";
	cin >> weight_B;
	cout << "Stop time at B (min): ";
	cin >> time_B;
	
	double speed_AB = weight_A;
	if (weight_A >= 15)
		speed_AB = 1;
	else
		if (8 <= weight_A <= 14)
			speed_AB = 2;
			if (weight_A < 8)
				speed_AB = 3;
	double time_AB = (distance_AB / speed_AB) * 60;
	
	double speed_BC = weight_A - weight_B;
	if ((weight_A - weight_B) >= 15)
		speed_BC = 1;
	else
		if (8 <= (weight_A - weight_B) <= 14)
			speed_BC = 2;
			if ((weight_A - weight_B) < 8)
				speed_BC = 3;
	double time_BC = (distance_BC / speed_BC) * 60;
	
	double time_ABC = time_AB + time_BC + time_B;
	
	int H = time_ABC / 60;
	int M = time_ABC - H * 60; 
	cout << H << ":" << M << "\n";

	return 0;
}
