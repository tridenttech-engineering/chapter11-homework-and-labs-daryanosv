//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//funct porototypes
double getAverage(double time[], int numElements);
double getLowest(double time[], int numElements);

int main()
{
   double finnishingTime[5]={0.0};
   double averageTime=0.0;
   double lowestTime=0.0;

    //input
    for(int x=0;x<5;x++)
        {
            cout<<"Enter final time for run"<<x+1<<": ";
            cin>>finnishingTime[x];
        
        }
    averageTime=getAverage(finnishingTime,5);
    lowestTime=getLowest(finnishingTime,5);

    cout<<fixed<<setprecision(1)<<endl;
    cout<<"The average time is "<<averageTime<<endl;
    cout<<"The fastest time is "<<lowestTime<<endl;
    return 0;
}//end of main function


//funct definitions
double getAverage(double time[], int numElements)
{
    double total=0.0;

    for(int x=0;x<numElements;x++)
        total+=time[x];
    return total/numElements;
}

double getLowest(double time[], int numElements)
{
    double lowest=time[0];
    for(int x=0;x<numElements;x++)
        if(time[x]<lowest)
            lowest=time[x];
    return lowest;
}
