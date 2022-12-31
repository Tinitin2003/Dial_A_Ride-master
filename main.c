#include<stdio.h>
#include<stdlib.h>
#include"structures.h"
#include"input.h"
#include"output.h"
#include"sortRequest.h"
#define MAX 100
int main(){
	int n,N,c,R,city[10][10];
	int i;
	Request *req;
	req=(Request*)malloc(sizeof(Request)*MAX);
	Car *car;
	car=(Car*)malloc(sizeof(Car)*MAX);
	input(&n,&N,&c,&R,req,car,city);
	output(&n,&N,&c,&R,req,car,city);
	sortRequest(req,0,R);
	//for(i=0;i<n;i++)
	//dis(city,i);
	//processRequest();
	return 0;
}
