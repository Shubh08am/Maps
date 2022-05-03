#include <bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){ 
   for(auto&pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
// -> nlog(n) time taken as insertion and access takes log(n) time and loop is of n . thus, to put n valuees t.c is nlogn.


    }
}
int main(){

map<int,string> m;

m[1] = "abs";  //  --> o(logn) t.c
m[5]="cdc";
m[3]="ghg";
m[5] = "fksfdk" ;  // -> same key will not be inserted it will update the already existing one 

print(m);
/*
PS C:\Users\DELL\Desktop\C++> cd "c:\Users\DELL\Desktop\C++\" ; if ($?) { g++ maps_2.cpp -o maps_2 } ; if ($?) { .\maps_2 }
1 abs
3 ghg
5 fksfdk
*/
//m.insert({4,"afg"}) ;
//m.insert(make_pair(8,"fjhdj"));

return 0;
}