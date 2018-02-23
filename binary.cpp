#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
   ofstream out {"abc.bin"};
	
	if(out)
	{//checks to see if the file opens
		out << a  << " "<< b  << " "<< c << endl;
	}
		else{
			cout <<" could not open" << endl;
		}

 
   return 0;
}
