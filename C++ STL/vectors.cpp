#include <bits/stdc++.h>
using namespace std;


void explainVector(){
    
    vector<int> v; //'int' is datatype of vector v which is empty container {} till now.
    v.push_back(1);// pushes '1' in v
    v.emplace_back(2);// emplace_back is same as push_back but its faster.
    
    
    //now creating vector of 'pair' datatype.
    vector<pair<int,int>>vec ;
    vec.push_back({1,2})//In push_back we have give input in curly braces if its pair datatype vector.
    vec.emplace_back(3,4)//emplace_back automatically assumes that its pair .
    
    
    vector<int> v(3, 100);// this declares v of size 3 having 3 instances of 100,i.e, {100,100,100}
    vector<int> v(3)//this declares v of size 3 having 3 instances of 0 or garbage(depends on compiler),i.e, {0,0,0}
    v.emplace_back(2)//this increases size of v dynamically to six adiing 2 to it.
    
    
    vector<int> v1(5,20)// {20,20,20,20,20}
    vector<int> v2(v1)//this creates copy of v1 but different vector v2:{20,20,20,20,20}
    
    //Accessing elements of vector
    
    //First way : same as array
    cout<<v[2]<<"or"<<v.at[2]<<"Both gives same output"<<endl;
    cout<<v.back();//just prints the last element
    // second way is using iterator-->which just points to the memory where the element lies
    //functions are : begin(),end(),rend(),rbegin() where r--> reverse.
    vector<int>::iterator it = v.begin() // vector<int>::iterator is syntax and 'it' is just name for iterator
    //begin points at first element's address.'it' has add. of 10
    // Let v={10,20,30,40}
    cout<<*(it);//*(it) gives value stored at address in 'it'.
    it++;//now 'it' points at add. of 20.
    it = it + 2 ;//'it' now points to add. of 40
    
    vector<int>::iterator it = v.end()//'it' points to address just after last element,i.e,40
    it--;//now 'it' points to add.of last element 40
    
    vector<int>::iterator it = v.rend()//'it' points to address just before first element,i.e,10
    it++;//now 'it' points to add.of  first element 10
    
    vector<int>::iterator it = v.rbegin()//'it' points to the last element 40.
    it++;//now 'it' points to add. of second last element 30
    
    //rend() & rbegin() are never used.
    //prints entire vector
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    // STl has 'auto' for shortcut.eg auto a=5 ,means auto tells sytem that a is int.we don't have to mention it explicitly.
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    //here 'auto' is int and it prints entire vector as it knows that it has to iterate over vector v
    for(auto it : v){
        cout<<it<<" ";
    }
    
    //deletion
    v.erase(v.begin() + 1);//it deletes adress at which  20 and vector it reshuffled to {10,30,40}
    
    //deleting multiple addresses in one go
    v.erase(v.begin()+1,v.begin()+3);//we have to pass add. of first elemnt we want to delete and add. next to the element we want to delete till.
    //{10,40} is new vector...[start,end) as end address is not included(as not deleted )
    
    //Insertion
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1, 2, 10);//{300,10,10,100,100}
    //Inserting a vectpr into another vector
    vector<int> copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    //{10,20}
    cout<< v.size(); //2
    v.pop_back();//{10}, erased last element
    
    //v1 --> {10,20}
    //v2 --> {30,40}
    v1.swap(v2);//v1 --> {10,20},v1 --> {30,40}
    v.clear();//erases the entire vector into empty vector {}
    cout<< v.empty();//If zero elements it return true else false.    
};


int main()
{
  explainVector();
  
    return 0;
}
