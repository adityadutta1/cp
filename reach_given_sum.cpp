#include <iostream> 
using namespace std; 

int count(int n) 
{ 
 
	int dp[n + 1], i; 

	// make dp table 0 initially 
	for(int j = 0; j < n + 1; j++) 
			dp[j] = 0; 

	// Base case (If given value is 0) 
	dp[0] = 1; 

// repeat this step for all three different cases

	for (i = 3; i <= n; i++) 
	dp[i] += dp[i - 3]; 
	
	for (i = 5; i <= n; i++) 
	dp[i] += dp[i - 5]; 
	
	for (i = 10; i <= n; i++) 
	dp[i] += dp[i - 10]; 

	return dp[n]; 
} 

 
int main() 
{ 
	cout<<count(100);
	return 0; 
} 
