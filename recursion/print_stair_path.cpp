/*Question
1. You are given a number n representing number of stairs in a staircase.
2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
3. Complete the body of printStairPaths function - without changing signature - to print the list of all paths that can be used to climb the staircase up.
Use sample input and output to take idea about output.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

Input Format
A number n
Output Format
Print paths (one path in each line) in order hinted by Sample output
Constraints
0 <= n <= 10
Sample Input
9

Sample Output
111111111
11111112
11111121
1111113
11111211
1111122
1111131
11112111
1111212
1111221
111123
1111311
111132
11121111
1112112
1112121
111213
1112211
111222
111231
1113111
111312
111321
11133
11211111
1121112
1121121
112113
1121211
112122
112131
1122111
112212
112221
11223
112311
11232
1131111
113112
113121
11313
113211
11322
11331
12111111
1211112
1211121
121113
1211211
121122
121131
1212111
121212
121221
12123
121311
12132
1221111
122112
122121
12213
122211
12222
12231
123111
12312
12321
1233
1311111
131112
131121
13113
131211
13122
13131
132111
13212
13221
1323
13311
1332
21111111
2111112
2111121
211113
2111211
211122
211131
2112111
211212
211221
21123
211311
21132
2121111
212112
212121
21213
212211
21222
21231
213111
21312
21321
2133
2211111
221112
221121
22113
221211
22122
22131
222111
22212
22221
2223
22311
2232
231111
23112
23121
2313
23211
2322
2331
3111111
311112
311121
31113
311211
31122
31131
312111
31212
31221
3123
31311
3132
321111
32112
32121
3213
32211
3222
3231
33111
3312
3321
333*/



#include<iostream>
using namespace std;
void fun(int n,string s,int y){
	if(n<=0){
		if(n==0){
		cout<<s;
		int g=0;
		
		for(int i=0;i<(s.size()-1);i++){
		if(s[i]!='3')
		g=1;
		}
	//	if(g==1)
		cout<<"\n";
		}
		return ;
	}
	if(n>=1){
		fun(n-1,s+"1",y);
	}
		if(n>=2){
		fun(n-2,s+"2",y);
		
	}
		if(n>=3){
		fun(n-3,s+"3",y);
	}
}
int main(){
	int n;
	cin>>n;
	//cout<<"[";
	if(n!=0)
	fun(n,"",n);
	else {
		cout<<"\n";
	}
//	cout<<"]";
}