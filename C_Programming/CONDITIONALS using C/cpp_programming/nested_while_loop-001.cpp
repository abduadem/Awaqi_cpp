#include<iostream>
using namespace std;

int main()
{
     //nested loop using While loops
     int n=1;
     int m=1;
    cout<<"While loos for nested loops"<<"\n";

    while(n<10)
    {
        while(m<10)
        {
            cout<<m;
            m++;
        }
        cout<<n<<"\n";
        n++;
    }

    return 0;
}