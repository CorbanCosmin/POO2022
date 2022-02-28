#include<iostream>
#include<stdio.h>
#include "NumberList.h"


int main() {

	NumberList lista1;
	printf("Am reusit sa initializez primul obiect\n");

	lista1.Init();
	lista1.Add(123);
	lista1.Add(4352);
	lista1.Add(12);
	lista1.Add(11);
	lista1.Print();
	lista1.Sort();
	lista1.Print();

	return true;
}