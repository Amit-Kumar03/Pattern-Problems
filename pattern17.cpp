#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while (row <= n){
        char start = 'A'+row-1;
        int colm = 1;
        while (colm <= n){
            cout << start;
            colm = colm + 1;  
            start = start +1;    
        }
        cout << endl;
        row = row + 1;
    }
}
// ABCD
// BCDE
// CDEF
// DEFG