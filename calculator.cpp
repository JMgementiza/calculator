#include<iostream>
using namespace std;

int main()
{
	char ans;
	char op;
	int num1, num2;
	
	cout<<"Enter operator either + or - or * or  /: ";
	cin>>op;
	
	cout<<"Enter first number: ";
	cin>> num1;
	
	cout<<"Enter second number: ";
	cin>> num2;
	
	switch (op)
	{
		case  '+':
			cout << num1 + num2;
			break;
			
			case  '-':
				cout << num1 - num2;
				break;
				
				case  '*':
					cout << num1 * num2;
					break;
					
					case  '/':
						cout << num1 / num2;
						break;
						
						default:
							cout << "ERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!! Operator is incorrect.";
							break;
	}
	
	do{
		cout<<"\nDo you want to try again?\nPress (Y/N)";
		cin>> ans;
	}
	while((ans !='Y')&&(ans !='N')&&(ans !='y')&&(ans !='n'));
	
	if (ans>1){
		return main();
	}		
}
