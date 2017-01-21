#include <iostream>
using namespace std;

int main()
{
	int ctr=1,num=1;
	while(ctr == 1)
	{
		if((num%2 == 0)&&(num%8 == 0)&&(num%13 == 0)&&(num%15 == 0))
		{
			cout << num;
			ctr = 0;
		}
		num++;
	}
	return 0;
}
