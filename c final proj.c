/* MAIN */
main()
{
	int choises;
    system("cls");
   	printf("\n\t\t\t****************\n");
   	printf("\n\t\t\t\WELCOME TO e-DAHAB\n");
   	printf("\n\t\t\t****************\n");
   	printf("\n****************\n");
	printf("\nplesae select \n");
	printf("\n****************\n");
	printf("1.dollar\n");
   	printf("2.shilling\n");
	scanf("%d",&choises);
	switch(choises)
	{
		case 1:
			dollar();
			break;		
		case 2:
			shilling();
			break;
			case 0:
				if(0==0)
				{
					system("cls");
					printf("\n\n\n*********************\n\n\n");
					printf("\tGroup Names : \n 1.Abdiqani Hassan Ahmed\n 2.Mohamed Omar Hasssan \n 3.Jaasim Yahye Hassan\n\n\n");
					printf("\n*********************\n");
				}
				break;
	}
		
}

/* qeybta kowaad 
first stage*/
dollar()
{
	int choise;
	
	system("cls");
	printf("\n****************\n");
   printf("\nplesae select\n");
   	printf("\n****************\n");
   printf("1.my Account\n");
   printf("2.Send money\n");
   printf("3.Mobile Top-Up\n");
   printf("4.Payment\n");
   printf("5. Cash Out\n");
   printf("6.Dahabshiil Bank\n");

   scanf("%d",&choise);
   switch(choise)
   {
   	case 1:
   		account();
   		break;
   		case 3:
   			send();
   			break;
   			case 2:
   			money();
   			break;
   			case 4:
   				paymant();
   				break;
   				case 5:
   			cash();
   			break;
   			case 6:
   			bank();
   			break;

   		
   }
   
}

/* weybt labaaad ee heyso shelling  second main part */
shilling()
{
	int choise;
	system("cls");
	printf("****************\n");
   printf("plesae select\n");
   	printf("****************\n");
   printf("1.my Account\n");
   printf("2.Send money\n");
   printf("3.Mobile Top-Up\n");
   printf("4.Payment\n");
   printf("5. Cash Out\n");
   printf("6.Dahabshiil Bank\n");
   scanf("%d",&choise);
   switch(choise)
   {
   	case 1:
   		account();
   		break;
   			case 2:
   			money();
   			break;
   		case 3:
   			send();
   			break; 
			   case 4:
   				paymant();
   				break;  	
   				case 5:
   			cash();
   			break;	
   				case 6:
   			bank();
   			break;
   }
   	
}

//End Shilling 

