// Code by Akansha
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
using namespace std;
int main(){
      // # Array (static)
    int basic[3]={2,4,6};
    array<int,4> a = {5,7,9,11};

     // int Size = a.size();
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    cout<<endl;
    cout<<"Element at 2nd index "<<a.at(2)<<endl; // OR
    cout<<a[2]<<endl;  
    cout<<"Empty or Not "<<a.empty()<<endl;
    cout<<"Front Element "<<a.front()<<endl;
    cout<<"Back Element "<<a.back()<<endl;
   
      // # Vector (Dynamic)
    vector<char> v;
    cout<<v.capacity()<<endl;
    v.push_back('a');
    cout<<v.capacity()<<endl;
    v.push_back('b');
    cout<<v.capacity()<<endl;
    v.push_back('c');   // as the capacity always goes Double 
    v.emplace_back('y');
    cout<<"Capacity of final vector "<<v.capacity()<<endl;
    cout<<"Size of vector "<<v.size()<<endl;
    
    cout<<"Element at 3rd position"<<v.at(2);
    cout<<"Front Element "<<v.front()<<endl;
    
    for(char i:v){  // Can use for vector and array
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Back Element "<<v.back()<<endl;
    v.pop_back(); // inbuild function
     cout<<"After Pop "<<endl;
    for(char i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before Clear "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear "<<v.size()<<endl;

    vector<int> b(5,1); // size equals to 5 starting from 1
    cout<<"Printing b "<<endl;

    vector<int> u(5); // This will declare 5 times 0 or any garbage value
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;


      // creating new vector and copying all element of previous vector
    vector<int> c(b);
    cout<<"Printing c "<<endl;
    for(int i:c){
        cout<<i<<" ";
    }cout<<endl;

      //# Doubly ende Queue or Deque (Dynamic)
        // here the insertion and deletion can carry out both from back and front

    deque<int> de;
    de.push_back(23);
    de.push_front(24);
     // every functions like; clear, pop_back, empty, front, back, size, NO cpacity
    cout<<"Current Size "<<de.size()<<endl;
    de.erase(de.begin(),de.begin()+1); // for erase function we need to specify from where to till where we want delete
    cout<<"Now it's Size "<<de.size()<<endl;

      //# Pair
      pair<int, int> p = {3,4};
      cout<<p.first<<" "<<p.second<<endl;
      // Double pair
      pair<int, pair<int,int>> ps ={5,{6,7}};
      cout<<ps.second.second<<" "<<ps.first<<" "<<ps.second.first<<endl;
      // Array
      pair<int, int> arr[]= {{2,3},{4,5},{6,7},{8,9}};
      cout<<arr[1].second<<endl;

      //# List
    list<int> l;
    // Kind of doubly linked list with 2 pointers, front and back
    l.push_back(34);
    l.push_front(23);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl; //begin, end, empty,back O(1) // for erase O(n)
    //copy , intalising with"no." till here.
    l.erase(l.begin());

    // #Stack
    stack<string> s;
    s.push("kumari");
    s.push("Akansha");
    s.push("Hello");
    cout<<"Top Most Element "<<s.top()<<endl;
    while(!s.empty()){
      cout<<s.top()<<" ";
      s.pop();
    }cout<<endl;
    s.pop();
    cout<<"Top Element after pop "<<s.top()<<endl;
    cout<<"Size "<<s.size()<<endl;
    cout<<"Either empty or not "<<s.empty()<<endl;

    return 0;
}