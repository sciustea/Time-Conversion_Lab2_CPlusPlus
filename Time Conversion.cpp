/* Stefana Ciustea
Lab 2 - Time Conversion

This program takes an input in the form of an integer representing seconds,
and converts those seconds to days, hours, minutes, and seconds.
For example: 3,661 second(s) is equivalent to 0 day(s), 1 hour(s), 1 minute(s), and 1 second(s) */

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int days, hours, minutes, seconds;

	cin >> seconds;

	minutes = seconds / 60;
	hours = minutes / 60;
	days = hours / 24;

	cout << seconds << "second(s) is equivalent to " << int(days) << " day(s), " << int(hours % 24) << " hour(s), " << int(minutes % 60) << " minute(s), and " << int(seconds % 60) << " second(s)." << endl;
}