/*
    Pascal's Triangle Progrma
    As a submission to https://code.golf/pascals-triangle#cpp

    Created by: amd
*/

// ---------------------------------
// Preprocessor Declaration

#define MAX_NUM 20

#include <iostream>

// ---------------------------------
// Progran  Entry Point
int main(int argc, char *argv[])
{
    
    // ***********************
    // Variable Declaration
    using namespace std;

    int i;
    int j;

    int num[MAX_NUM][MAX_NUM];

    // ***********************
    // Actual Procedure

    // looping for display horizontal
    i=0;
    while(i<MAX_NUM)
    {
        // crating and placing values to variables 

        // for 1st display value
        if(i==0)
        {
            num[i][0]=1;
        };

        // for 2nd display value
        if(i==1)
        {
            num[i][0]=1;
            num[i][1]=1;
        };

        // suceeding display value
        if(i>=1)
        {
            num[i][0]=1;

            j=1;
            while(j<i)
            {
                num[i][j]=(num[i-1][j-1])+(num[i-1][j]);
                j++; 
            };

            // for last display value
            num[i][j]=1;
        };

        // looping for vertical print to screen
        j=0;
        while(j<=i)
        {
            cout<<num[i][j]<<" ";
            j++;
        };

        cout<<endl;

        i++;
    };

    return 0;
    
};
