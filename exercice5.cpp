#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> a;
int x;
for(int i=1;i<=100;++i){ 
a.insert(i);  
}
for(set<int>::iterator it=a.begin();it!=a.end();it++){ 
	cout<<*it<<endl;
	
}
cout<<"saisir une valeur"<<endl;
cin>>x;
cout<<a.count(x)<<endl;
return 0;
}















