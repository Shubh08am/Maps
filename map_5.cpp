#include <bits/stdc++.h>
using namespace std;
 // UNORDERED MAP

 /* O(1) T.C , UNSORTED ORDER STORED and printed randomly*/

 void print (unordered_map<int,string>&m)
 { 
     for (auto &pr:m)
     {
         cout<<pr.first<<" "<<pr.second<<endl;
     }
 }
 int main(){ 
 unordered_map<int,string> m;

m[1] = "abs";  //  --> o(1) t.c
m[5]="cdc";
m[3]="ghg";
m[5] = "fksfdk" ;  // -> same key will not be inserted it will update the already existing one 

print(m);

return 0;
}