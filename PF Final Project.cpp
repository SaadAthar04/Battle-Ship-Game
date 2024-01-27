#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<fstream>
using namespace std;


const int size1=9;               //easy mode size
const int size2=13;              //medium mode size
const int size3=16;              //hard mode size


const int carriersize=8;
const int battleshipsize=5;
const int cruisersize=4;
const int submarinesize=3;
const int destroyersize=2;


char arr1[size3][size3]={0};           //grid               
char arr2[size3][size3]={0};
char arrr1[size3][size3]={0};          //player 1
char arrr2[size3][size3]={0};          //player 2 //computer


int arr[size3][size3]={0};

                      



int p1=0,p2=0,comp=0;






int toss()				//toss function
{
	srand(time(0));
	int num = rand() % 2 + 1;
	if(num==1)
	{
		return num=1;
	}
	else 
	{
		return num=0;
	}
}




void credits()      //credits function
{
	cout << "==>___BATTLE SHIP GAME___<==" << endl<<endl;
	cout << "==>___Made by___<==\n"<<endl;
	cout << "1) Fatima Arshad (21F-9614)"    << endl;
	cout << "2) Saad Athar Saeed (21F-9227)" << endl << endl;
	cout << "==>All Rights Reserved<==" << endl << endl;
	cout << "\"**FAST NATIONAL UNIVERSITY OF COMPUTER AND EMERGING SCIENCES**\"" << endl << endl;
}




void instructions()     //instruction function
{
	cout<<"                                                       ===>____ INSTRUCTIONS ____<===               "<<endl<<endl;
	
	cout<<"          1. The object of Battleship is to try and sink all of the other player's ships before they sink all of your ships."<<endl;
    cout<<"          2. Each player places the 5 ships somewhere on their board."<<endl; 
	cout<<"          3. The ships can only be placed vertically or horizontally. Diagonal placement is not allowed."<<endl;
	cout<<"          4. No part of a ship may hang off the edge of the board."<<endl; 
	cout<<"          5. Ships may not overlap each other. No ships may be placed on another ship."<<endl; 
    cout<<"          6. Once the guessing begins, the players may not move the ships."<<endl;
    cout<<"          7. Player's take turns guessing by calling out the coordinates. The opponent responds with 'hit' or 'miss' as appropriate."<<endl;
    cout<<"          8. When all of the squares that one your ships occupies have been hit, the ship will be sunk."<<endl;
    cout<<"          9. As soon as all of one player's ships have been sunk, the game ends."<<endl;
}





int easycheckwin()
{
	bool flag=0,flag1=0;
	
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size1;j++)
		{
			if (arrr1[i][j]=='a' || arrr1[i][j]=='b' || arrr1[i][j]=='c' || arrr1[i][j]=='d' || arrr1[i][j]=='e' && flag==0)
			{
				flag=1;
			}
			if (arrr2[i][j]=='a' || arrr2[i][j]=='b' || arrr2[i][j]=='c' || arrr2[i][j]=='d' || arrr2[i][j]=='e' && flag1==0)
			{
				flag=1;
			}
        }
	}
    
    if(flag==0)
    {
    	return 1;
	}
	else if(flag1==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}



int mediumcheckwin()
{
	bool flag=0,flag1=0;
	
	for(int i=0;i<size2;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if (arrr1[i][j]=='a' || arrr1[i][j]=='b' || arrr1[i][j]=='c' || arrr1[i][j]=='d' || arrr1[i][j]=='e' && flag==0)
			{
				flag=1;
			}
			if (arrr2[i][j]=='a' || arrr2[i][j]=='b' || arrr2[i][j]=='c' || arrr2[i][j]=='d' || arrr2[i][j]=='e' && flag1==0)
			{
				flag=1;
			}
        }
	}
    
    if(flag==0)
    {
    	return 1;
	}
	else if(flag1==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}



