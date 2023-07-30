#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float input[8], mean, standard_deviation;
	int scan;	
	cout<< "Enter 8 numbers(Separated by Blanks): --> ";
	cin>>input[0]>> input[1]>> input[2]>> input[3]>> input[4]>> input[5]>> input[6]>> input[7];	
	mean = (input[0] + input[1] + input[2] + input[3] + input[4] + input[5] + input[6] + input[7]) / 8;	
	cout<< "\nMean is Equal to: "<< mean <<"\n" <<endl;	
	for(scan = 0; scan < 8; scan++)
	{
		standard_deviation = standard_deviation + ((input[scan] - mean) * (input[scan] - mean));
	}	
	standard_deviation = standard_deviation / 8;
	standard_deviation = sqrt(standard_deviation);
	cout<< "Standard deviation is Equal to: "<< standard_deviation <<"\n" <<endl;
	cout<<"-------------------------------------"<<endl;	
	cout << "Table Index || \tItem || Difference"<<endl;
	cout<<"-------------------------------------"<<endl;	
	for(scan = 0; scan < 8; scan++)
	{
		cout<< scan<< "\t\t"<< input[scan]<<"\t\t" << input[scan] - mean <<endl;
	}	
	system("pause");
}

