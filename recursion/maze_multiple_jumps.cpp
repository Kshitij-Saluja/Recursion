/*Question
1. You are given a number n and a number m representing number of rows and columns in a maze.
2. You are standing in the top-left corner and have to reach the bottom-right corner. 
3. In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..). 
4. Complete the body of getMazePath function - without changing signature - to get the list of all paths that can be used to move from top-left to bottom-right.
Use sample input and output to take idea about output.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
 
                               
                               
                               
Input Format
A number n
A number m
Output Format
Contents of the arraylist containing paths as shown in sample output
Constraints
0 <= n <= 10
0 <= m <= 10
Sample Input
5
1

Sample Output
[v1v1v1v1, v1v1v2, v1v2v1, v1v3, v2v1v1, v2v2, v3v1, v4]*/





#include <iostream>
#include<vector>
using namespace std;
vector <string> v;
void fun(int n,int m,int i,int j,string s,int small){
	if(i==(n-1) && j==(m-1)){
		v.push_back(s);
	//	cout<<",";
		return ;
	}
	for(int q=1;q<n;q++){
		if((i+q)<n)
		fun(n,m,(i+q),j,(s+"h"+to_string(q)),small);
	}
	for(int q=1;q<m;q++){
		if((j+q)<m)
			fun(n,m,i,(j+q),(s+"v"+to_string(q)),small);
		}
			for(int q=1;q<small;q++){
				if((i+q)<small && (j+q)<small)
				fun(n,m,(i+q),(j+q),(s+"d"+to_string(q)),small);
			}
}
int main(){
	int n,m;
	cin>>m>>n;
	int small;
	if(n>m)
	small=n;
	else 
	small=m;
	cout<<"[";
	fun(n,m,0,0,"",small);
	int j=0;
	for(auto i:v){
	    if(j!=(v.size()-1))
	    cout<<i<<",";
	else {
		cout<<i;
	}
	    j++;
	}
	v.clear();
	cout<<"]";
}