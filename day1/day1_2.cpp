#include <iostream>
#include <algorithm>
#include <list>

int main(){
	int sum=0;
	std::string entry;
	std::cin>>entry;
	int len=entry.length();
	int step=len/2;
	for(int i=0;i<step;i++){
		if(entry[i]==entry[i+step])sum+=(entry[i]-'0');
	}
	for(int i=step;i<len;i++){
		if(entry[i]==entry[i-step])sum+=(entry[i]-'0');
	}
	std::cout<<sum<<std::endl;

}