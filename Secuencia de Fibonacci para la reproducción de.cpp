#include <iostream>

int rabbit (int n){
	
	if (n <= 2 )
		return 1;
	else 
	return rabbit(n - 1) + rabbit(n - 2);
} 