// second stage my account
account()
{
	int x,select,pin=3147;
	float balance=100;
	char star;
	system("cls");
	printf("****************\n");
	printf("plesae select\n\n");
	printf("****************\n");
	printf("1.Check Balance\n");
	printf("2.Mini Statement\n");
	printf("3.Change PIN\n");
	printf("4.Change Language\n");
	printf("5.Contacts\n");
	printf("6.Customer Care\n");
	printf("\n\n\npress 0 for main\n0 next\n");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
		if(1==1)
		printf("Enter your PIN to show the Balance \n");
		scanf("%d",&pin);
		system("cls");
		if(pin==3147)
		printf("your Balance is $%.2f\n",balance);
		else if(pin!=3147)
	 do
	 {
	 	system("cls");
		printf("You have entered wrong PIN\n");
		scanf("%d",&pin);
		printf("%.your Balance is $ %.2f\n",balance);
	   				
      }
       while(pin!=3147);
		break;
		case 2:
		if(2==1)
		printf("Enter your PIN to show your last transactions\n");
		scanf("%d",&pin);
		system("cls");
		if(pin==1234)
		printf("There are No Transaction to Dispaly\n");
		else if(pin!=3147)
	 do
	 {
	 	system("cls");
		printf("you have entered wrong PIN\n");
		scanf("%d",&pin);
		if(pin==3147)		
	   	printf("NO Transfer ID is Found\n");			
      }
       while(pin!=3147);
		break;
		case 3:
			change_pin();
			break;
			case 4:
			language();
			break;
			case 5:
				contacts();
				break;
			case 6:
				system("cls");
			printf("\n\n\n\nCall the call centre : 111\n\n\n");
			break;
			case 0:
				if(0==0)
		{
			printf("\nmenu and * for previous menu\n");
			star=getche();
			if(star=='*')
			dollar();	
		}
	break;
	
	}
	
	
}
// END my account 
//money 2.send money 
money()
{
	int choose,reciev ,number;
	float numb, balance=100;
	system("cls");
		printf("****************\n");
		printf(" please select\n");
		printf("****************\n");
		printf("1. Send Money Local\n");
		printf("2 Send Money International\n");
		printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				if(1==1)
				{
					system("cls");
					printf("\tPlease Select\n");
					printf("1. Mobile\n");
					printf("2. Contact\n");
					
					scanf("%d",&reciev);
					switch(reciev)
					{
						case 0:
						if(0==1)
						{
						
						print("Enter recievers number\n");
						scanf("%f",&numb);
						printf("%.2fkfnbkl.ngfm,",numb);
						}
						break;
					
					}
				}
				break;
				case 2:
				if(2==2)
				{
				printf("No contact");
				}
						break;
							break;
						case 0:
						if(0==0)
						main();	
						break;	
		}
}
//End send money


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
/* Payment 
*/
paymant()
{
	int pay,number,view,fee;
	float balance=100;
	system("cls");
	printf("Please Select \n");
	printf("1. Marchant Payment\n ");
	printf("2.Bill/Free Payment\n");
	printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
	scanf("%d",&pay);
	switch(pay)
	{
		case 1:
			if(1==1)
			{
				system("cls");
				printf("Enter marchant number\n");
				scanf("%d",&number);
				printf("%d",number);
			
			}
			break;
			case 2:
				if(2==2)
				{
					system("cls");
					printf("Please Select \n");
					printf("1. View and pay Studemt Fee\n ");
					printf("2. View and pay Bill\n");
					scanf("%d",&fee);
					switch(fee)
					{
						case 1:
							if(1==1)
							{
									system("cls");
									printf("Please Select \n");
									printf("1. View Studemt Fee\n ");
									printf("2. View pay Fee\n");
										scanf("%d",&view);
									switch(view)
									{
										case 1:
											printf("Coming Soon");
											break;
											case 2:
											printf("Coming Soon");
									}
							}
							
							break;
							case 2:
								if(2==2)
									{
									system("cls");
									printf("Please Select \n\n\n\n");
									printf("1. View Bill\n ");
									printf("2. pay Bill\n");
									scanf("%d",&view);
									switch(view)
									{
										case 1:
											printf("Coming Soon");
											break;
											case 2:
											printf("Coming Soon");
									}		
							}
							
						break;	
					}	
				}		
				break;
				case 0:
					if(0==0)			
						main();
					break;	
	}
}

cash()

