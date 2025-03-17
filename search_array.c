
#include <stdio.h>

int main() {
	int n,t,f;
	scanf("%d %d",&n,&t);
	int arr[n];
	for (int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	    if(arr[i]==t){
	        f=1;
	        break;
	    }
	    else{
	        f=0;
	    }
	}
	if(f==1){
	    printf("YES");
	}else{
	    printf("NO");
	}
    
}

