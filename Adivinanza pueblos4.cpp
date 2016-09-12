#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){

	int array[6];
	int j;
	j=30;
	for(array[1]=1; array[1]<=15; array[1]++){
		for(array[2]=1+array[1]; array[2]<=15+array[1]; array[2]++){
			for(array[3]=1+array[2]; array[3]<=15+array[2]; array[3]++){
				if( (array[3]-array[2])!=(array[2]-array[1])&&(array[3]-array[2])!=(array[1])){
					for(array[4]=1+array[3]; array[4]<=15+array[3]; array[4]++){
						if( (array[4]-array[3])!=(array[3]-array[1]) && (array[4]-array[3])!=(array[3]-array[2]) && (array[4]-array[3])!=(array[2]-array[1]) && (array[4]-array[2])!=(array[3]-array[1]) && (array[4]-array[2])!=((array[2]-array[1]))){
							for(array[5]=1+array[4]; array[5]<=15+array[4]; array[5]++){
								if((array[5]-array[4])!=(array[4]-array[1]) && (array[5]-array[4])!=(array[4]-array[2]) &&(array[5]-array[4])!=(array[4]-array[3]) &&(array[5]-array[4])!=(array[3]-array[1]) &&(array[5]-array[4])!=(array[3]-array[2]) &&(array[5]-array[4])!=(array[2]-array[1]) &&(array[5]-array[3])!=(array[4]-array[1]) &&(array[5]-array[3])!=(array[4]-array[2]) &&(array[5]-array[3])!=(array[3]-array[1]) &&(array[5]-array[3])!=(array[3]-array[2]) &&(array[5]-array[3])!=(array[2]-array[1]) &&(array[5]-array[2])!=(array[4]-array[1]) &&(array[5]-array[2])!=(array[3]-array[1]) &&(array[5]-array[2])!=(array[2]-array[1])){
									for(array[6]=1+array[5]; array[6]<=15+array[5]; array[6]++){
										if( (array[6]-array[2])!= (array[5]-array[1]) && (array[6]-array[2])!= (array[4]-array[1]) && (array[6]-array[2])!= (array[3]-array[1]) && (array[6]-array[2])!= (array[2]-array[1])){
										if( (array[6]-array[3])!= (array[5]-array[1]) && (array[6]-array[3])!= (array[4]-array[1]) && (array[6]-array[3])!= (array[3]-array[1]) && (array[6]-array[3])!= (array[2]-array[1]) && (array[6]-array[3])!= (array[5]-array[2]) && (array[6]-array[3])!= (array[4]-array[2]) && (array[6]-array[3])!= (array[3]-array[2])){
										if( (array[6]-array[4])!= (array[5]-array[1]) && (array[6]-array[4])!= (array[4]-array[1]) && (array[6]-array[4])!= (array[3]-array[1]) && (array[6]-array[4])!= (array[2]-array[1]) && (array[6]-array[4])!= (array[5]-array[2]) && (array[6]-array[4])!= (array[4]-array[2]) && (array[6]-array[4])!= (array[3]-array[2]) && (array[6]-array[4])!= (array[5]-array[3]) && (array[6]-array[4])!= (array[4]-array[3])){
										if( (array[6]-array[5])!= (array[5]-array[1]) && (array[6]-array[5])!= (array[4]-array[1]) && (array[6]-array[5])!= (array[3]-array[1]) && (array[6]-array[5])!= (array[2]-array[1]) && (array[6]-array[5])!= (array[5]-array[2]) && (array[6]-array[5])!= (array[4]-array[2]) && (array[6]-array[5])!= (array[3]-array[2]) && (array[6]-array[5])!= (array[5]-array[3]) && (array[6]-array[5])!= (array[4]-array[3]) && (array[6]-array[5])!= (array[5]-array[4]))  {		
										
										if (array[1]!=(array[6]-array[1]) && array[1]!=(array[6]-array[2]) && array[1]!=(array[6]-array[3]) && array[1]!=(array[6]-array[4]) && array[1]!=(array[6]-array[5]) && array[1]!=(array[5]-array[1]) && array[1]!=(array[5]-array[2]) && array[1]!=(array[5]-array[3]) && array[1]!=(array[5]-array[4]) && array[1]!=(array[4]-array[1]) && array[1]!=(array[4]-array[2]) && array[1]!=(array[4]-array[3]) && array[1]!=(array[3]-array[2]) && array[1]!=(array[3]-array[1]) && array[1]!=(array[2]-array[1])) {
										if (array[2]!=(array[6]-array[1]) && array[2]!=(array[6]-array[2]) && array[2]!=(array[6]-array[3]) && array[2]!=(array[6]-array[4]) && array[2]!=(array[6]-array[5]) && array[2]!=(array[5]-array[1]) && array[2]!=(array[5]-array[2]) && array[2]!=(array[5]-array[3]) && array[2]!=(array[5]-array[4]) && array[2]!=(array[4]-array[1]) && array[2]!=(array[4]-array[2]) && array[2]!=(array[4]-array[3]) && array[2]!=(array[3]-array[2]) && array[2]!=(array[3]-array[1]) && array[2]!=(array[2]-array[1])) {
										if (array[3]!=(array[6]-array[1]) && array[3]!=(array[6]-array[2]) && array[3]!=(array[6]-array[3]) && array[3]!=(array[6]-array[4]) && array[3]!=(array[6]-array[5]) && array[3]!=(array[5]-array[1]) && array[3]!=(array[5]-array[2]) && array[3]!=(array[5]-array[3]) && array[3]!=(array[5]-array[4]) && array[3]!=(array[4]-array[1]) && array[3]!=(array[4]-array[2]) && array[3]!=(array[4]-array[3]) && array[3]!=(array[3]-array[2]) && array[3]!=(array[3]-array[1]) && array[3]!=(array[2]-array[1])) {
										if (array[4]!=(array[6]-array[1]) && array[4]!=(array[6]-array[2]) && array[4]!=(array[6]-array[3]) && array[4]!=(array[6]-array[4]) && array[4]!=(array[6]-array[5]) && array[4]!=(array[5]-array[1]) && array[4]!=(array[5]-array[2]) && array[4]!=(array[5]-array[3]) && array[4]!=(array[5]-array[4]) && array[4]!=(array[4]-array[1]) && array[4]!=(array[4]-array[2]) && array[4]!=(array[4]-array[3]) && array[4]!=(array[3]-array[2]) && array[4]!=(array[3]-array[1]) && array[4]!=(array[2]-array[1])) {
										if (array[5]!=(array[6]-array[1]) && array[5]!=(array[6]-array[2]) && array[5]!=(array[6]-array[3]) && array[5]!=(array[6]-array[4]) && array[5]!=(array[6]-array[5]) && array[5]!=(array[5]-array[1]) && array[5]!=(array[5]-array[2]) && array[5]!=(array[5]-array[3]) && array[5]!=(array[5]-array[4]) && array[5]!=(array[4]-array[1]) && array[5]!=(array[4]-array[2]) && array[5]!=(array[4]-array[3]) && array[5]!=(array[3]-array[2]) && array[5]!=(array[3]-array[1]) && array[5]!=(array[2]-array[1])) {
								//		cout<<array[1]<<", "<<array[2]<<", "<<array[3]<<", "<<array[4]<<", "<<array[5]<<", "<<array[6]<<endl;
											if(array[6]<30){
												cout<<"Nuevo grupo: "<<array[1]<<", "<<array[2]<<", "<<array[3]<<", "<<array[4]<<", "<<array[5]<<", "<<array[6]<<endl;
												system("PAUSE()");
												j=array[6];
											}
										}
										}
										}
										}
										}
										
										}
										}
										}
										}
									}
								}
							}
						}	
					}
				}
			}
		}
	}
}