int hardcheckwin()
{
	bool flag=0,flag1=0;
	
	for(int i=0;i<size3;i++)
	{
		for(int j=0;j<size3;j++)
		{
			if (arrr1[i][j]=='a' || arrr1[i][j]=='b' || arrr1[i][j]=='c' || arrr1[i][j]=='d' || arrr1[i][j]=='e' && flag==0)
			{
				flag=1;
			}
			if (arrr2[i][j]=='a' || arrr2[i][j]=='b' || arrr2[i][j]=='c' || arrr2[i][j]=='d' || arrr2[i][j]=='e' && flag1==0)
			{
				flag=1;
			}
        }
	}
    
    if(flag==0)
    {
    	return 1;
	}
	else if(flag1==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
	
}
		






void easyplacement1()                  //player 1 placement
{
	int row,col, count=1, count1=1, count2=1, count3=1, count4=1;
	char b;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<2;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + carriersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + carriersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr1[row + i][col] = 'a';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr1[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<2;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag1=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + battleshipsize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + battleshipsize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr1[row + i][col] = 'b';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr1[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<2;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag2=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + cruisersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + cruisersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr1[row + i][col] = 'c';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr1[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<2;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + submarinesize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + submarinesize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr1[row + i][col] = 'd';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr1[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<2;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag4=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + destroyersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + destroyersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr1[row + i][col] = 'e';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr1[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
}
}




void mediumplacement1()                 //player 1 placement

{
	
	
	int row,col, count=1, count1=1, count2=1, count3=1, count4=1;
	char b;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<3;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + carriersize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + carriersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr1[row + i][col] = 'a';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr1[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<3;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag1=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + battleshipsize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + battleshipsize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr1[row + i][col] = 'b';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr1[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<3;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag2=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + cruisersize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + cruisersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr1[row + i][col] = 'c';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr1[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<3;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + submarinesize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + submarinesize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr1[row + i][col] = 'd';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr1[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<3;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag4=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + destroyersize >size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + destroyersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr1[row + i][col] = 'e';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr1[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
	
	
	
}
}





void hardplacement1()                     //player 1 placement
{
	
	int row,col, count=1, count1=1, count2=1, count3=1, count4=1;
	char b;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<4;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + carriersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + carriersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr1[row + i][col] = 'a';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr1[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<4;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag1=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + battleshipsize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + battleshipsize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr1[row + i][col] = 'b';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr1[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<4;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag2=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + cruisersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + cruisersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr1[row + i][col] = 'c';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr1[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i <size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<4;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + submarinesize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + submarinesize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr1[row + i][col] = 'd';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr1[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<4;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag4=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + destroyersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr1[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + destroyersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr1[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr1[row + i][col] = 'e';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr1[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr1[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
	
}

}









void easyplacement2()                  //player 2 placement
{
	int row,col, count=1, count1=1, count2=1, count3=1, count4=1;
	char b;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<2;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + carriersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + carriersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr2[row + i][col] = 'a';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr2[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<2;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag1=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + battleshipsize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + battleshipsize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr2[row + i][col] = 'b';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr2[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<2;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag2=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + cruisersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + cruisersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr2[row + i][col] = 'c';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr2[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<2;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + submarinesize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + submarinesize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr2[row + i][col] = 'd';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr2[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<2;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag4=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + destroyersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + destroyersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr2[row + i][col] = 'e';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr2[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
}

}





void mediumplacement2()                 //player 2 placement
{
	
	
	int row,col, count=1, count1=1, count2=1, count3=1, count4=1;
	char b;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<3;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + carriersize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + carriersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr2[row + i][col] = 'a';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr2[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<3;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag1=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + battleshipsize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + battleshipsize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr2[row + i][col] = 'b';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr2[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<3;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag2=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + cruisersize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + cruisersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr2[row + i][col] = 'c';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr2[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<3;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + submarinesize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + submarinesize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr2[row + i][col] = 'd';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr2[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<3;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag4=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + destroyersize >size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + destroyersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr2[row + i][col] = 'e';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr2[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
	


}

}




void hardplacement2()                     //player 2 placement
{
	
	int row,col, count=1, count1=1, count2=1, count3=1, count4=1;
	char b;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<4;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + carriersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + carriersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr2[row + i][col] = 'a';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr2[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<4;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag1=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + battleshipsize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + battleshipsize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr2[row + i][col] = 'b';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr2[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<4;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag2=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + cruisersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + cruisersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr2[row + i][col] = 'c';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr2[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i <size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<4;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + submarinesize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + submarinesize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr2[row + i][col] = 'd';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr2[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<4;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			cout<<"***INVALID INPUT***\n";
		}
		cout << "Select rows and colounms where u want to place the ship in the form of 5A or 1C incase of Invalid Input, INPUT AGAIN: " << endl;
		cout<<"Enter Row : ";
		cin >> row ;
		cout<<"Enter Column: ";
		cin>> col;
		col = static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag4=1;
		
		
		
			if(b == 'v' || b == 'V')
			{
				if (row + destroyersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 'h' || b == 'H') 
			{
				if (col + destroyersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!='v' || b!='h' || b!='V' || b!='H'));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 'v' || b == 'V')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr2[row + i][col] = 'e';
		}
	}
	else if(b =='h' || b == 'H')
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr2[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
	
}

}






void easyplacement3()                  //computer placement
{
	int row,col,b, count=1, count1=1, count2=1, count3=1, count4=1;
	
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<2;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;
		
		flag=1;
		
		
		
			if(b == 0)
			{
				if (row + carriersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + carriersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr2[row + i][col] = 'a';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr2[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<2;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		b=rand()%2;
		
		flag1=1;
		
		
		
			if(b == 0)
			{
				if (row + battleshipsize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + battleshipsize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr2[row + i][col] = 'b';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr2[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<2;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
		//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		b=rand()%2;
		
		flag2=1;
		
		
		
			if(b == 0)
			{
				if (row + cruisersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + cruisersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr2[row + i][col] = 'c';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr2[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<2;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		cout << "Want to place it vertically(v) or horizontally(h): " << endl;
		cin >> b;
		flag3=1;
		
		
		
			if(b == 0)
			{
				if (row + submarinesize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + submarinesize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr2[row + i][col] = 'd';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr2[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<2;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
		//	cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;
		
		
		flag4=1;
		
		
		
			if(b == 0)
			{
				if (row + destroyersize > size1)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + destroyersize > size1)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr2[row + i][col] = 'e';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr2[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size1; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size1; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
}


}



void mediumplacement3()                 //computer placement
{
	
	
	int row,col,b, count=1, count1=1, count2=1, count3=1, count4=1;

	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<3;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
		//	cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%12+1;
		col=rand()%12+64;
	
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		
		
		b=rand()%2;
		
		flag=1;
		
		
		
			if(b == 0)
			{
				if (row + carriersize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + carriersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
}
	while((flaggy==0) && (b!=0 || b!=1));
	
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b ==0)
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr2[row + i][col] = 'a';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr2[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	

}


    
    
    for(int i=0;i<3;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%12+1;
		col=rand()%12+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		b=rand()%2;
		
		flag1=1;
		
		
		
			if(b == 0)
			{
				if (row + battleshipsize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + battleshipsize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr2[row + i][col] = 'b';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr2[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<3;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%12+1;
		col=rand()%12+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		b=rand()%2;
		
		flag2=1;
		
		
		
			if(b == 0)
			{
				if (row + cruisersize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + cruisersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr2[row + i][col] = 'c';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr2[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<3;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%12+1;
		col=rand()%12+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;
		
		flag3=1;
		
		
		
			if(b == 0)
			{
				if (row + submarinesize > size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + submarinesize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr2[row + i][col] = 'd';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr2[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<3;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%12+1;
		col=rand()%12+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		b=rand()%2;
		
		flag4=1;
		
		
		
			if(b == 0)
			{
				if (row + destroyersize >size2)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + destroyersize > size2)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b ==0)
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr2[row + i][col] = 'e';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr2[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size2; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
	
	
	
}

}


void hardplacement3()                     //computer placement
{
	
	int row,col,b, count=1, count1=1, count2=1, count3=1, count4=1;
	bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag6=1;
	bool flaggy=1;
	
	
	
	for(int i=0;i<4;i++)                        //carrier placement
	{
		flag6=1;
		
		cout<<"Place the CARRIER # "<<count<<": ";

		do
		{
		flaggy=1;	
		if(flag==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%15+1;
		col=rand()%15+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;
		
		flag=1;
		
		
		
			if(b == 0)
			{
				if (row + carriersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+carriersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + carriersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+carriersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < carriersize; i++)
		{
			
			arrr2[row + i][col] = 'a';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < carriersize; i++)
		{
			arrr2[row ][col+i] = 'a';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag=0;
	count++;	
    }
    
    
    
    
    
    
    for(int i=0;i<4;i++)                            //battleship placement
	{
		flag6=1;
		
		cout<<"Place the BATTLESHIP # "<<count1<<": ";

		

		do
		{
		flaggy=1;	
		if(flag1==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%15+1;
		col=rand()%15+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;
		
		flag1=1;
		
		
		
			if(b == 0)
			{
				if (row + battleshipsize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+battleshipsize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + battleshipsize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+battleshipsize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag1=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			
			arrr2[row + i][col] = 'b';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < battleshipsize; i++)
		{
			arrr2[row ][col+i] = 'b';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag1=0;
	count1++;

    }
    
    
    
    
    
    for(int i=0;i<4;i++)             //cruiser placement
	{
		flag6=1;
		
		cout<<"Place the CRUISER # "<<count2<<": ";

		

		do
		{
		flaggy=1;	
		if(flag2==1)
		{
		//	cout<<"***INVALID INPUT***\n";
		}
		
		
		row=rand()%15+1;
		col=rand()%15+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;
		
		flag2=1;
		
		
		
			if(b == 0)
			{
				if (row + cruisersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+cruisersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + cruisersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+cruisersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag2=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < cruisersize; i++)
		{
			
			arrr2[row + i][col] = 'c';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < cruisersize; i++)
		{
			arrr2[row ][col+i] = 'c';
		}
	}
	for (int i = 0; i <size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag2=0;
	count2++;
    }
    




    for(int i=0;i<4;i++)             //submarine placement
	{
		flag6=1;
		
		cout<<"Place the SUBMARINE # "<<count3<<": ";

			

		do
		{
		flaggy=1;	
		if(flag3==1)
		{
		//	cout<<"***INVALID INPUT***\n";
		}
		
		row=rand()%15+1;
		col=rand()%15+64;
		
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;

		flag3=1;
		
		
		
			if(b == 0)
			{
				if (row + submarinesize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+submarinesize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + submarinesize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+submarinesize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag3=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < submarinesize; i++)
		{
			
			arrr2[row + i][col] = 'd';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < submarinesize; i++)
		{
			arrr2[row ][col+i] = 'd';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag3=0;
	count3++;
    }
    
    
    
    
    for(int i=0;i<4;i++)             //destroyer placement
	{
		
		flag6=1;
		
		cout<<"Place the DESTROYER # "<<count<<": ";

			

		do
		{
		flaggy=1;	
		if(flag4==1)
		{
			//cout<<"***INVALID INPUT***\n";
		}
		
		row=rand()%15+1;
		col=rand()%15+64;


		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		b=rand()%2;

		flag4=1;
		
		
		
			if(b == 0)
			{
				if (row + destroyersize > size3)
				{
					flaggy = 0;
				}
				else
				{				
				
				for(int r=row;r<=row+destroyersize;r++)
				{
					
					if(arrr2[r][col]!='o')
					{
						flag6=0;
					}
				}
		    	}
			}
			
			else if(b == 1) 
			{
				if (col + destroyersize > size3)
				{
					flaggy = 0;
				}
				else
				{
				for(int r=col;r<=col+destroyersize;r++)
				{
					if(arrr2[row][r]!='o')
					{
						flag6=0;
					
					}
				}
			}
		    }
		
		flag4=1;
		
	}
	while((flaggy==0) && (b!=0 || b!=1));
	
		if(flag6==0)
		{
			continue;
		}
	
	if (b == 0)
	{
		for (int i = 0; i < destroyersize; i++)
		{
			
			arrr2[row + i][col] = 'e';
		}
	}
	else if(b ==1)
	{
		for (int i = 0; i < destroyersize; i++)
		{
			arrr2[row ][col+i] = 'e';
		}
	}
	for (int i = 0; i < size3; i++)
	{
		cout << arr[i][0];
		for (int j = 0; j < size3; j++)
		{
			cout << arrr2[i][j] << " ";
		}
		cout << endl;
	}
	flag4=0;
	count4++;
    
	
}
}















void easyboard()        //player 1 easy board 
{
		system("cls");
	cout << "\n\n\t==>__**BATTLE SHIP**__<==\n\n";
	
	cout<<"\t  ==>__**EASY MODE**__<==\n\n";
	

	cout << "          Hit (X)  ___  Miss (M)" << endl << endl;
	cout << endl<<endl;



for(int i=0;i<size1;i++)
{
	cout<<"      ";
	cout<<arr[i][0];                      //for numbering on grid
	for(int j=0;j<size1;j++)
	{

		cout<<arr1[i][j]<<"    ";
	}
	cout<<endl;
}
	cout << endl << endl;
}





void easyboard1()           //player 2 easy board
{
		system("cls");
	cout << "\n\n\t==>__**BATTLE SHIP**__<==\n\n";
	
	cout<<"\t  ==>__**EASY MODE**__<==\n\n";
	

	cout << "          Hit (X)  ___  Miss (M)" << endl << endl;
	cout << endl<<endl;



for(int i=0;i<size1;i++)
{
	cout<<"      ";
    cout<<arr[i][0];
	for(int j=0;j<size1;j++)
	{

		cout<<arr2[i][j]<<"    ";
	}
	cout<<endl;
}
	cout << endl << endl;
}






void mediumboard()                  //player 1 medium board
{
		system("cls");
	cout << "\n\n\t==>__**BATTLE SHIP**__<==\n\n";
	
	cout<<"\t  ==>__**MEDIUM MODE**__<==\n\n";
	

	cout << "          Hit (X)  ___  Miss (M)" << endl << endl;
	cout << endl<<endl;



for(int i=0;i<size2;i++)
{
	cout<<"      ";
	cout<<arr[i][0];
	for(int j=0;j<size2;j++)
	{

		cout<<arr1[i][j]<<"    ";
	}
	cout<<endl;
}
	cout << endl << endl;
}





void mediumboard1()              //player 2 medium board
{
		system("cls");
	cout << "\n\n\t==>__**BATTLE SHIP**__<==\n\n";
	
	cout<<"\t  ==>__**MEDIUM MODE**__<==\n\n";
	

	cout << "          Hit (X)  ___  Miss (M)" << endl << endl;
	cout << endl<<endl;



for(int i=0;i<size2;i++)
{
	cout<<"      ";
	cout<<arr[i][0];
	for(int j=0;j<size2;j++)
	{

		cout<<arr2[i][j]<<"    ";
	}
	cout<<endl;
}
	cout << endl << endl;
}







void hardboard()             //player 1 hard board
{
		system("cls");
	cout << "\n\n\t==>__**BATTLE SHIP**__<==\n\n";
	
	cout<<"\t  ==>__**HARD MODE**__<==\n\n";
	

	cout << "          Hit (X)  ___  Miss (M)" << endl << endl;
	cout << endl<<endl;



for(int i=0;i<size3;i++)
{
	cout<<"      ";
	cout<<arr[i][0];
	for(int j=0;j<size3;j++)
	{

		cout<<arr1[i][j]<<"    ";
	}
	cout<<endl;
}
	cout << endl << endl;
}






void hardboard1()        //player 2 hard board
{
		system("cls");
	cout << "\n\n\t==>__**BATTLE SHIP**__<==\n\n";
	
	cout<<"\t  ==>__**HARD MODE**__<==\n\n";
	

	cout << "          Hit (X)  ___  Miss (M)" << endl << endl;
	cout << endl<<endl;



for(int i=0;i<size3;i++)
{
	cout<<"      ";
	cout<<arr[i][0];
	for(int j=0;j<size3;j++)
	{

		cout<<arr2[i][j]<<"    ";
	}
	cout<<endl;
}
	cout << endl << endl;
}






void easymode()                //player easy mode function
{
	
		cout << "          ___==>PLAYER  VS  PLAYER<==___" << endl << endl;
	
	
    int n,player,row,col,i;
	
g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "PRESS 1 FOR HEADS AND PRESS 2 FOR TAILS" << endl;
	cin >> n;
    if (n == 1 || n == 2)
	{
	if (toss() == n)
	{
		cout << "CONGRATULATIONS! PLAYER 1 WON THE TOSS" << endl;
		
		player = 1;
	}
	else
	{
		cout << "CONGRATULATIONS! PLAYER 2 WON THE TOSS" << endl;

		player = 2;
	}
}
else
{
	goto g;
}
easyplacement1();
easyplacement2();

do
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(player==1)
	{
		easyboard1();
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr2[row][col]!='*')
		{
			
		if(arrr2[row][col]=='a' || arrr2[row][col]=='b' || arrr2[row][col]=='c' || arrr2[row][col]=='d' || arrr2[row][col]=='e') 
		{
			arrr2[row][col]='*';
			arr2[row][col]='X';
		}
		else if(arrr2[row][col]=='o')
		{
			arrr2[row][col]='*';
			arr2[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	else if(player==2)
	{
		easyboard();
		
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr1[row][col]!='*')
		{
			
		if(arrr1[row][col]=='a' || arrr1[row][col]=='b' || arrr1[row][col]=='c' || arrr1[row][col]=='d' || arrr1[row][col]=='e') 
		{
			arrr1[row][col]='*';
			arr1[row][col]='X';
		}
		else if(arrr1[row][col]=='o')
		{
			arrr1[row][col]='*';
			arr1[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	i = easycheckwin();
	
	player == 1 ? player = 2 : player = 1;
	
}
while (i == -1);
    
    


if (i == 1)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 2 WINS THE GAME <===" << endl;
	p2++;
}
else if(i==0)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 1 WINS THE GAME <==="  << endl;
	p1++;
}





}    







void mediummode()                //player medium mode function
{
	
		cout << "          ___==>PLAYER  VS  PLAYER<==___" << endl << endl;
	
	
    int n,player,row,col,i;
	
g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "PRESS 1 FOR HEADS AND PRESS 2 FOR TAILS" << endl;
	cin >> n;
    if (n == 1 || n == 2)
	{
	if (toss() == n)
	{
		cout << "CONGRATULATIONS! PLAYER 1 WON THE TOSS" << endl;
		
		player = 1;
	}
	else
	{
		cout << "CONGRATULATIONS! PLAYER 2 WON THE TOSS" << endl;

		player = 2;
	}
}
else
{
	goto g;
}
mediumplacement1();
mediumplacement2();
do
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(player==1)
	{
		mediumboard1();
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr2[row][col]!='*')
		{
			
		if(arrr2[row][col]=='a' || arrr2[row][col]=='b' || arrr2[row][col]=='c' || arrr2[row][col]=='d' || arrr2[row][col]=='e') 
		{
			arrr2[row][col]='*';
			arr2[row][col]='X';
		}
		else if(arrr2[row][col]=='o')
		{
			arrr2[row][col]='*';
			arr2[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	else if(player==2)
	{
		mediumboard();
		
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr1[row][col]!='*')
		{
			
		if(arrr1[row][col]=='a' || arrr1[row][col]=='b' || arrr1[row][col]=='c' || arrr1[row][col]=='d' || arrr1[row][col]=='e') 
		{
			arrr1[row][col]='*';
			arr1[row][col]='X';
		}
		else if(arrr1[row][col]=='o')
		{
			arrr1[row][col]='*';
			arr1[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	i = mediumcheckwin();
	
	player == 1 ? player = 2 : player = 1;
	
}
while (i == -1);
    
    


if (i == 1)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 2 WINS THE GAME <===" << endl;
	p2++;
}
else if(i==0)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 1 WINS THE GAME <==="  << endl;
	p1++;
}





}    









void hardmode()                //player hard mode function
{
	
		cout << "          ___==>PLAYER  VS  PLAYER<==___" << endl << endl;
	
	
    int n,player,row,col,i;
	
g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "PRESS 1 FOR HEADS AND PRESS 2 FOR TAILS" << endl;
	cin >> n;
    if (n == 1 || n == 2)
	{
	if (toss() == n)
	{
		cout << "CONGRATULATIONS! PLAYER 1 WON THE TOSS" << endl;
		
		player = 1;
	}
	else
	{
		cout << "CONGRATULATIONS! PLAYER 2 WON THE TOSS" << endl;

		player = 2;
	}
}
else
{
	goto g;
}
hardplacement1();
hardplacement2();
do
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(player==1)
	{
		hardboard1();
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr2[row][col]!='*')
		{
			
		if(arrr2[row][col]=='a' || arrr2[row][col]=='b' || arrr2[row][col]=='c' || arrr2[row][col]=='d' || arrr2[row][col]=='e') 
		{
			arrr2[row][col]='*';
			arr2[row][col]='X';
		}
		else if(arrr2[row][col]=='o')
		{
			arrr2[row][col]='*';
			arr2[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	else if(player==2)
	{
		hardboard();
		
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr1[row][col]!='*')
		{
			
		if(arrr1[row][col]=='a' || arrr1[row][col]=='b' || arrr1[row][col]=='c' || arrr1[row][col]=='d' || arrr1[row][col]=='e') 
		{
			arrr1[row][col]='*';
			arr1[row][col]='X';
		}
		else if(arrr1[row][col]=='o')
		{
			arrr1[row][col]='*';
			arr1[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	i = hardcheckwin();
	
	player == 1 ? player = 2 : player = 1;
	
}
while (i == -1);
    
    


if (i == 1)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 2 WINS THE GAME <===" << endl;
	p2++;
}
else if(i==0)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 1 WINS THE GAME <==="  << endl;
	p1++;
}





}    








void easy_mode()                //computer easy mode function
{
	
		cout << "          ___==>PLAYER  VS  COMPUTER<==___" << endl << endl;
	
	
    int n,player,row,col,i;
	
g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "PRESS 1 FOR HEADS AND PRESS 2 FOR TAILS" << endl;
	cin >> n;
    if (n == 1 || n == 2)
	{
	if (toss() == n)
	{
		cout << "CONGRATULATIONS! PLAYER 1 WON THE TOSS" << endl;
		
		player = 1;
	}
	else
	{
		cout << "COMPUTER WON THE TOSS" << endl;

		player = 2;
	}
}
else
{
	goto g;
}
easyplacement1();
easyplacement3();
do
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(player==1)
	{
		easyboard1();
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr2[row][col]!='*')
		{
			
		if(arrr2[row][col]=='a' || arrr2[row][col]=='b' || arrr2[row][col]=='c' || arrr2[row][col]=='d' || arrr2[row][col]=='e') 
		{
			arrr2[row][col]='*';
			arr2[row][col]='X';
		}
		else if(arrr2[row][col]=='o')
		{
			arrr2[row][col]='*';
			arr2[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	else if(player==2)
	{
		easyboard();
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr1[row][col]!='*')
		{
			
		if(arrr1[row][col]=='a' || arrr1[row][col]=='b' || arrr1[row][col]=='c' || arrr1[row][col]=='d' || arrr1[row][col]=='e') 
		{
			arrr1[row][col]='*';
			arr1[row][col]='X';
		}
		else if(arrr1[row][col]=='o')
		{
			arrr1[row][col]='*';
			arr1[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	i = easycheckwin();
	
	player == 1 ? player = 2 : player = 1;
	
}
while (i == -1);
    
    


if (i == 1)
{
	cout << "\n===>\a CONGRATULATIONS! COMPUTER WINS THE GAME <===" << endl;
	comp++;
}
else if(i==0)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 1 WINS THE GAME <==="  << endl;
	p1++;
}





}    







void medium_mode()                //computer medium mode function
{
	
		cout << "          ___==>PLAYER  VS  COMPUTER<==___" << endl << endl;
	
	
    int n,player,row,col,i;
	
g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "PRESS 1 FOR HEADS AND PRESS 2 FOR TAILS" << endl;
	cin >> n;
    if (n == 1 || n == 2)
	{
	if (toss() == n)
	{
		cout << "CONGRATULATIONS! PLAYER 1 WON THE TOSS" << endl;
		
		player = 1;
	}
	else
	{
		cout << "COMPUTER WON THE TOSS" << endl;

		player = 2;
	}
}
else
{
	goto g;
}
mediumplacement1();
mediumplacement3();
do
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(player==1)
	{
		mediumboard1();
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr2[row][col]!='*')
		{
			
		if(arrr2[row][col]=='a' || arrr2[row][col]=='b' || arrr2[row][col]=='c' || arrr2[row][col]=='d' || arrr2[row][col]=='e') 
		{
			arrr2[row][col]='*';
			arr2[row][col]='X';
		}
		else if(arrr2[row][col]=='o')
		{
			arrr2[row][col]='*';
			arr2[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	else if(player==2)
	{
		mediumboard();
		
		
		row=rand()%12+1;
		col=rand()%12+64;
		
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr1[row][col]!='*')
		{
			
		if(arrr1[row][col]=='a' || arrr1[row][col]=='b' || arrr1[row][col]=='c' || arrr1[row][col]=='d' || arrr1[row][col]=='e') 
		{
			arrr1[row][col]='*';
			arr1[row][col]='X';
		}
		else if(arrr1[row][col]=='o')
		{
			arrr1[row][col]='*';
			arr1[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	i = mediumcheckwin();
	
	player == 1 ? player = 2 : player = 1;
	
}
while (i == -1);
    
    


if (i == 1)
{
	cout << "\n===>\a CONGRATULATIONS! COMPUTER WINS THE GAME <===" << endl;
	comp++;
}
else if(i==0)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 1 WINS THE GAME <==="  << endl;
	p1++;
}





}    






void hard_mode()                //computer hard mode function
{
	
		cout << "          ___==>PLAYER  VS  COMPUTER<==___" << endl << endl;
	
	
    int n,player,row,col,i;
	
g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "PRESS 1 FOR HEADS AND PRESS 2 FOR TAILS" << endl;
	cin >> n;
    if (n == 1 || n == 2)
	{
	if (toss() == n)
	{
		cout << "CONGRATULATIONS! PLAYER 1 WON THE TOSS" << endl;
		
		player = 1;
	}
	else
	{
		cout << "COMPUTER WON THE TOSS" << endl;

		player = 2;
	}
}
else
{
	goto g;
}
hardplacement1();
hardplacement3();
do
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(player==1)
	{
		hardboard1();
		
		cout<<"Player "<<player<<"! Enter where you want to hit in the form of 1C or 5A "<<endl;
		cout<<"Enter row: "<<endl;
		cin>>row;
		cout<<"Enter column: "<<endl;
		cin>>col;
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr2[row][col]!='*')
		{
			
		if(arrr2[row][col]=='a' || arrr2[row][col]=='b' || arrr2[row][col]=='c' || arrr2[row][col]=='d' || arrr2[row][col]=='e') 
		{
			arrr2[row][col]='*';
			arr2[row][col]='X';
		}
		else if(arrr2[row][col]=='o')
		{
			arrr2[row][col]='*';
			arr2[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	else if(player==2)
	{
		hardboard();
		
		
		row=rand()%8+1;
		col=rand()%8+64;
		
		col=static_cast<int>(col);
		if(col<=122 && col>=97)
		{
			col=col-96;
		}
		else
		{
			col=col-64;
		}
		
		
		if(arrr1[row][col]!='*')
		{
			
		if(arrr1[row][col]=='a' || arrr1[row][col]=='b' || arrr1[row][col]=='c' || arrr1[row][col]=='d' || arrr1[row][col]=='e') 
		{
			arrr1[row][col]='*';
			arr1[row][col]='X';
		}
		else if(arrr1[row][col]=='o')
		{
			arrr1[row][col]='*';
			arr1[row][col]='M';
		}
		
	    }
	    else
	    {
	    	cout<<"\nEntered move is Invalid or you have hit that place before......!!!"<<endl;
	    	player--;
		}
	}
	
	i = hardcheckwin();
	
	player == 1 ? player = 2 : player = 1;
	
}
while (i == -1);
    
    


if (i == 1)
{
	cout << "\n===>\a CONGRATULATIONS! COMPUTER WINS THE GAME <===" << endl;
	comp++;
}
else if(i==0)
{
	cout << "\n===>\a CONGRATULATIONS! PLAYER 1 WINS THE GAME <==="  << endl;
	p1++;
}





}    




void playerVsplayer()
{
	int a;
	
	cout << "          ___==>PLAYER  VS  PLAYER<==___" << endl << endl;
	
	cout<<  "             ==>SELECT MODE<==    "<<endl << endl;

    cout<<  "             1). Easy"<<endl;
    cout<<  "             2). Medium"<<endl;
    cout<<  "             3). Hard"<<endl;
	
	cin>>a;
	
	g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(a==1)
	{
		easymode();      //player easy mode
	}
	
	else if(a==2)
	{
		mediummode();    //player medium mode
	}
	
	else if(a==3)
	{
		hardmode();       //player hard mode
	}
	
	else
	{
		goto g;
	}
	
}




void playerVscomputer()        //player vs computer function
{
	int a;
	
	cout << "          ___==>PLAYER  VS  COMPUTER<==___" << endl << endl;
	
	cout<<  "             ==>SELECT MODE<==    "<<endl << endl;

    cout<<  "             1). Easy"<<endl;
    cout<<  "             2). Medium"<<endl;
    cout<<  "             3). Hard"<<endl;
	
	cin>>a;
	
	
	g:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	
	if(a==1)
	{
		easy_mode();     //computer easy mode
	}
	
	else if(a==2)
	{
		medium_mode();    //computer medium mode
	}
	
	else if(a==3)
	{
		hard_mode();      //computer hard mode
	}
	
	else
	{
		goto g;
	}
	
}



void playgame()              //play game function
{
	int n;
p:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cout << "          1). Player vs Player          " << endl<<endl;
	cout << "          2). Player vs Computer        " << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		playerVsplayer();
		break;
	case 2:
		playerVscomputer();
		break;
	default:
		cout << "Invalid Input" << endl;
		goto p;
	}
}




void score()
{
	ofstream outfile;
	outfile.open("SCORE",ios::app);
	if(outfile.is_open())
	{
	cout << endl << endl;
	cout <<   " Games won by player 1 : " << p1 << endl;
	outfile<< " Games won by player 1 : " << p1 << endl;
	cout <<   " Games won by player 2 : " << p2 << endl;
	outfile<< " Games won by player 2 : " << p2 << endl;
	cout <<   " Games won by computer : " << comp << endl;
	outfile<< " Games won by computer : " << comp << endl;
	cout << endl << endl;
	}
}








void main_menu(int a)                 //main menu function
{
		
switch (a)

		{
			
		case 1:
			{
			  playgame();
			  break;
		    }  
			
		case 2:
			{
			  instructions();
			  break;
		    }
			
		case 3:
			{
			  credits();
			  break;
		    }
			
		case 4:
			{
			  score();
			  break;
		    }
			
		case 5:
			{
			  exit(0);
			  break;
		    }
		    
		default:
			{
			cout << "==>INVALID<==" << endl;
		    }
		    
		}
	}



int main()                          //main game
{
	
	char ch1='A';    //enteries
	
	for(int i=1;i<size3;i++)
{
	arr[i][0]=i;
}


for(int i=1;i<size3;i++)
{
	arr1[0][i]=ch1;
	arr2[0][i]=ch1;
	arrr1[0][i]=ch1;
	arrr2[0][i]=ch1;
	ch1++;
}


for(int i=1;i<size3;i++)
{
	for(int j=1;j<size3;j++)
	{
		arr1[i][j]='o';
		arr2[i][j]='o';
		arrr1[i][j]='o';
		arrr2[i][j]='o';
	}
}

	
	
	
	
	m:
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767,'\n');
	}
	
		cout << "==> Press 1 to Play Game and Press -1 to Exit <==" << endl;
		
		int num;
		
		cin >> num;

		if (num == 1)
		{
			while (num != -1)
			{
				cout << endl;
				k:
				cout << " 1): Play Game." << endl;
				cout << " 2): Instructions." << endl;
				cout << " 3): Credits." << endl;
				cout << " 4): Score." << endl;
				cout << " 5): Exit." << endl;
				cout << endl;

				cin >> num;
				
				if (num == 1 || num == 2 || num == 3 || num == 4 || num == 5)
				{
					
					main_menu(num);
					
					
				}
					
				else
				{
					cout << "\n\nPress 1 to play game and Press -1 to exit" << endl;
					cin >> num;
				}
			}
		}
		
		
		else if (num != -1)
		{
			goto m;
        }
        
        
        
        
		system("pause>0");
}
