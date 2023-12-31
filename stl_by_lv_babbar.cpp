#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
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

      //# Doubly ended Queue or Deque (Dynamic)
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
      // Last in first out
    stack<string> s;
    s.push("kumari");
    s.push("Akansha");
    s.push("Hello");
    cout<<"Top Most Element "<<s.top()<<endl;
    while(!s.empty()){
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<endl;
    // cout<<"Top Element after pop "<<s.top()<<endl;
    cout<<"Size "<<s.size()<<endl;
    cout<<"Either empty or not "<<s.empty()<<endl;

    // #Queue
     // First in First out
    queue<string> q;
    q.push("Hey");
    q.push("Beatuiful");
    q.push("people");
    while(!q.empty()){
      cout<<q.front()<<" ";
      q.pop();
    }cout<<endl;
    
    // #Priority Queue, It's by default Max heap
    // where first element always and must be Max
   
   // Max heap
   priority_queue<int> maxi;
   // Min heap
   priority_queue<int, vector<int>, greater<int>> mini;
   maxi.push(4);
   maxi.push(8);
   maxi.push(2);
   maxi.push(5);
   while(!maxi.empty()){
       cout<<maxi.top()<<" ";
       maxi.pop();
   }cout<<endl;
    
    mini.push(7);
    mini.push(2);
    mini.push(5);
    mini.push(3);
    int n=mini.size(); // not directly writtig size in loop coz after every pop it's size will decrease and we will not able to get all 4 outputs
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    cout<<"Is Mini Empty: "<< mini.empty()<<endl; // as after every pop it got empty
    
    // #Set
     // set always store unique element
     // Once entered can't be modified either delete or insert
     // implementation behind the scene by using BST (Binary search tree)
     // Always returned in sorted order
     // set slower than unorderd set(not in sorted)
     set<int> swet;
     swet.insert(3);  // (insert, find, erase and count) comlexcity O(logn)
     swet.insert(4);
     swet.insert(9);  // (size, begin, end, empty) complexcity O(1)
     swet.insert(2);
     swet.insert(2);
     swet.insert(3);
     swet.insert(9);
     for(int i:swet){
         cout<<i<<" ";
     }cout<<endl;
     
    set<int>::iterator it =swet.begin();
    it++;
    swet.erase(it);
     for(int i:swet){
         cout<<i<<" ";
     }cout<<endl;
     cout<<"Is -5 present?? : "<<swet.count(-5)<<endl;
    set<int>::iterator itr= swet.find(4);
    cout<<"is 4 present : " <<*it<<endl;

    // #Map
      // return in sorted order
      //all key point towards unique and single value
    map<int, string> m;
    m[1]={"Helloo"};
    m[13]={"Yes"};
    m[4]={"got you"};
    m.insert({10,"bheem"});

    for(auto i:m){
      cout<<i.first<<" "<<i.second<<" ";  // first-> key, second-> value
    }cout<<endl;
    for(auto l:m){
      cout<<l.second<<" ";
    }cout<<endl;

  cout<<"To check 13 present or not: "<<m.count(13)<<endl;
  m.erase(13); // in map u just need to give the value of key and it will erase all entire
  // insert, erase, find, count, all complexcity O(log N)
  // for unordered map , search complexcity O(1)
  

  // #Algorithms
    // For Binary serch, vector must be in sorted form
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(7);
    cout<<"Is 6 present in vector "<<binary_search(v2.begin(),v2.end(),6)<<endl;

      // Upper bound and lower bound
    cout<<"Lower bound: "<< lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; // to get index of given value
    cout<<"Upper bound: "<< upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

      // Max and Min
    int jk=7;
    int ul=4;
    cout<<"Max is: "<<max(jk,ul)<<" "<<"Min is: "<<min(jk,ul)<<endl;
      // Swap
    swap(jk,ul);
    cout<<"jk-> "<<jk<<" ul-> "<<ul<<endl;
      // Reverse
    string nop="abcd";
    cout<<nop<<endl<<"After Reverse "<<endl;
    reverse(nop.begin(),nop.end());
    cout<<nop<<endl;
      // Rotate vector
    cout<<"Before rotate vector"<<endl;
    for(int i:v2){
      cout<<i<<" ";
    }cout<<endl;

    rotate(v2.begin(),v2.begin()+1,v2.end());
    cout<<"After rotate: "<<endl;

    for(int i:v2){
      cout<<i<<" ";
    }cout<<endl;

      // Sort
    sort(v2.begin(),v2.end());
    
    return 0;
}