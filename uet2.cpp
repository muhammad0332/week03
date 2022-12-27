#include <iostream>
using namespace std;
main(){
string name;
float matric;
float inter;
float ecat;
float aggre;

cout<<"enter your name :";
cin>>name;
cout<<"enter your matric marks :";
cin>>matric;
cout<<"enter your intermediate marks :";
cin>>inter;
cout<<"enter your ecat marks :";
cin>>ecat;

float matricn;
float intern;
float ecatn;
 
matricn= (matric/1100)*10;
intern=(inter/550)*40;
ecatn=(ecat/400)*50;
aggre=(matricn+intern+ecatn);
cout<<"your name is ..."<<name<<endl;
cout<<"your matric marks are ..."<<matric<<endl;
cout<<"your intermediate marks are ..."<<inter<<endl;
cout<<"your ecat marks are ..."<<ecat<<endl;
cout<<"Your aggreate is ....."<<aggre;
cout<<" ";
}
