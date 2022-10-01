#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int i;
    int n= 5;
    
    int min = INT_MAX;
    int arr[n] ={4,56,55,34,23,67};
    
        int secondmin =INT_MAX;
        for (i=0; i<n; i++){
            if(arr[i]< min){
                min = secondmin;
                min = arr[i];


            }
            for (i=0; i<n; i++){
                if( arr[i]<secondmin && arr[i]!=min){
                    secondmin= arr[i];
                }
            }
            cout<<secondmin;
            
        }
    }


    





    
