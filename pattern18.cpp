#include<iostream>
using namespace std;
     int main()
{
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        //space print  
        int  space= n-row;
        while (space)
        {
            cout<<" ";
            space-=1;
        }
        //print stars
        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
        

        
    }
    
}

//    *
//   **
//  ***
// ****