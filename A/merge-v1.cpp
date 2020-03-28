#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,int i,int j);
void swap(vector<int> & a, int i,int j);
int main(){
	vector<int> a={2,5,4,3,8,4,6,7,10,1,20};
	merge(a,0,10);
	for(int i=0;i<11;i++)
	    cout<<a[i]<<endl;
	return 0;
} 
void merge(vector<int> &a,int i,int j){
	if(j-i==1){
		if(a[i]>a[j]){
			swap(a,i,j);
		}
	}
	if(j-i>1){
		int k=int((j+i)/2);
		merge(a,i,k);
		merge(a,k+1,j);
		int ii=i;
		int kk = k +1;
		vector<int> m;
		while(ii<=k&&kk<=j){
			if(a[ii]>a[kk]){
			    m.push_back(a[kk]);
			    kk++;
			} 
			else{
				m.push_back(a[ii]);
				ii++;
			}
		}
		if(ii>k){
			while(kk<=j){
				m.push_back(a[kk]);
				kk++;
			}
		}
		else{
			while(ii<=k){
				m.push_back(a[ii]);
				ii++;
			}
			
		} 
		k=i;
		int h=0;
		while(k<=j){
			a[k]=m[h];
			k++;
			h++;
		}
		                                                         
		
	}
	
}
void swap(vector<int> & a, int i,int j){
		int t=a[i];
		a[i]=a[j];
		a[j]=t;

}
