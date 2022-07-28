#include <iostream>

using namespace std;
int main(){
//     int n=4;
//     int row=1;
// while(row<=n){
//     int space=row-1;
//     while(space){
//         cout<<" ";
//         space=space-1;
//     }
//     int col=row;
//     while(col<=n){
//         cout<<"*";
//         col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//     }

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space =row-1;
        while (space)
        {
            cout<<" ";
            space-=1;
        }
        int col=1;
        while (col<=n-row+1)
        {
            cout<<"*";
            col+=1;

        }
        cout<<endl;
        row+=1;
        
        

    }
    

}
// ****
//  ***
//   **
//    *