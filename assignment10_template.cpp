/*NAME : RUTUJA KAWADE
  ROLL NO : 21230
  ASSIGNMENT :10

Write a function template selection sort. Write a program that inputs, sorts 
and outputs an int array and a float array.
  */

#include<iostream>
using namespace std;

template<class T>        
        
        
        T selection_sort(T a[], int n)        //Template function
        {
        
	cout<<"Enter no of elements";
	cin>>n;
        int tem;
        for(int i=0;i<n;i++)        //Accepting elements
            {
                cout<<"a["<<i<<"]=";
                cin>>a[i];
            }
            
    
         for(int i=0;i<10;i++)            //Sorting logic
         {
         	tem=i;
              for(int j=i+1;j<n;j++)
              {
                 if(a[j]<a[tem]) 
                   {
                   	tem=j;
				   }
            }
            swap(a[i],a[tem]);
         }

   	
         for(int i=0;i<n;i++)        //Displaying logic
        {
            cout<<a[i]<<"\n";
        }
        }


int main()
{
	
    int c;
    cout<<"Choice";
    cin>>c;
    switch(c)
        {
		case 1:
			    cout<<"Integer sorting...\n";
			    
			    selection_sort<int>(T a[],int n);
			    break;
		case 2:
			    
			    cout<<"Floating sorting...\n";
			    
			    selection_sort<float>();
			    break;
		case 3:
			    
			    cout<<"char sorting...\n";
			    
			    selection_sort<string>();
			    break;
	}
        
}
