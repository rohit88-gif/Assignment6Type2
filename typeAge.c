

    int isage();
    int main()
    {
    	isage();
	}
	int isage()
	{
		int age;
		printf("enter the age");
		scanf("%d",&age);
		
		if(age<12)
		{
			printf("it is child");
		}
		else if(12-19)
		{
			printf("it is teenger");
		}
		else if(20-59)
		{
			printf("it is adult");
		}
		else if(age<60)
		{
			printf("senior");
		}
	}
	