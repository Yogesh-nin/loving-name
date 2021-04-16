#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;


void A ()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2)
			{
				cout<<"#";
			}
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

void B()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2 || i==4)
			{
				cout<<"#";
			}
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

void C()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				cout<<"#";
			}
			else
			{
				if(j==0)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}
void D()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				if(j!=4)
				 cout<<"#";
			}
			
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}
void E()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2 || i==4)
			{
				cout<<"#";
			}
			else
			{
				if(j==0)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

void F()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2)
			{
				cout<<"#";
			}
			else
			{
				if(j==0)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

void G()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i ==0 || i==4)
			{
				if(j!=0)
				 cout<<"#";
				
				else
				 cout<<" ";
			}
			
			else if(i==1)
			{
				if(j==0)
				{
					cout<<"#";
				}
				else
				 cout<<" ";
			}
			else if(i==2)
			{
				if(j==1 || j==2)
				  cout<<" ";
				
				else
				 cout<<"#";  
			}
			
			else if(i==3)
			 {
			 	if(j==1 || j==2 ||j==3)
			 	 cout<<" ";
			 	 
			 	else
			 	 cout<<"#";
			 }
		}
		cout<<endl;
	}
}

void H()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==2)
			{
				cout<<"#";
			}
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

void I()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				cout<<"#";
			}
			
			else
			{
				if(j==2)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
		}
		
		cout<<endl;
	}
}

void J()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0)
			{
				cout<<"#";
			}
			
			else if(i==4)
			{
				if(j<=2)
				 cout<<"#";
			}
			
			else
			{
				if(j==2)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
		}
		
		cout<<endl;
	}
}

void K()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				if(j==0 || j==4)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
			
			else if(i==1 || i==3)
			{
				if(j==0 || j==3)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
			
			else
			{
				if(j==0 || j==1)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void L()
{
	for(int i=0; i<5; i++)
	{
		for( int j =0; j<5; j++)
		{
			if(i==4)
			{
				cout<<"#";
			}
			
			else
			{
				if(j==0)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
		
		}
		cout<<endl;
	}
}

void M()
{
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0)
			{
				if(j==0 || j==4)
				 cout<<"#";
				else
				 cout<<" ";
			}
			else if(i==1)
			{
				if(j==2)
				 cout<<" ";
				else
				 cout<<"#";
			}
			else if(i==2)
			{
				if(j==1 || j==3)
				 cout<<" ";
				else
				 cout<<"#";
				
			}
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}


void N()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				if(j==0 || j==4)
				 cout<<"#";
				else 
				 cout<<" ";
			}
			else if(i==1)
			{
				if(j==2 || j==3)
				 cout<<" ";
				else 
				 cout<<"#";
			}
			else if(i==2)
			{
				if(j==1 || j==3)
				 cout<<" ";
				else
				 cout<<"#";
			}
			else if(i==3)
			{
				if(j==1 || j==2)
				 cout<<" ";
				else 
				 cout<<"#";
			}
		}
		cout<<endl;
	}
}

void O()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				if(j==0 || j==4)
				 cout<<" ";
				else
				 cout<<"#";
				
			}
			
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void P()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2)
			{
				cout<<"#";
			}
			else if(i==1)
			{
				if(j==0 || j==4)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
			else
			{
				if(j==0)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}



void Q()
{
		for(int i=0; i<6; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				if(j==0 || j==4)
				 cout<<" ";
				else
				 cout<<"#";
				
			}
			else if(i==3)
			{
				if(j==1 || j==2)
				 cout<<" ";
				else
				 cout<<"#";
			}
			
			else if(i==1 || i==2)
			{
				if(j==0 || j==4)
				 cout<<"#";
				
				else
				 cout<<" ";
			}
		}
		if(i==5)
		{
			for(int j=0; j<6; j++)
	     	{
			if(j==5)
			 cout<<"#";
			else
			 cout<<" ";
			
	     	}
		}
		
		cout<<endl;
	}
}

void R()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2)
			{
				cout<<"#";
			}
			else if(i==3)
			{
				if(j==0 || j==3)
				 cout<<"#";
				else
				 cout<<" ";
			}
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				 
				else
				{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}

void S()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==2 || i==4)
			{
				cout<<"#";
			}
			else if(i==1)
			{
				if(j==0)
				 cout<<"#";
				else
				 cout<<" ";
			}
			else
			{
				if(j==4)
				 cout<<"#";
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void T()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0)
			{
				cout<<"#";
			}
			
			else
			{
				if(j==2)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
		}
		
		cout<<endl;
	}
}

