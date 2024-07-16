#include <bits/stdc++.h>
using namespace std;

//pair contains only two elements & its stored in utility lib.

void explainPair(){
    
    pair<string ,int> p = {"Ayush",2};
    cout<<p.first<<"  "<<p.second << endl;
    //output: Ayush 2
    
    pair<int, pair<int,int>> k = {1,{2,3}};
    cout<<k.first<<"  "<<k.second.first << endl;
    //output: 1  2
    
    
    //treating pair as a datatype
    //this means that each element of arr[] is a pair<int,int> type
    pair<int,int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
    cout<< arr[1].second;
    //Output: 4
    
};

int main()
{
    explainPair();

    return 0;
}
