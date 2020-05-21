
#include <bits/stdc++.h> 
using namespace std; 
int counts(string s) 
{ int na = 0; 
int nb = 0; 
	int nc = 0; 
//there are two choices 
	for (int i=0; i<s.size(); i++) 
	{ 
	
		if (s[i] == 'a') 
			na = (1 + 2 * aCount); 

		else if (s[i] == 'b') 
			nb = (aCount + 2 * bCount); 

		else if (s[i] == 'c') 
			nc = (bCount + 2 * cCount); 
	} 

	return cCount; 
} 

// Driver code 
int main() 
{ 
	string s;
  cin>>s;
  cout << counts(s) << endl; 
	return 0; 
}
