#include <bits/stdc++.h>
using namespace std;
int main(){

// sorted order stored in map i.e ordered map
// key and value datatype
map<int,string> m;
// inserting values in maps
m[1] = "abs";  //  --> o(logn) t.c
m[5]="cdc";
m[3]="ghg";
m[6] ; // if int type value than by default 0 will be inserted , if string empty string is inserted
/*or or or */
m.insert({4,"afg"}) ;
m.insert(make_pair(8,"fjhdj"));

// printing maps using iterator
map<int,string>::iterator it;
for( it = m.begin(); it!=m.end();it++)
{
    cout<<(*it).first <<" "<<(*it).second<<endl;
   
    // it->first also works

    cout<<it->first <<" "<<it->second<<endl;

    // printed in sorted order.
    }

    // second way to print using range based loop

    for(auto&pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;

    }
return 0;
}