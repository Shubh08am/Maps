/* QUESTION->
given n strings print them in lexiographical order with their frequency
n <= 10^5 , |s|<= 10^5
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
map<string,int> m;
int n;
cin>>n;

for(int i =0 ; i<n ;++i)
{ 
string s;
cin>>s;
// putting string in map and incrementing count 
m[s] = m[s] + 1; // m[s]++
// initially m[s] will be 0 as no values in string
}

for(auto pr:m)
{
    cout<<pr.first<<" "<<pr.second<<endl;
}
return 0;
}