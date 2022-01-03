// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  
  string ans="";
  char ch=src[0];
  int c=0;
  for(int i=0;i<src.size();i++){
      if(src[i]==ch){
          c++;
      }
      else{
          ans+=ch+to_string(c);
          ch=src[i];
          c=1;
      }
  }
  ans+=ch+to_string(c);
  return ans;
}     
