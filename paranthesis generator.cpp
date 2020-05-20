#include<bits/stdc++.h>
using namespace std;
void bracket(int o,int c,int n, string s)
{    //base case o>c
//
if(o==n&&c==n)
{
cout<<s<<endl;
return;

}

if(o<n)
{
bracket(o+1,c,n,s+"{");

}
if(c<o)
{
bracket(o,c+1,n,s+"}");
}


}
int main()
{
string h="";	
bracket(0,0,4,h);
system("pause");


}