#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    char ch = 65;
    int row = 1;
    while (row <= n){
        int colm = 1;
        while (colm <= n){
            cout << ch;
            colm = colm + 1;  
            ch = ch +1;    
        }
        cout << endl;
        row = row + 1;
    }
}