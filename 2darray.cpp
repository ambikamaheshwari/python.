#include <iostream>
using namespace std;

int main(){
    int data[3][2]={
        {2,4},
        {4,5},
        {6,7}
    };
    for(int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout<<data[i][j]<<endl;
        }
    }
    return 0;
}