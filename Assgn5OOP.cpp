#include<iostream>
using namespace std;
template <class T>
void sort(T arr[], int size)
{
int pos_min;
T temp;
for(int i=0;i<size-1;i++)
{
	pos_min=i;
	for(int j=i+1;j<size;j++)
	{
		if(arr[j]<arr[pos_min])
		{
			pos_min=j;
		}
	}
		if(pos_min!=i)
		{
			temp=arr[i];
			arr[i]=arr[pos_min];
			arr[pos_min]=temp;
		}
}
cout<<"\nSorted Elements Are: "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\t "<<arr[i];
	}
}

int main()
{
	int size,choice;
	int arr_a[10];	
	float arr_b[10];
do
{
	cout<<"\nSelection Sort using Function Template";
	cout<<"\n1. Sort Integer Numbers";
	cout<<"\n2. Sort Float Numbers";
	cout<<"\n3. Exit";
	cout<<"\nEnter Your Choice: ";
	cin>>choice;

	switch(choice)
	{

	case 1:
		cout<<"\nSorting Integer Numbers";
		cout<<"\nEnter Size of Array: ";
		cin>>size;
		for(int i=0;i<size;i++)
		{
			cout<<"\nEnter Element "<<i+1<<": ";
			cin>>arr_a[i];
		}
	sort<int>(arr_a,size);
	break;

	case 2:
	cout<<"\nSorting Float Numbers";
	cout<<"\nEnter Size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter Element "<<i+1<<": ";
		cin>>arr_b[i];
	}
	sort<float>(arr_b,size);
	break;

	case 3:
	exit(0);
	}
}while(choice!=3);
return 0;
}
