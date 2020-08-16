#include <iostream>
#include<queue>
using namespace std;
long ar[5][5];
//memset(ar, 0, sizeof(ar));

void bfs(int s)
{//graph structure is like this 
//	1->2->3     4->5  1 connected with 2 , 2 connected with 3 and 5 , 4 connected with 5
//	   |
//         v
//	   5
	ar[1][2] = 1;// this means 1 connected to 2
	ar[2][3] = 1;// this means 2 connected to 3
	ar[2][5] = 1;// this means 2 connected to 5
	ar[4][5] = 1;// this means 4 connected to 5
	int visited[10] = { 0 };

	//push the start node
	queue<int> q;
	q.push(s);//first push start node in q
	visited[s] = 1;// mark it visited bcoz we visit it only once 
	//cout << q.empty();
	while (!q.empty())// until we have members in queue process them
	{
		int a = q.front();// element at front
		cout << a;
		q.pop();// pop it 
		for (int i = 1; i <= 5; i++)//process it 
		{
			if (ar[a][i] == 1 || ar[i][a] == 1)// is it  a neighbour or not 
			{
				if (!visited[i])//was it visited previously 
					q.push(i);//enqueue it to queue
				visited[i] = 1;// mark visited 
			}

		}
	}

}
int main()
{


	//nodes connected shown using 2d array
	//1-- > 2--3
		//2-- > 5
		//4-- > 5
	
	//start node 1
	bfs(1);

   
}
