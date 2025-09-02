
int evenodd();
     int main()
     {
     	evenodd();
     	return 0;
	 }
	 int evenodd()
	 {
	 	int num;
	 	printf("enter the number");
	 	scanf("%d",&num);
	 	
	 	if(num%2==0)
	 	{
	 		printf("it is even number");
		 }
		 else
		 {
		 	printf("it is  odd number ");
		 }
		 return 0;
	 }