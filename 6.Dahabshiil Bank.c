
main()
{
bank();	
}
bank()
{
	int sel,selects,choose,pin=3147;
	int amount,balance=100,number;
	system("cls");
	printf("Please Select\n\n");
	printf("1.Check Bank Balance\n");
	printf("2.Deposit to Bank A/C\n");
	printf("3.Withdrawal from Bank Account\n");
	printf("4.Mini Statement\n");
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
	}
		
}

