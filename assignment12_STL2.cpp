/*NAME : RUTUJA KAWADE
  ROLL NO : 21230
  ASSIGNMENT :12

Write C++ program using STL for Dequeue (Double ended queue)
*/

using namespace std;

void showdq(deque <int> gq)
{
    deque <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop_front();
    }
    cout << '\n';
}

int main()
{
	deque <int> gquiz;
	int choice ;
	char ch;
	do{
		cout<< "Enter operation to be performed  : \n 1.Insert from front \n 2.Insert at rear \n 3.pop from front \n 4.pop from rear \n 5.size of deque\n 6.display front \n 7.display rear \n 8.display deque";
			cin>>choice;
			switch(choice)
			{
		     case 1:
		     {
		    	 int n , a;

		    	         cout<<"Enter no of elements to be inserted from front in dequeue";
		    	         	cin>>n;
		    	         	for(int i=0;i<n;i++)
		    	         	{
		    	         	cout<< "Enter the elements";
		    	         	cin>>a;
		    	             gquiz.push_front(a);
		    	         	}
		    	         	break;
		     }
		     case 2:
			 {
				 int n , a;

						 cout<<"Enter no of elements to be inserted from back in dequeue";
							cin>>n;
							for(int i=0;i<n;i++)
							{
							cout<< "Enter the elements";
							cin>>a;
							 gquiz.push_back(a);
							}
							break;
			 }
		     case 3:
		     {

		    		cout << "\ngquiz.pop_front() : ";
		    	    gquiz.pop_front();
		            showdq(gquiz);
		            break;
		     }
		     case 4:
			 {

					cout << "\ngquiz.pop() : ";
					gquiz.pop_back();
					showdq(gquiz);
					break;
			 }
		     case 5:{

		    	 cout << "\ngquiz.size() : " << gquiz.size();
		    	 break;
		     }
		     case 6:{
		    	 cout<<"Front element is "<<gquiz.front();
		    	 break;
		     }
		     case 7:{
		    	 cout<<"Back element is "<<gquiz.back();
				 break;
			 }
		     case 8:{

		    	 cout<<"Deque is: ";
		    	 showdq(gquiz);
				 break;
			 }
			}
			 cout<<"\n want to continue or not? y/n \n";
			 cin>>ch;

		    }while(ch=='y');


	return 0;
}