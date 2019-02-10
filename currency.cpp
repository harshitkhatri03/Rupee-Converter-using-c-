#include<iostream>
using namespace std;

int main()
{
	double Rupees;
	double US_Dolars,Euro,Pound,American_Dollar,Yen,Cannadian_Dollar;
	cout<<"Enter Amount(in Rupee) To Be Converted"<<endl;
	cin>>Rupees;
	
	int n;
	cout<<"Enter Currency In Which You Want To Convert(usd,euro,pound,american_dollar,yen,cannadian_dollar)"<<endl;
	cout<<"Press 1 for USD"<<endl;
		cout<<"Press 2 for Euro"<<endl;
			cout<<"Press 3 for Pound"<<endl;
				cout<<"Press 4 for American Dollar"<<endl;
				cout<<"Press 5 for Yen"<<endl;
				cout<<"Press 6 for Cannadian Dollar"<<endl;
               cin>>n;
	
	switch(n)
	{
		case 1:
			{
				US_Dolars=Rupees*71.18;
				cout<<US_Dolars<<" US Dollars "<<endl;
				break;
			}
			case 2:
				{
					Euro=Rupees*80.57;
					cout<<Euro<<" Euros "<<endl;
					break;
				}
				case 3:
					{
						Pound=Rupees*92.08;
						cout<<Pound<<" Pounds "<<endl;
						break;
					}
					case 4:
						{
							American_Dollar=Rupees*50.47;
							cout<<American_Dollar<<" American Dollar "<<endl;
							break;
						}
						case 5:
							{
								Yen=Rupees*0.65;
								cout<<Yen<<" Japaneese Yen "<<endl;
								break;
								
							}
							case 6:
								{
									Cannadian_Dollar=Rupees*53.60;
									cout<<Cannadian_Dollar<<" Cannadian Dollar "<<endl;
									break;
								}
							
	}
	return 0;
}
