int a=1;
void fun(){
	a=2;
	a=2;
	a=2;
	a=2;
	malloc(100);
	malloc(100);
}

void fun2(){
	malloc(100);
	malloc(100);
}


int main(){
	fun();
	fun2();
	return 0;
}