{
	int code,chose,pin=3147,numbers;
	float balances=100,amount;
		system("cls");
	printf("Please select\n");
		printf("1.cash out\n");
		printf("2.cash out Confirm\n");
		printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
			scanf("%d",&chose);
			
			switch(chose)
			{
				case 1:
					if(1==1)
					{
							system("cls");
						printf("Enter the Code of you are sending money\n");
						scanf("%d",&code);
						printf("Enter the Amount\n");
						scanf("%f",&amount);
						system("cls");
					
					
						if(amount<=balances)
						{
								system("cls");
							printf("please Enter the PIN to confirm");
						scanf("%d",&pin);					
						
							{
														system("cls");
															if(pin==3147)
							printf("%.2f dollors you are requesting Cash out \n from Other Network merchant code\n %d , \n Now the Balance is %.2f dollors",amount,code,balances-amount);
										
													else if(pin!=3147)
															 do
															 
																	 {
																 	system("cls");
																printf("You have entered wrong PIN\n");
																scanf("%d",&pin);
							printf("%.2f dollors you are requesting Cash out \n from Other Network merchant code\n %d , \n Now the Balance is %.2f dollors",amount,code,balances-amount);
	   				
     															 }
     																  while(pin!=3147);													
													}
						}
					else 
					printf("you do not have sufficcient balance");			
					 
					}
					break;
					case 2:
						if(2==2)
						system("cls");
					printf("NO Transfer ID is Found");
					break;
					case 0:
		
					if(0==0)
						main();
					break;			
						
			}
	
}
//END CSH
// DAHABSHIIL BANK 
bank()
{
	int sel,selects,choose,pin=3147;
	int amount,balance=100,number;
	char star;
	system("cls");
	printf("Please Select\n\n");
	printf("1.Check Bank Balance\n");
	printf("2.Deposit to Bank A/C\n");
	printf("3.Withdrawal from Bank Account\n");
	printf("4.Mini Statement\n");
	printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
	scanf("%d",&selects);
	switch(selects)
	{
		case 1:
			system("cls");
			printf("No Registered Bank account found for subscriber\n");
			break;
			case 2:
				if(2==2)
				{
						system("cls");
					printf("Please Select\n");
					printf("1.Self\n");
					printf("2.Other \n");
					scanf("%d",&sel);
					switch(sel)
					{
						case 1:
								system("cls");
							printf("NO Bank account associated\n");
							break;
							system("cls");
								case 2:
									if(2==2)
									{
											system("cls");
											printf("Please select\n");
											printf("1.DAHABSHIIL BANK\n");
									
										scanf("%d",&choose);
										switch(choose)
										{
											case 1:
												if(1==1)
													system("cls");
												
													system("cls");
													printf("Enter recievers account number \n");
													scanf("%d",&number);
														system("cls");
													printf("Enter the amount \n");
													scanf("%d",&amount);
														system("cls");
														if(amount<=balance)
												{
														system("cls");
													printf("Enter your pin to confirm \n");
													scanf("%d",&pin);
													
														system("cls");
															if(pin==3147)
											printf("%d dollors you are transferring to Bank account -% d \n",amount ,number);
													else if(pin!=3147)
															 do
																	 {
																 	system("cls");
																printf("You have entered wrong PIN\n");
																scanf("%d",&pin);
														printf("%d dollors you are transferring to Bank account -% d \n",amount ,number);
	   				
     															 }
     																  while(pin!=3147);													
													}
															else
																system("cls"); 
												printf("you do not have sufficcient balance");		
										}
									}
					}
				}
				break;
				case 3:
					printf("No Registered bank account found for subscriber\n");
					break;
					case 4:
					printf("No Registered bank account found for subscriber\n");
						case 0:
					if(0==0)
						main();	
					break;	
	}
		
}

// End Dahabshiil bank

/*qeybta laga badalo PIN ka case 3  MY Acount
*/
change_pin()
{	
        int oldpin,newpin,checking;
         char star; 
		 system("cls");     
			printf("geli pin kii hore\n");
			printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
			scanf("%d",&oldpin);
			system("cls");
			if(oldpin==3147)
		    {	system("cls");
				printf("Enter new PIN\n");
			scanf("%d",&newpin);
			system("cls");
			printf("Comfirm New PIN\n");
			scanf("%d",&checking);
			system("cls");
			printf("you change PIN\n");
		}
		if(oldpin==0)
		{
			printf("\nmenu and * for previous menu\n");
			star=getche();
			if(star=='*')
			account();
			else
			printf("You have entered wrong PIN\n");			
		}
		if(oldpin!=3147)
		 printf("You have entered wrong PIN\n");
}
// END Change PIN  case 3 my account

// Change language  case 4 my account
language()
{
	int choise;
		system("cls");
	printf("Select Language\n");
	printf("1.English\n");
	printf("2.Soomaali\n");
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:
			system("cls");
			printf("\n\n\n");
		printf("Luuqadaadii waxaa u badashay English\n");
		break;
		case 2:
			system("cls");
			printf("\n\n\n");
		printf("Luuqadaadii waxaa u badashay Soomaali\n");
			break;
	}
}

