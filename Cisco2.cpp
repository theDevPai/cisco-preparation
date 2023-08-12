//http://www.geeksforgeeks.org/count-set-bits-in-an-integer/
#include<iostream>
using namespace std;

unsigned int binary_count(unsigned int n)
{
    unsigned int count=0;
    while(n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    unsigned int n;
    cout<<"Enter the number to check for binary 1s:";
    cin>>n;

    cout<<"The number of 1's in the given numbers binary equivalent is:"<<binary_count(n);

    return 0;
}