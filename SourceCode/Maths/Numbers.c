#include<bits/stdc++.h>
#include<math.h>

// Function Added In Testing Branch 
int mul(int x, int y){

	int result = 0;
	result = x - y;
	return result;
}

int div(int x, int y){
	if( y != 0)
		return x/y;
	else
		printf("Divide By Zero...");
}


