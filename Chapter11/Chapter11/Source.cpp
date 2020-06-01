#include <iostream>
#include <iomanip>
using namespace std;


int highLow() {

	int scores[10];

	int high = 0;
	int low = 100;

	for (int i = 0; i < 10; i++) {
		cout << "Enter a score of between 0 and 100 >>\n";
		cin >> scores[i];
		if (scores[i] > high) { high = scores[i]; }
		else if (scores[i] < low) { low = scores[i]; }
	}

	cout << "Lowest: " << low << "\n Highest: " << high << "\n";

	cout << "All of the scores were: \n";
	for (int j = 0; j < size(scores); j++) {
		cout << scores[j] << "\n";
	}
	cout << "Reverse Order: \n";
	for (int k = 9; k >= 0; k--) {
		cout << scores[k] << "\n";
	}

	return 0;
}

int intermediate23() {

	int points[5] = { 62, 75, 100, 83, 85 };
	char grades[5] = { 'D', 'C', 'A', 'B', 'B' };

	for (int i = 0; i < size(points); i++) {
		cout << points[i] << " -> " << grades[i] << "\n";
	}


	return 0;
}
int intermediate26() {

	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	double increase = 0.0;

	cout << "Enter increase percentage (for example, enter 0.15 for 15%): ";
	cin >> increase;


	for (int i = 0; i < size(prices); i++) {
		prices[i] = prices[i] + (prices[i] * increase);
		cout << prices[i] << "\n";
	}
	return 0;

}
int advanced28() {

	int scores[10] = { 66, 100, 85, 75, 2, 93, 78, 90, 98, 93 };

	int searchScore = 0;
	int total = 0;

	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;

	while (searchScore >= 0)
	{
		for (int i = 0; i < size(scores); i++) {
			if (scores[i] == searchScore) {
				total++;
			}
		}
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << "\n\n";
		total = 0;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}
	return 0;
}