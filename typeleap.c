

    int isleapyear();
     int main()
     {
     	isleapyear();
     	return 0;
	 }
	 int isleapyear()
	 {
	 	int year;
	 	printf("enter the year");
	 	scanf("%d",&year);
	 	
	 	if(year % 400 == 0)
	 	{
		 
	 		printf("it is leap year(divisible by 400)");
		 }
		 else if(year % 100 == 0)
		 {
		 	printf("it is not  leap year(divisible by 100)");
		 }
		 else if(year % 4 == 0)
		 {
		 	printf("it is leap year(divisible by 4)");
		 }
		 else
		 {
		 	printf("it is not leap year");
		 }
	 }