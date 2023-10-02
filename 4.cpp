#include <iostream>
using namespace std;

int main()
{
    int column,rows;

    cin>>rows>>column;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(j == 0 || j == column-1 || i == 0 || i == rows-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}