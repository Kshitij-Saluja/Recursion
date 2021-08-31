/*Question
 1. You are given a string str.
2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
Use sample input and output to take idea about subsequences.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

                               
Input Format
A string str
Output Format
Contents of the arraylist containing subsequences as shown in sample output
Constraints
0 <= str.length <= 20
Sample Input
abc
Sample Output
[, c, b, bc, a, ac, ab, abc]*/




#include<iostream>
using namespace std;
void fun(string str,int n,string s,int i){
	if(n==i){
		for(int i=0;i<s.size();i++){
			cout<<s[i];
		}
		if(str.size()!=s.size())
		cout<<", ";
	return ;
	}
	fun(str,(n+1),s,i);
	s=s+str[n];
	fun(str,(n+1),s,i);
	
}
int main(){
	string str;
	cin>>str;
	int n=str.size();
	cout<<"[";
	fun(str,0,"",n);
	cout<<"]";
}