#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
void PopAll(queue<int>* v,int a) {
	if (v[0].front() == a)
		v[0].pop();
	if (v[1].front() == a)
		v[1].pop();
	if (v[2].front() == a)
		v[2].pop();
}
void PushAll(queue<int>* v, int a) {
	v[0].push(a + 6);
	v[1].push(a + 9);
	v[2].push(a + 20);
}
int CheckMin(const queue<int>* v) {
	return min(v[2].front(), min(v[0].front(), v[1].front()));
}
int main(){
	queue<int> c[3];
	c[0].push(6);
	c[1].push(9);
	c[2].push(20);
	int a;
	scanf_s("%d",&a);	
	if(a<6)
	{
		printf("no");
		return 0;
	}	
	while (true)
	{
		int b = CheckMin(c);
		if (b > a) 
		{
			return 0;
		}
		else
		{
			printf("%d\n",b);
		}
		PopAll(c, b);
		PushAll(c, b);
	}
}