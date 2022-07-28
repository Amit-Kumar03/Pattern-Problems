#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
    char ch = 'A';
    while (row <= n){
        int colm = 1;
        while (colm <= row){
            cout << ch;
            colm = colm + 1;  
            ch = ch +1;    
        }
        cout << endl;
        row = row + 1;
    }
}
// A
// BC
// DEF
// GHIJ
