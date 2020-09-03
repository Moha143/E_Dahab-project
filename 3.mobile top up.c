main()
{
	send();
}

//SEND MONEY TWO mobile top up
send()
{
	int num,h,ch;
	char name[15];
	char nam[15];
	char na[15];
	int pin=3147;
	float money,balance=100;
	
	if(2==2)

	{
		system("cls");
		printf("****************\n");
		printf(" please select\n");
		printf("****************\n");
		printf("1. Self-Top-Up\n");
		printf("2. other-Top-Up\n");
		printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
		scanf("%d",&ch);
	}
			
switch(ch)
	{
	case 1:
	if(1==1)
	{
		 system("cls"); 
		printf("Enter the amount");
		scanf("%f",&money);
			if(money<=balance)
		{
		printf("Enter your PIN to show the balance \n");
		scanf("%d",&pin);
		if(pin==3147)
		printf("waxa ku shibatay $ %.2f \n your balance is %.2f",money,balance-money);
		if(pin!=31470)
	do
	 {
	 	system("cls");
		printf("You have entered wrong PIN \n Please Try Again\n");
		scanf("%d",&pin);
		printf("waxa ku shibatay $ %.2f \n your balance is %.2f",money,balance-money);
      }
       while(pin!=3147);
   }
   	
	}
		else 
	printf("you do not have sufficcient balance");	
	break;
	case 2:
 	if(2==2)
	{
		 system("cls"); 
		printf("Enter a number\n");
		scanf("%d",&num);
		printf("Enter the amount \n");
		scanf("%f",&money);
		printf("Enter full nume \n");
		scanf("%s %s %s",&name,&nam,&na);
		 system("cls"); 
		 	printf("Enter your PIN to the balance \n");
		scanf("%d",&pin);
		system("cls");
		if(pin!=3147)
	 do
	 {
	 	system("cls");
		printf("You have entered wrong PIN\n please try again\n");
		scanf("%d",&pin);
	
	printf("\t\t\t$ %.2f dollor you are recharging for %s %s  %s \n your balance is$ %.2f"
		,money ,name,nam,na,balance-money);			
      }
       while(pin!=3147);
		
	}
	break;
	case 0:
			if(0==0)
			main();	
			break;	
	}
}

