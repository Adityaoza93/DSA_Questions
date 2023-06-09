#include <iostream>
using namespace std;

int fact(int n){
    int val=1 ;
    for(int i=1;i<=n;i++){
        val=val*i;
    }
    return val;
}
int rcc(int r,int c){
    r=r-1;
    c=c-1;
    int value;
    value=fact(r)/(fact(c)*fact(r-c));
    return value;
}

int main() {
     int rows=1;
     int cols=1;

    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter number of cols: ";
    cin >> cols;

    for(int i = 1; i <= rows; i++) {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  "<<" ";

        for(int j = 1; j <= i; j++) {
            cout<<rcc(i,j)<<"     ";
        }
        cout << endl;
    }

    return 0;
}
