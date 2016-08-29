#include <iostream>

using namespace std;

int numTeams;
int days;
int costs[1000];

int main() {
	cout << fixed;
	cout.precision(10);
	cout.sync_with_stdio(false);
	cin.sync_with_stdio(false);

	int numTests;
	cin >> numTests;

	while (numTests--) {
		cin >> days >> numTeams;
		for (int i = 0; i != days; ++i) {
			cin >> costs[i];
		}

		double min = 9876543210;
		for (int i = 0; i != days; ++i) {
			int dur = 0;
			int sum = 0;
			for (int j = i; j != days; ++j) {
				sum += costs[j];
				++dur;
				double avg = sum / (double)dur;
				if (avg < min && dur >= numTeams) {
					min = avg;
				}
			}
		}

		cout << min << endl;
	}
}
