main()
{
	paymant();
}


paymant()
{
	int pay,number,view,fee;
	float balance=100;
	system("cls");
	printf("Please Select \n");
	printf("1. Marchant Payment\n ");
	printf("2.Bill/Free Payment\n");
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

			
			
	}
}


