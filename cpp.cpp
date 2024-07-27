
#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int size, int targeted__Value) {
	int start = 0; int end = size-1; int mid = start+(end-start)/2; int ans = -1;
			while(start<=end) {
				if(arr[mid]==targeted__Value) {
					ans = mid;
					start = mid+1;
				}else if(arr[mid]<targeted__Value) {
					end = mid-1;
				}else {
					start = mid+1;
				}
				int mid = start+(end-start)/2;
			}
			return ansl
}


int main(int argc, char const *argv[]){
	
	return 0;
}
