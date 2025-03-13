#define MAX_NUM 20

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    using namespace std;

    int i;
    int j;
    int k;

    int num[MAX_NUM][MAX_NUM];

    i=0;
    while(i<MAX_NUM)
    {
        if(i==0)
        {
            num[i][0]=1;
        };

        if(i==1)
        {
            num[i][0]=1;
            num[i][1]=1;
        };

        if(i>=1)
        {
            num[i][0]=1;

            j=1;
            while(j<i)
            {
                num[i][j]=(num[i-1][j-1])+(num[i-1][j]);
                j++; 
            };

            num[i][j]=1;
        };

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
