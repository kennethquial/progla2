#include <iostream>

using namespace std;

int main()
{
	int accu;
	char binaryString[] = {"1010010010"};
	 
	for(int i = 0;i < 10; i++)
	{
		if(binaryString[i] == '1')
		{
			accu = accu + 1;
		}
	
	}
	cout << "There are " << accu << " number of 1 in the array";



return 0;
}
