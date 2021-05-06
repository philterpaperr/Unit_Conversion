#include<stdio.h>

float KmToMiles(float val){
	float res=val*0.621371;
	return res;
}

float InToFoot(float val){
	float res=val*0.0833333;
	return res;
}

float CmToIn(float val){
	float res=val*0.393701;
	return res;
}

float PdToKg(float val){
	float res=val*0.453592;
	return res;
}

float InToM(float val){
	float res=val*0.0254;
	return res;
}


int main(){
	
	int n;
	float val,res;
	int x=1;
	while(x>0){
		
		printf("\nPress 1 for Kilometer to Miles \n");
		printf("Press 2 for Inches to Foot \n");
		printf("Press 3 for Centimeter to Inches \n");
		printf("Press 4 for Pounds to Kilograms \n");
		printf("Press 5 for Inches to Meters \n");
	
		printf("\nEnter your choice: ");
		scanf("%d",&n);
	
		printf("Enter the value: ");
		scanf("%f",&val);
	
		if(n==1){
			printf("%.2f Kilometers is: %.2f Miles\n",val,KmToMiles(val));
		}
		else if(n==2){
			printf("%.2f Inches is: %.2f Feet\n",val,InToFoot(val));
		}
		else if(n==3){
			printf("%.2f Centimeter is: %.2f Inches\n",val,CmToIn(val));
		}
		else if(n==4){
			printf("%.2f Pounds is: %.2f Kilograms\n",val,PdToKg(val));
		}
		else if(n==5){
			printf("%.2f Inches is: %.2f Meters \n",val,InToM(val));
		}
		else{
			printf("Invalid Inputs");
		}
	}
	
}
