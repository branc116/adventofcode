#include <iostream>
#include <algorithm>
#include <list>

int main(){
	int sum=0;
	std::string entry;
	std::cin>>entry;
	int len=entry.length();
	for(int i=0;i<len;i++){
		if(entry[i]==entry[i+1])sum+=(entry[i]-'0');
	}
	if(entry[0]==entry[len-1])sum+=entry[0]-'0';
	std::cout<<sum<<std::endl;

}