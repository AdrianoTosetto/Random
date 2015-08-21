/*
  two methods to return the remainder of a division between two integers
*/

int mod(int n,int m){  //n/m

	int sum = 0;
	while(true){
		
		if(sum + m > n)
			break;
		sum += m;
	} 
	return n - sum;
}

int recursive_mod(int n,int m){
	int sum = m;
	if(sum + m > n)
		return n - sum;
	else
		return recursive_mod(n-sum,m);
}
