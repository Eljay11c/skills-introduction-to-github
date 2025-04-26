#include <iostream>
using namespace std;
class AMS{
	int PassportId, accBalance;
	string username, password, location;
	public:
		void getRegister(int Pid, int acbal, string loc, string user, string pass){
			PassportId = Pid, accBalance = acbal, location = loc, username = user, password = pass;	
		}
		void Dashboard(){                          ///Dashboard
	int choice, payment, change;
	cout<<"[1]---BOOKING"<<endl;
	cout<<"[2]---Exit"<<endl;
	cout<<"Do you want to book a flight: ";
		cin>>choice;
		if(choice == 1){
			int des;
			cout<<"BOOKING\n\n\n"<<endl;
			cout<<"[1]---MIddle East\t\t\t\t\t2000 Pesos"<<endl;
			cout<<"[2]---Iraq \t\t\t\t\t\t2500 Pesos"<<endl;
			cout<<"[3]---North Korea\t\t\t\t\t3000 Pesos\n\n\n"<<endl;
			cout<<"Enter your Destination: ";
				cin>>des;
				if(des == 1){
					int changeM = 2000;
					cout<<"Enter your Payment: "; /////////////PAYMENT
					cin>>payment;
					if(payment == 2000 && accBalance > payment || accBalance == payment){
					cout<<"RECEIPT"<<endl<<"Middle East"<<endl;
					cout<<"Passport Id: "<<PassportId<<endl;
			cout<<"Account Balance: "<<accBalance - payment<<endl;
			cout<<"Current Location: "<<location<<endl;
			cout<<"Username: "<<username<<endl;
			cout<<"Password: "<<password<<endl;
					}///payment
					if(accBalance > payment && payment < 2000){
						cout<<"your payment is not enough";	
					}
					if(accBalance < payment && payment >= 2000){
						cout<<"Your payment is more than your balance";
					}
				}
				if(des == 2){////destination2
					cout<<"Enter your Payment: "; /////////////PAYMENT
					cin>>payment;
					if(payment == 2500 && accBalance > payment || accBalance == payment){
					cout<<"RECEIPT"<<endl<<"Iraq"<<endl;
					cout<<"Passport Id: "<<PassportId<<endl;
			cout<<"Account Balance: "<<accBalance - payment<<endl;
			cout<<"Current Location: "<<location<<endl;
			cout<<"Username: "<<username<<endl;
			cout<<"Password: "<<password<<endl;
					}///payment
					if(accBalance > payment && payment < 2500){
						cout<<"your payment is not enough";	
					}
					if(accBalance < payment && payment >= 2500){
						cout<<"Your payment is more than your balance";
					}
				}
				if(des == 3){                       ////destination3
					cout<<"Enter your Payment: "; /////////////PAYMENT
					cin>>payment;
					if(payment == 3000 && accBalance > payment || accBalance == payment){
					cout<<"RECEIPT"<<endl<<"North Korea"<<endl;
					cout<<"Passport Id: "<<PassportId<<endl;
			cout<<"Account Balance: "<<accBalance - payment<<endl;
			cout<<"Current Location: "<<location<<endl;
			cout<<"Username: "<<username<<endl;
			cout<<"Password: "<<password<<endl;
					}///payment
					if(accBalance > payment && payment < 3000){
						cout<<"your payment is not enough";	
					}
					if(accBalance < payment && payment >= 3000){
						cout<<"Your payment is more than your balance";
					}	
				}
				}//////BOOKING
		if(choice == 2){
			system("cls");
			cout<<"salamat niggel";
		}
}
};
int main(){
	AMS sys;
	int P, A;
	string U, Pa, L;
	cout<<"Enter passport ID: ";
	cin>>P;
	cout<<"Enter Account Balance: ";
	cin>>A;
	cout<<"Enter Current Location: ";
	cin>>L;
	cout<<"Enter Username: ";
	getline(cin>> ws, U);
	cout<<"Enter Password: ";
	getline(cin>> ws, Pa);
	sys.getRegister(P, A, L, U, Pa);
	sys.Dashboard();
	return 0;
}
