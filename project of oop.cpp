#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include <string>
#include<fstream>
using namespace std;
//file handling//
class Demo{
public:
	     char Name[50];
	public:
	void getdata(){
		cout<<"Enter your Name:";
			cin.ignore();
		cin.getline(Name,50);
		}
	void storedata(){
		ofstream fout;
		fout.open("result1.txt",ios::app|ios::binary);
		fout.write((char*)this,sizeof(*this));
		fout.close();}
		void viewdata(){
			ifstream fin;
			fin.open("result1.txt",ios::app|ios::binary);
			if(!fin)
			cout<<"\nfile not found";
			else{
				fin.read((char*)this,sizeof(*this));
				while(!fin.eof()){
					cout<<"Last player played:"<<"  "<<Name<<endl;
					fin.read((char*)this,sizeof(*this));
				}
			}
			fin.close();	}};
			
//input validation//
bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
      return false; 
   return true;}
   
			//variables declerations//
class Casino: public  Demo{
public:	
int total_amount;
char fullname[50];
string amount;
string bidding_amount;
int gussing_number;
string gus_number;
int random;
int random_color;
int color;
string clor;
int winningamount;
int total_Remaining_amount;
int bidding_amount1;
int* winning_amount=&winningamount;
	char choice;

Casino(){
	cout<<"Total amout you have=$";
cin>>amount;
while(isNumeric(amount) != true){
   cout << "Your input is wrong please re-enter input in a number=$";
   cin >> amount;
}
      total_amount = stoi(amount);
      cout << "\n######################################################################################################";
		cout << "\n LL        EEEEEE       TTTTTT     SSSSSS           pppppp     LL               AA       YY    YY     ";
		cout << "\n LL        EE             TT       SS               pp   pp    LL             AA  AA      YY  YY      ";
		cout << "\n LL        EE             TT       SS               pp  pp     LL            AA    AA       YY        ";
		cout << "\n LL        EEEEEE         TT       SSSSSS           pppp       LL           AAAAAAAAAA      YY        ";
		cout << "\n LL        EE             TT           SS           pp         LL          AA        AA     YY        ";
		cout << "\n LL        EE             TT           SS           PP         LL         AA          AA    YY        ";
		cout << "\n LLLLLL    EEEEEE         TT       SSSSSS           pp         LLLLLL    AA            AA   YY        ";
		cout << "\n#################################################################################################### \n";


system("color 9F");
cout<<"Enter Bidding Amount=$";
cin>>bidding_amount;

while(isNumeric(bidding_amount) != true){
   cout << "Your input is wrong please re-enter input in a number=$";
   cin.ignore();
   cin >> bidding_amount;
   }

     bidding_amount1 = stoi(bidding_amount);
    //  cout<<"your input is "<<bidding_amount1;//

										//Checking of amounts//

for(int i=0; i <=bidding_amount.length();i++){
if(bidding_amount1 <= total_amount && bidding_amount1 > 0){}
else{
cout<<"Amount is not valid it must be a number"<<endl<<"Your balance is=$"<<total_amount<<endl;
									//1:Amount checking//
									
cout<<"Enter valid amount=$";
cin>>bidding_amount1;}}
//changing looop//
system("color 4E");}
void numbergussing(){
	cout<<"Gusse the number(1-10)=";
cin>>gus_number;

while(isNumeric(gus_number) != true){
   cout << "your input is wrong please re-enter input in a number(1-10)=";
   cin >> gus_number;
}
      gussing_number = stoi(gus_number);


for(int i=0;i<=gussing_number;i++){
if(gussing_number>0 &&gussing_number<=10)
{
	random=rand()%10+1;
}
else{
	cout<<"Enter valid number(1-10)=";
	 cin>>gus_number;
}
while(isNumeric(gus_number) != true){
   cout << "your input is wrong please re-enter input in a number(1-10)=";
   cin >> gus_number;
}
      gussing_number = stoi(gus_number);

}

system("color 04");
}
void colorgussing(){
								//3:color gussing//
cout<<"Guess color(RED=1/BLACK=2)=";
cin>>clor;

while(isNumeric(clor) != true){
   cout << "Your input is wrong please re-enter input in a number(RED=1/BLACK=2)=";
   cin >> clor;
}
      color = stoi(clor);

random_color=rand()%2+1;
for(int i=0;i<=color;i++)
{if(color==1||color==2){}
else{
	cout<<"Enter valid number(RED=1/BLACK=2)";
	cin>>clor;
color = stoi(clor);	}}
system("color A0");
cout<<"Enter the name you wnat to show After WINNING:";
cin.ignore();
cin.get(fullname,50);
}
void working(){
						//Working//
if(random==gussing_number&&color==random_color)
	{
								//1:colornum checking//
	if(random_color==1){
	winningamount=bidding_amount1*20;
	total_Remaining_amount=winningamount+total_amount;
	system("color F4");
	cout<<"\n################################################################";
	cout<<"\n                  HURRAH!YOU WIN"<<"("<<fullname<<")"<<"                 \n";
	cout<<"\n################################################################\n";
	cout<<fullname<<"amount was=$"<<total_amount<<endl;
	cout<<"Your Bidding Amount was=$"<<bidding_amount1<<endl;
	cout<<"Your winning amount=$"<<*winning_amount<<endl;
	cout<<"Your remaining total Amount=$"<<total_Remaining_amount<<endl;
	cout<<"You won by both COLOR and NUMBER"<<endl;}
	else
	{winningamount=bidding_amount1*15;
	total_Remaining_amount=winningamount+total_amount;
	system("color F0");
	cout<<"\n################################################################";
	cout<<"\n                  HURRAH!YOU WIN "<<"("<<fullname<<")"<<"          \n";
	cout<<"\n################################################################\n";
	cout<<"Your amount was=$"<<total_amount<<endl;
	cout<<"Your Bidding Amount was=$"<<bidding_amount1<<endl;
	cout<<"Your winning amount=$"<<*winning_amount<<endl;
		cout<<"Your remaining total Amount=$"<<total_Remaining_amount<<endl;
	}
		}
								//2:number checking//
	else if(random==gussing_number&&random_color!=color){
		winningamount=bidding_amount1*10;
	total_Remaining_amount=winningamount+total_amount;
	system("color E0");
	cout<<"\n################################################################";
	cout<<"\n                  HURRAH!YOU WIN"<<"("<<fullname<<")"<<"                 \n";
	cout<<"\n################################################################\n";
	cout<<"Your amount was=$"<<total_amount<<endl;
	cout<<"Your Bidding Amount was=$"<<bidding_amount1<<endl;
	cout<<"Your winning amount=$"<<*winning_amount<<endl;
	cout<<"you won by Number gussing"<<endl;
	cout<<"The color was"<<random_color<<endl;
	cout<<"Your remaining total Amount=$"<<total_Remaining_amount<<endl;}
	else if(random!=gussing_number&&random_color==color){
		if (random_color==1)
		{winningamount=bidding_amount1*5;
	total_Remaining_amount=winningamount+total_amount;
		system("color F4");
	cout<<"\n################################################################";
	cout<<"\n                  HURRAH!YOU WIN"<<fullname<<"                 \n";
	cout<<"\n################################################################\n";
	cout<<"Your amount was=$"<<total_amount<<endl;
	cout<<"Your Bidding Amount was=$"<<bidding_amount1<<endl;
	cout<<"Your winning amount=$"<<*winning_amount<<endl;
		cout<<"Your remaining total Amount=$"<<total_Remaining_amount<<endl;
		cout<<"You WON by COLORGUSSING"<<endl;
	cout<<"The Number was="<<random<<endl;}
		else
		{winningamount=bidding_amount1*3;
	total_Remaining_amount=winningamount+total_amount;
		system("color F0");
	cout<<"\n################################################################";
	cout<<"\n                  HURRAH!YOU WIN"<<"("<<fullname<<")"<<"   	            \n";
	cout<<"\n################################################################\n";
	cout<<"Your amount was=$"<<total_amount<<endl;
	cout<<"Your Bidding Amount was=$"<<bidding_amount1<<endl;
	cout<<"Your winning amount=$"<<*winning_amount<<endl;
		cout<<"Your remaining total Amount=$"<<total_Remaining_amount<<endl;
		cout<<"You WON by COLORGUSSING"<<endl;
	cout<<"The Number was="<<random<<endl;}
		}

	else 
	{cout<<"\n################################################################";
	cout<<"\n                  OOPS!YOU LOOSE" <<"("<<fullname<<")"<<"           \n";
	cout<<"\n################################################################\n";
	total_Remaining_amount=total_amount-bidding_amount1;
	cout<<"Your remaining amount=$"<<total_Remaining_amount<<endl;
	cout<<"The number was="<<random<<endl;
	cout<<"The color was="<<random_color<<endl;
	}
}

//game rules//
int function(){
	    cout<<"\n############################################################################################";
		cout << "\n                            ..... GAME RULES .....                                          ";
		cout << "\n############################################################################################\n";
		cout << "\n1: choose number for bid between (1-10).";
		cout << "\n2: You also choose color (Red and Black)<< OPTIONALLY >>";
	    cout << "\n3: After execute if you guess the number only you won 10 times of BID amount.\n";
		cout << "\n  			 ..... (RED_color) .....				\n";
		cout << "\n1: If you choose  both number and color.\n2: After execute if the number and color both are same you will win 20times of bidding amount.";
 		cout << "\n3: If you guess the color only you won 5 times of bidding amount.\n";
		cout << "\n  			 ..... (BLACK_color) .....				\n";
		cout << "\n1: If you choose  both number and color.\n2: After execute if the number and color both are same you will win 15 times of bidding amount."; 
		cout << "\n3: If you guess the color only you won 3 times of bidding amount.\n";
return 0;};
int main() {
	srand(time(0));
		char choice;
		Demo obj;
							//Program starting//
		do{
							//color changing effect//
				system("Color  E0");
	
					  				//Display logo//
	cout<<"\n############################################################################################";
 cout<<"\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
 cout<<"\n CC          A  A      SS             III     NN N   NN   OO      OO    ";
 cout<<"\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
 cout<<"\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
 cout<<"\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
 cout<<"\n############################################################################################\n";

obj.viewdata();
obj.getdata();
obj.storedata();
	Casino c1;
c1.numbergussing();
c1.colorgussing();
c1.working();
c1.function();
	cout<<"If you want to play CASINO GUSSING GAME the enter(y/n)=";
	cin>>choice;
		system("cls");
		system("color F0");}
	while(choice=='y'||choice=='Y');
cout<<"\n				...GAMEOVER...				\n";
return 0;
}};