// end change language case 4 my account
// contacts case 5 my account
contacts()
{
	int code,code2, choise,contact,ch,pin=3147;
	char name[15],surname[15],country[15];
	char star;
	system("cls");
		printf("please select\n");
	printf("1. Local Contact\n");
	printf("2. InterNational Contact\n");
	printf("\n\n\n press 0 for main menu and * for previous\n menu\n");
	scanf("%d",&choise);
	switch(choise)
	{
			case 1:
						if(1==1)
			{
					system("cls");
				printf("please select\n");
				printf("1. Add Contact\n");
				printf("2.View Contact\n");
				printf("3.Delete Contact\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						if(1==1)
						{
								system("cls");
						printf("Enter the contact number to be Added without country code\n");
						scanf("%d",&code);
							system("cls");
						printf("Enter the name of contact person\n");
						scanf("%s",&name,&surname);
							system("cls");
							printf("Adding Local contact with number %d \n and name %s %s\n Enter PIN to confirm\n",code,name,surname);
							scanf("%d",&pin);
							if(pin==3147)
							printf("Adding Local contact with number %d \n and name %s %s \n",code,name,surname);
							else if(pin!=3147)
							 do
							 {
							 	system("cls");
								printf("You have entered wrong PIN\n");
								scanf("%d",&pin);
								printf("Adding Local contact with number %d \n and name %s  %s\n",code,name,surname);
     						 }
     						  while(pin!=3147);		
						}
						break;
						case 2:
							if(2==2)
							{
									system("cls");
							printf("Enter the PIN to confirm\n");
							scanf("%d",&pin);
							system("cls");
								if(pin==3147)
							printf("No Contact\n");
							else if(pin!=3147)
							 do
							 {
							 	system("cls");
								printf("You have entered wrong PIN\n");
								scanf("%d",&pin);
									system("cls");
								printf("No Contact\n");
     						 }
     						  while(pin!=3147);	
							
							}
							break;
							case 3: 
								system("cls");
							printf("No Contact\n");
							scanf("%d",&contact);
							printf("Input Entered i Invalid");
							break;
				}
			}
			break;
				case 2:
			if(2==2)
			{
					system("cls");
				printf("please select\n");
				printf("1. Add Contact\n");
				printf("2.View Contact\n");
				printf("3.Delete Contact\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						if(1==1)
						{
								system("cls");
						printf("Enter the contact number to be Added without country code\n");
						scanf("%d",&code);
							system("cls");
						printf("Enter the name of contact person\n");
						scanf("%s",&name,&surname);
						printf("Enter the ISD Code of the contact like\n (44)UK\n");
						scanf("%d",&code2);
							system("cls");
							printf("Enter the Country\n");
						scanf("%s",&country);
						system("cls");
							printf("Adding this contact with number %d \n and name %s %s\n Enter PIN to confirm\n",code,name,surname);
							scanf("%d",&pin);
							if(pin==3147)
								
							printf("Succeess");
							else if(pin!=3147)
							 do
							 {
							 	system("cls");
								printf("You have entered wrong PIN\n");
								scanf("%d",&pin);
									system("cls");
								printf("Succeess");
     						 }
     						  while(pin!=3147);		
						}
						break;
						case 2:
							if(2==2)
							{
									system("cls");
							printf("Enter the PIN to confirm\n");
							scanf("%d",&pin);
							system("cls");
								if(pin==3147)
							printf("No Contact\n");
							else if(pin!=3147)
							 do
							 {
							 	system("cls");
								printf("You have entered wrong PIN\n");
								scanf("%d",&pin);
									system("cls");
								printf("No Contact\n");
     						 }
     						  while(pin!=3147);	
							
							}
							break;
							case 3: 
								system("cls");
							printf("No Contact\n");
							scanf("%d",&contact);
							printf("Input Entered i Invalid");
							break;
				}
			}
			break;
			case 0:
		if(0==0)
		{
			printf("\nmenu and * for previous menu\n");
			star=getche();
			if(star=='*')
			account();		
		}					
	}
}
//END CONTACTS CASE 5 my Account

