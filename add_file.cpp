#include <stdio.h>
#include <iostream>

using namespace std;
main()

{
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i,sum = 0;
    int numberArray[5];

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    for(i = 0; i < 5; i++)
    {
    	sum = numberArray[i] + sum;
    }

    for (i = 0; i < 5; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
    cout << sum;

}
