#include "NumberList.h"
#include <stdio.h>

void NumberList::Init()
{
	this->count = 0;

}

bool NumberList::Add(int x)
{
	
	if (this->count == 10) return false;
	this->numbers[this->count] = x;
	this->count++;
	return true;

}

void NumberList::Sort()
{
    int i, j, aux;
    bool swapped;
    for (i = 0; i < this->count; i++)
    {
        swapped = false;
        for (j = 0; j < this->count - i; j++)
        {
            if (this->numbers[j] > this->numbers[j + 1])
            {
                aux = this->numbers[i];
                this->numbers[i] = this->numbers[j];
                this->numbers[j] = aux;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void NumberList::Print()
{
    for (int i = 0; i < this->count; i++)
        printf("Elementul %d este %d\n", i, this->numbers[i]);
}