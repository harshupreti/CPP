#include <iostream>
using namespace std;

const int N = 50;

int main()
{
    int num;
    int array[N];

    cout<<"Enter a number: ";
    cin>>num;

    int i = 0;

    while(num > 0)
    {
        array[i] = num % 10;
        num /= 10;
        i++;
    }

    cout<<"Reverse of number is: ";

    for(int j = 0; j < i; j++)
    {
        cout<<array[j];
    }

    return 0;
}