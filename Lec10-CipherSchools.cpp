// understanding the concept of pre-increment and post-increment....



#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	i=0;
	j=0;
	k=0;
	cout<<i<<" "<<j<<" "<<k<<" "<<endl;
	j= i++;
	cout<<i<<" "<<j<<" "<<k<<" "<<endl;
	k= ++i;
	cout<<i<<" "<<j<<" "<<k<<" "<<endl;
	return 0;
}




// Printing values from 1 to 100 using for loop...


#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=100;i++){
		cout<<i<<" ";
	}
	return 0;
}
