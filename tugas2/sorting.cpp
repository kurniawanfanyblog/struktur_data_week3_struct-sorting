#include <iostream>
#include <conio.h>
using namespace std;

void SwapMembers(int items[], int index1, int index2){
	int temp;
	temp=items[index1];
	items[index1]=items[index2];
	items[index2]=temp;
}

main(){
	int n,m;
	int number[]={102,21,83,42,11,10,9,3,20,27,15,92,2};
	const int size = sizeof(number) / sizeof(number[0]);
	for(n=size-1;n>0;n--)
	for(m=0;m<n;m++)
	if(number[m]>number[m+1])
	SwapMembers(number,m,m+1);
	for(n=0;n<size;n++)
	cout<<number[n]<<" , ";
	return 0;
	
}
