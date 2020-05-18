#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
double man(int x,int y);
double euc(int x,int y);
double mink(int x, int y, int p);
const int s=8;
double M[s][s]={{3.5,2,5,3,0,0,5,3},
                {2,3.5,1,4,4,4.5,2,0},
                {0,4,1,4.5,1,4,0,0},
                {4.5,0,3,0,4,5,3,5},
                {5,2,5,3,0,5,5,4},
                {1.5,3.5,1,4.5,0,4.5,4,2.5},
                {2.5,0,0,4,4,4,5,3},
                {2,3,0,2,1,4,0,0}};
int main()
{
    cout <<"Hailey y Veronica (Manhatan) = "<< man(4,7) << endl;
    cout <<"Hailey y Jordyn (Euclidian) = "<< euc(4,5) << endl;
    cout <<"Ange y Bil (Minhowsky r=1) = "<< mink(0,1,1) << endl;
    cout <<"Ange y Bil (Minhowsky r=2) = "<< mink(0,1,2) << endl;
    return 0;
}
double man(int x, int y){
    double r=0;
    for(int i=0;i<s;i++){
        if(M[i][x]!=0 && M[i][y]!=0){
            r+=abs(M[i][x] - M[i][y]);
        }
    }
    return r;
}
double euc(int x, int y){
    double r=0;
    for(int i=0;i<s;i++){
        if(M[i][x]!=0 && M[i][y]!=0){
            r+=(M[i][x] - M[i][y])*(M[i][x] - M[i][y]);
        }
    }
    r=sqrt(r);
    return r;
}
double mink(int x, int y, int p){
    double r=0;
    for(int i=0;i<s;i++){
        if(M[i][x]!=0 && M[i][y]!=0){
            r+=pow(abs(M[i][x] - M[i][y]),p);
        }
    }
    r=pow(r,1/double(p));
    return r;
}
