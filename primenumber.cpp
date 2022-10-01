#include <iostream>
using namespace std;

int main(){

    int n, i, m =0;
    cin>>n;
    for (i=2; i<=n; i++){
        if(n%i==0){
            m++; 

            }

        }
        if(m==2)
            cout<<"yes"<<endl;
        else
                cout<<"no"<<endl;
                return 0;
            
            }