//project vehicle parking system**********************


#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int u_input;
	int amount=0,count=0;
	int r=0;
	int c=0;
	int b=0;
	
	
		cout<<"************************************************************"<<endl;
		//menu
	while(true){
			
	cout<<"press 1 for rickshaw"<<endl;
	cout<<"press 2 for car"<<endl;
	cout<<"press 3 for bus"<<endl;
	cout<<"press 4 to show the record"<<endl;
	cout<<"press 5 to delete the record"<<endl;
	cout<<"***************************************************"<<endl;
	cin>>u_input;
	
	//enter 1 for rickshaw
	
	if(u_input==1){
		//apply limmit for rickshaw
		
		if(count<=50){
		r=r+1;
		//price of rickshaw is 100
		amount= amount+100;
		count= count+1;
		
		//greater than 50 rickshaw than message
	}
	else
		cout<<"no more rickshaws, parking is full"<<endl;
}

//enter 2 for cars

	else if(u_input==2){
		//apply limit for cars
		
		if(count<=30){
		c=c+1;
		
		//price of car is 200
		amount =amount+200;
		count= count+1;
	}
	
	//greater than 30 cars than message
	
	else
		cout<<"no more cars, parking is full"<<endl;
	}
	
	//enter 3 for bus
	
	else if(u_input==3){
		
		//apply limit for buses
		
		if(count<=25){
			b=b+1;
			
			//price of bus is 300
			
		amount=amount+300;
		count= count+1;
}

//greater than 25 bus than message
	else
		cout<<"no more bus,parking is full";
	}
	
	//enter 4 for checking the whole record of vehicles
	else if(u_input==4){
		cout<<"the total amount ="<<amount<<endl;
		cout<<"the total number of vehicle parked ="<<count<<endl;
		cout<<"the total number of rickshaw parked="<<r<<endl;
		cout<<"total number of car parked ="<<c<<endl;
		cout<<"total number of bus parked ="<<b<<endl;
		cout<<"**************************************"<<endl;
		
	}
	
	//enter 5 for deleting the record
	
	
	else if(u_input==5){
		amount=0;
		count=0;
		//enter r for rickshaws,c for cars and b for buses
		
		r=0;
		c=0;
		b=0;
		cout<<"**************************************************"<<endl;
		//after press the 5 button message is that
		
		cout<<"RECORD DELETEd"<<endl;
		cout<<"****************************************"<<endl;

		
	}
	
	//press another number greater than 5 than  message is that
	
	else{
		cout<<"invalid number"<<endl;
	}
}


	return 0;
	getch();
	
	//project complete********************
	
	
	
	

}
