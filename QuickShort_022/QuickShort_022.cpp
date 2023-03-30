#include <iostream>
using namespace std;

//array of integers to hold values 
int arr[20];
int cmp_count = 0; // number of comparasion 
int mov_count = 0; // number of data movements 
int n; 

void input() {
	while (true)
	{
		cout << "masukan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n-----------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-----------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
} 
//swaps the element at index x with the element at index y 
void swap(int x, int y)
{
	int temp; 

	temp = arr[x]; 
}

} 

void q_short(int low, int high)
{
	int pivot, i, j; 
	if (low > high)                              // Langkah 1 
		return;

	//partition the list into two parts: 
	//one containing elements less that or equal to pivot 
	//Outher conntainning elements greather than pivot 

	pivot = arr[low];                            // Langkah 2 

	i = low + 1;                                 // Langkah 3 
	j = high;                                    // Langkah 4 


	while (i <= j)                               // Langkah 10 
	{
		//search for an element greater than pivot 
		while ((arr[i] <= pivot) && (i <= high))  // Langkah 5 
		{
			i++;
			cmp_count++;
		}
		cmp_count++; 
		//search for an element less than or equal to pivot 
		while ((arr[j] > pivot) && (j >= low))    // Langkah 7 
		{
			j--;                                  // Langkah 8 
			cmp_count++;
		}
		cmp_count++; 

	}
