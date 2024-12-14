#include <bits/stdc++.h>
using namespace std;
	void nhapMang(int a[], int n)
		{
			for (int i =0; i<n;i++)
				{
					cout << "a[" << i+1 << "]:" ;
					cin >> a[i] ;
				 }
			cout << endl; 
		}
	void inMang(int a[], int n)
	{
		cout << "Mang sau khi nhap la: " << endl; 
		for (int i =0; i<n;i++)
				{
					cout << a[i] << "   " ;
				 }
	 } 
	 void xoaMang(int a[] , int &n, int vt)
	 {
	 	if (vt < 0)
		 	{
		 		vt =0; 
			  }
		else if (vt > n)
			{
				vt =n-1; 
			 } 
		for (int i = vt; i < n-1 ;i++)
			{
				a[i] = a[i+1] ;
			 } 
		--n; 
	  } 
	int main()
	{
		int n; 
		cout << " Nhap n" << endl;
		cin >> n;
		int a[n]; 
		nhapMang(a,n);
		inMang(a,n); 
		for ( int i =0 ; i < n; i++)
			{
				for (int j =i+1; j < n ; j++)
					{
						if ( a[i] == a[j] )
							{
								xoaMang(a,n,j); 
							 } 
					 } 
			 } 
		cout << endl << " Mang sau khi sua la: " << endl;
		for (int i=0; i< n;i++)
			{
				cout << a[i] << "   ";
			 } 
		return 0; 
	}
