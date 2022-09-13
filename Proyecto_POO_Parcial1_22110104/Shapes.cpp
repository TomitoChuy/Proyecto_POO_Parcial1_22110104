#include "Shapes.h"
#include <iostream>
#include<iomanip>

using namespace std;

//Constructores para Shape
char Shape::getCharacter() {
	return character;
}

int Shape::getX() {
	return x;
}

int Shape::getY() {
	return y;
}

//Constructores para Square
int Square::getSide() {
	return side;
}

int Square::getFill() {
	return fill;
}

void Square::draw() {
	char cha, matrix[100][100];
	int x, y, s, f;
	int i = 0, j = 0;
	cha = getCharacter();
	s = getSide();
	f = getFill();
	x = getX();
	y = getY();

	for (i; i < s; i++) {
		for (j = 0; j < s; j++) {
			if (f == 0) {
				if (i == 0 || j == 0 || i == s - 1 || j == s - 1) {
					matrix[i][j] = cha;
				}
				else {
					matrix[i][j] = ' ';
				}
			}
			else {
				matrix[i][j] = cha;
			}
		}
	}

	for (i = 1; i < y; i++) cout << " " << endl;
	for (i = 0; i < s; i++) {
		cout << setw(x);
		for (j = 0; j < s; j++) {
			cout << matrix[i][j];
		}
		cout << "   " << endl;
	}
}

//Constructores para Triangle
int Triangle::getHeight() {
	return height;
}

void Triangle::draw() {
	char cha;
	int x, y, h;
	int i = 0, j = 0;
	cha = getCharacter();
	h = getHeight();
	x = getX();
	y = getY();

	for (i = 1; i < y; i++) cout << " " << endl;
	for (i = 1; i <= h; i++) {
		cout << setw(x);
		for (j = 1; j <= h - i; j++) cout << " ";
		for (j = 1; j <= 2 * i - 1; j++) cout << cha;
		cout << endl;
	}
}

//Constructores para Circle
int Circle::getRadius() {
	return radius;
}

void Circle::draw() {
	char cha;
	int x, y, r;
	int i = 0, j = 0;
	cha = getCharacter();
	r = getRadius();
	x = getX();
	y = getY();

	for (i = 1; i < y; i++) cout << " " << endl;
	for (j = 0; j <= r * 2; j++) {
		cout << setw(x);
		for (i = 0; i <= r * 2; i++) {
			if (pow(i - r, 2) + pow(j - r, 2) <= pow(r, 2)) cout << cha;
			else cout << " ";
		}
		cout << endl;
	}
}