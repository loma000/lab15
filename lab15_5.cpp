#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(&a, &b, &c, &d);
		cout << a << " " << b << " " << c << " " << d << endl;
	}

	return 0;
}

// Do not modify the code above this line
// Write definition of shuffle() using pointer after this line.
void shuffle(int *a, int *b, int *c, int *d)
{
	int t, j;
	int x = rand() % 3 + 1;
	if (x == 1)
	{
		t = *a;
		*a = *b;
		*a = t;

		j = *c;
		*c = *d;
		*d = j;
	}
	else if (x == 2)
	{
		t = *b;
		*b = *c;
		*b = t;

		j = *a;
		*a = *d;
		*d = j;
	}
	else if (x == 3)
	{

		t = *a;
		*a = *c;
		*c = t;

		j = *b;
		*b = *d;
		*d = j;
	}
}