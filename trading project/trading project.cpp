#include <iostream>

using namespace std;
int main() {
    string produc;
	float balance=100000;
	cout<<"KARIM TRADING APP.....HOUSE WHERE QUALITY ELECTRICAL HOME APPLIANCES ARE ..."<<endl;
	cout<<"WE HAVE BLENDERS,TOASTERS,MICROWAVE,RICE COOKER,ELECTRICAL STOVES,DISH WASHER,AIR CONDITIONS,TELEVISION,SPEAKERS,IRON,FAN,FRIDGE."<<endl;
	string name,email,pas;
	cout<<"........................CREATE ACCOUNT.................."<<endl;
	cout<<"                Enter your name"<<endl;
   getline(cin,name);
	cout<<"                 Enter password"<<endl;
	cin>>pas;
	cout<<"                 email"<<endl;
	cin>>email;
	cout<<"         ..........."<<endl;
	cout<<"Account name:|"<<name<<"|"<<endl<<"Email:"<<email<<endl;
	
	
while(true){

int account;	
 cout<<"              ............"<<endl;
 cout<<"               1.deposit"<<endl;
 cout<<"               2.balance"<<endl;
 cout<<"               3.buy "<<endl;
 cout<<"               4.sell "<<endl;
  cout<<"               5.exit"<<endl;
 
 cin>>account;
 
 switch(account){
 	case 1:
 		int number,amount,confirm;
 		
 		cout<<"        enter amount"<<endl;
 		cin>>amount;
 		cout<<"         Are you sure to deposit:"<<amount<<endl;
 		cout<<"1.Yes"<<endl;
 		cout<<"2.No"<<endl;
 		cin>>confirm;
 	switch(confirm){
 		case 1:
 			cout<<"You have successfully deposited:"<<amount<<endl;
 			break;
 		case 2:
		 cout<<"transaction cancelled"<<endl;	
		 break;
		 }
		  
		 break;
		 
	case 2:
		
		
		 balance=balance + amount;
		cout<<"          your balance is:"<<"$"<<balance<<endl;
      
 		break;
 		

 	case 3:
	 	int product;
	 	cout<<"PRODUCTS AVAILABLE"<<endl;
	 	cout<<"1.BLENDER=$400"<<endl;
	 	cout<<"2.TOASTER=$500"<<endl;
	 	cout<<"3.MICROWAVE=$500"<<endl;
	 	cout<<"4.RICE COOKER=$300"<<endl;
	 	cout<<"5.KETTLE=$100"<<endl;
	 	cout<<"6.FRIDGE=$900"<<endl;
	 	cout<<"7.IRON=$150"<<endl;
        cout<<"8.AIR CONDITION=$1000"<<endl;
		cout<<"9.WASHING MACHINE=$11000"<<endl;
		cout<<"10.TELEVISION=$1000"<<endl;
		cout<<"11.FAN=$200"<<endl;
	 cin>>product;
 switch(product){
 	case 1:
 		int quantity;
 		int sum;
 	cout<<"          enter quantity"<<endl;
 	cin>>quantity;
 	sum=quantity*400;
 	cout<<"         IT COST :$"<<sum<<endl;
 	if(balance >= sum){
 		balance-=sum;
 		cout<<"           PURCHASE DONE..READY FOR DELIVERY.YOUR BALANCE IS:$"<<balance<<endl;
	 } else {
	 	cout<<"          NOT ENOUGH FUND"<<endl;
	 }
	 break;
case 2:
	int quantit;
	int su;
 cout<<"                enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*500;
  cout<<"               IT COST"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"             PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	
  	cout<<"             NOT ENOUGH FUND"<<endl;
  }	break;
case 3:
	
	
 cout<<"                enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*500;
  cout<<"               IT COST:"<<su<<endl;
  if(balance >=su){
  	balance-=su;
  	cout<<"             PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"             NOT ENOUGH FUND"<<endl;
  }	break;
  
  case 4:

	
 cout<<"               enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*300;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"            PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"            NOT ENOUGH FUND"<<endl;
  }	break;  	
  
case 5:
 cout<<"              enter quantity"<<endl;		
  cin>>quantit;
  
  su=quantit*100;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"           PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"           NOT ENOUGH FUND"<<endl;
  }	break;
  case 6:
  	
	
 cout<<"              enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*900;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"           PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"           NOT ENOUGH FUND"<<endl;
  }	break;
  case 7:
  	
	
 cout<<"              enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*150;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"          PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"          NOT ENOUGH FUND"<<endl;
  }	break;
  case 8:
  	
	
 cout<<"            enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*1000;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"        PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"        NOT ENOUGH FUND"<<endl;
  }	break;
  case 9:
  	
	
 cout<<"           enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*11000;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance -= su;
  	cout<<"        PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"        NOT ENOUGH FUND"<<endl;
  }	break;
  
	case 10:
 cout<<"           enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*1000;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance -= sum;
  	cout<<"       PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"       NOT ENOUGH FUND"<<endl;
  }	break;
  case 11:
  	
	
 cout<<"         enter quantity"<<endl;		
  cin>>quantit;
  su=quantit*200;
  cout<<"IT COST :$"<<su<<endl;
  if(balance >= su){
  	balance-=su;
  	cout<<"      PURCHASE DONE...READY FOR DELIVERY.YOUR BALANCE:$"<<balance<<endl;
  }  else{
  	cout<<"      NOT ENOUGH FUND"<<endl;
  }	
}
break;
case 4:
  
   
  int price;
  cout<<"            WRITE THE NAME OF YOUR PRODUCT"<<endl;
  cin>>produc; 
 cout<<"             enter it price"<<endl;
 cin>>price;
 
 
 cout<<"              your item  is available for sale at a price of :"<<"$"<<price<<endl;
 cout<<product;		
 	break;
 	
 case  5:
 	cout<<"exit"<<endl;
 	return 0;
 
 
 
 
 
 
 	
 }
 
}
	
	
	
	
	
	return 0;
}
