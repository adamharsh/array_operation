#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(int *arr,int size){
	int first=0,last=size-1,temp;
	do{		
		temp=*(arr+last);
		*(arr+last)=*(arr+first);
		*(arr+first)=temp;
	
		last=last-1;
		first=first+1;	
	}while(first<=last);
	
}
void rearrange(int *arr, int size){
	int first=0,last=size-1,temp;
	do{
		if(*(arr+first)>0){
			first=first+1;
		}
		else{
			if(*(arr+last)<0){
				last=last-1;
			}
			else{
				temp=*(arr+last);
				*(arr+last)=*(arr+first);
				*(arr+first)=temp;
				first=first+1;	
			}
		}
		
	}while(first<=last);
}
void oddeven(int *arr,int size){
		int first=0,last=size-1,temp;
	do{
		if(*(arr+first)%2==0){
			first=first+1;
		}
		else{
			if(*(arr+last)%2!=0){
				last=last-1;
			}
			else{
				temp=*(arr+last);
				*(arr+last)=*(arr+first);
				*(arr+first)=temp;
				first=first+1;	
			}
		}
		
	}while(first<=last);
}
int main(int argc, char** argv) {
	int size,*arr;
	cout<<"Enter the array size:";
	cin>>size;
	int array[size];
	cout<<"\nEnter array elements:\n";
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	reverse(array,size);
	cout<<"Reversed array is:";
	for(int j=0;j<size;j++){
		cout<<"\n"<<*(array+j)<<"\n";
	}
	rearrange(array,size);
	cout<<"Rearranged array is:";
	for(int j=0;j<size;j++){
		cout<<"\n"<<*(array+j)<<"\n";
	}
	oddeven(array,size);
	cout<<"Array after segregation:";
	for(int j=0;j<size;j++){
		cout<<"\n"<<*(array+j)<<"\n";
	}
	return 0;
}
