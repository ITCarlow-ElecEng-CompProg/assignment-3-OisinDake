//Standard Deviation Calculator
//Lab 3
//Oisin Dake

#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]);//store data

int main()
{
    int i;
    float data[10];

    cout << "Enter 10 elements: ";// to get inputs

    for(i = 0; i < 10; ++i)//to get and store data 10 times
    {
        cin >> data[i];
    }

    cout << endl << "Standard Deviation = " << calculateSD(data);//display result

    return 0;
}


float calculateSD(float data[])//calculations outside main function
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < 10; ++i)
    {
        sum += data[i];//to add all inputs
    }

    mean = sum / 10;//to get average

    for(i = 0; i < 10; ++i)
    {
        standardDeviation += pow(data[i] - mean, 2);//to get standard deviation
    }

    return sqrt(standardDeviation / 10);//to return reslut to main function
}
