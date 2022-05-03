#include <bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){ 
   for(auto&pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
// -> nlog(n) time taken as insertion and access takes log(n) time and loop is of n . thus, to put n valuees t.c is nlogn

    }
}
int main(){

map<int,string> m;
// functions of maps

m[1] = "abs";  //  --> o(logn) t.c
m[5]="cdc";
m[3]="ghg";
 //////////  1st FIND
/*
m.find(3) ; // returns iterator
auto it= m.find(7) ;  //"NO VALUE" , rerturns end iterator.

//auto it = m.find(3);  // -> o(logn) t,c   3 ghg output
if(it == m.end() ) // i.e that key is not present in map
{
    cout<<"NO VALUE";
}
else 
{
    cout<<(*it).first << " "<<(*it).second<<endl;
}
*/

 //////////  2nd ERASE
// key given
m.erase(3);
 print(m);


 // iterator given -> the pair to which it points get deleted.
auto it = m.find(5);
 m.erase(it);

auto it = m.find(7); // -> give error as 7 is not there and it points to iterator next to end iterator and there no value is there.
// therefore keep a check on value.


if(it!=m.end())
{
    // do erase operation than
}
 m.erase(it);


 //////////  3rd CLEAR
 m.clear( ) //-> it clear the map
return 0;
}