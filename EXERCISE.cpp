
#include <iostream>

using namespace std;

int const SCND_HOUR = 3600, SCND_MINUTE = 60;

int main()
{
	int sec,x,y,z;
	
	cout << "Input the the total time in seconds : " ;
	cin >> sec;
	
	
	x = sec/SCND_HOUR;
	y = (sec%3600)/SCND_MINUTE;
	z =sec%SCND_MINUTE;
	
	cout << sec << " seconds are equal to " << x << " hours, " << y << " minutes and " << z << " seconds." << endl;
	
	
	
}
