#include <bits/stdc++.h>
using namespace std;
string a = "abcdefghijklmnopqrstuvwxyz";
//dr0opy 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi=0;//to cal the max length of the possible string
    for(int i=0;i<26;i++){
    for(int j=i+1;j<26;j++){
    char x=a[i];
    char y=a[j];
    string t="";
   for(int k=0;k<n;k++){
    if(s[k]==x||s[k]==y){
        t+=s[k];
                        }
    }
    //cout<<t<<endl;
    bool flag=true;
      for(int f=0;f+1<t.size();f++)
       {
       	if(t[f]==t[f+1])
       	{
       		flag=false;break;
       	}
      }
    int ts=t.size();
    if((flag)&&(ts>1)) maxi = max(maxi,ts);
    }
}
    cout<<maxi<<endl;
   	return 0;
 }