void U()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==4)
			{
				if(j==0 || j==4)
				 cout<<" ";
				else
				 cout<<"#";
				
			}
			
			else
			{
				if(j==0 || j==4)
				 cout<<"#";
				
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void V()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i<3)
			{
				if(j==0 || j==4)
				 cout<<"#";
				else
				 cout<<" ";
			}
			else if(i==3)
			{
				if(j==1 || j==3)
				 cout<<"#";
				else 
				 cout<<" ";
			}
			else 
			{
				if(j==2)
				 cout<<"#";
				else 
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void W()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==4)
			{
				if(j==0 || j==4)
				 cout<<" ";
				else
				 cout<<"#";
				
			}
			
			else
			{
				if(j==0 || j==2 || j==4)
				 cout<<"#";
				
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void X()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			{
				if(j==0 || j==4)
				 cout<<"#";
				else 
				 cout<<" ";
			}
			else if(i==1 || i==3)
			{
				if(j==1 || j==3)
				 cout<<"#";
				else
				 cout<<" ";
				 
			}
			else 
			{
				if(j==2)
				 cout<<"#";
				 
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void Y()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0)
			{
				if(j==0 || j==4)
				 cout<<"#";
				else
				 cout<<" ";
			}
			else if(i==1)
			 {
			 	if(j==1 || j==3)
			 	 cout<<"#";
			 	else 
			 	 cout<<" ";
			 }
			 else
			 {
			 	if(j==2)
			 	 cout<<"#";
			 	else
			 	 cout<<" ";
			 }
		}
		cout<<endl;
	}
	
}

void Z()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i==0 || i==4)
			 cout<<"#";
			 
			else
			{
				if(j==4-i)
				 cout<<"#";
				else
				 cout<<" ";
			}
		}
		cout<<endl;
	}
}

void heart()
{
	int size = 5;
	
	for(int i=0; i< size; i++)
	{
		for(int j=0; j<=4*size; j++)
		{
			double d1 = sqrt(pow(i - size, 2) + pow(j - size, 2));
			double d2 = sqrt(pow(i - size, 2) + pow(j - 3*size, 2));
			
			if(d1 < size + 0.5 || d2 < size + 0.5)
			 cout<<"*";
			else
			 cout<<" ";
		}
		cout<<endl;
		
	}
	
	for(int i = 1; i< 2*size; i++)
	{
		for(int j = 0; j<i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j<4*size + 1 - 2*i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}

int main()
{
    
    string Name;
    
    cout<<"\nEnter Your Name (in capital letter): ";
    getline(cin, Name);
    
    int i = 0, length;
    
   length = Name.length();
    while(i<length)
    {
    	
        switch(Name[i])
        {
        	case 'A' : A();
        	         cout<<"\n";
        	         break;
        	case 'B' : B();
        	         cout<<"\n";
        	         break;
        	case 'C' : C();
        	         cout<<"\n";
        	         break;
        	case 'D' : D();
        	         cout<<"\n";
        	         break;
        	case 'E' : E();
        	         cout<<"\n";
        	         break;
        	case 'F' : F();
        	         cout<<"\n";
        	         break;
        	case 'G' : G();
        	         cout<<"\n";
        	         break;
        	case 'H' : H();
        	         cout<<"\n";
        	         break;
        	case 'I' : I();
        	         cout<<"\n";
        	         break;
        	case 'J' : J();
        	         cout<<"\n";
        	         break;
        	case 'K' : K();
        	         cout<<"\n";
        	         break;
            case 'L' : L();
        	         cout<<"\n";
        	         break;
        	case 'M' : M();
        	         cout<<"\n";
        	         break;
        	case 'N' : N();
        	         cout<<"\n";
        	         break;
        	case 'O' : O();
        	         cout<<"\n";
        	         break;
        	case 'P' : P();
        	         cout<<"\n";
        	         break;
        	case 'Q' : Q();
        	         cout<<"\n";
        	         break;
        	case 'R' : R();
        	         cout<<"\n";
        	         break;
        	case 'S' : S();
        	         cout<<"\n";
        	         break;
        	case 'T' : T();
        	         cout<<"\n";
        	         break;
        	case 'U' : U();
        	         cout<<"\n";
        	         break;
        	case 'V' : V();
        	         cout<<"\n";
        	         break;
        	case 'W' : W();
        	         cout<<"\n";
        	         break;
        	case 'X' : X();
        	         cout<<"\n";
        	         break;
        	case 'Y' : Y();
        	           cout<<"\n";
        	          break;
        	case 'Z' : Z();
        	         cout<<"\n";
        	         break;
        	default : cout<<"I know I am smart...dont fall in love with me and enter correct letter\n";
		}
		i++;
	}
	
	cout<<"\n satte satte satte!!! that was a good name:)\n";
	cout<<"\nLet me give you a gift..\n\n";
	
	heart();
    
	return 0;
}
