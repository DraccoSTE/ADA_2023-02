#include <iostream>
using namespace std;

int gVect[100]; // Buffer to save the elements
int gnCount; // Counter to know the number of elements used

void Insert(int elem)
{
    if (gnCount < 100) // we can only insert if there is space
        gVect[gnCount++] = elem; // Insert the element at the end
}

int main()
{
    Insert(30);
    cout << gVect[0];
    for (int i = 0; i < 100; i++) {
        Insert(i);
    }
    cout << endl << gVect[99];
}
