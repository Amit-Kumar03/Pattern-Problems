#include<iostream>
using namespace std;
     int main()
{
    int n;
    cin>>n;

    int row=1;
    int count=1;
    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space-=1;
        }
        int col=1;
        while (col<=row)
        {
            cout<<count;
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
        
        
    }

//     int n=4;
//     int row=1;
//     int start=1;
// while(row<=n){
//     int space=n-row;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     int col=1;
//     while(col<=row){
//         cout<<start;
//         col=col+1;
//         start=start+1;
//     }
//     cout<<endl;
//     row=row+1;
//     }

    
}
//    1     
//    23     
//   456     
//  78910    
// 1112131415