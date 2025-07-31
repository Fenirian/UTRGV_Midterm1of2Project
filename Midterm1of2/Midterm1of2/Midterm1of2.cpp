// Midterm1of2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define ask(X) cout<<#X" =? "; cin>>(X);

void print_row(uint16_t spaces, uint16_t asterisk) {
	while (spaces--) cout << " ";
	while (asterisk--) cout << "*";
	cout << endl;
}

void print_triangle(uint16_t TriangleSize) {
	uint16_t row = 1;
	while (TriangleSize--) print_row(TriangleSize, row++);
}

void main()
{
	uint16_t TriangleSize;
	ask(TriangleSize);
	print_triangle(TriangleSize);
}

