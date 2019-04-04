#include <bits/stdc++.h>
using namespace std;
int a[100005],n;
main(){
	
	int i,ans=0;
    cout<<"Nhap vao so bong den: "; cin>>n;
    cout<<"Nhap vao trang thai cac bong den\n";
    for (i=1;i<=n;i++) cin>>a[i];
    for (i=1;i<=n;i++)
        if (a[i]%2==ans%2) ans++;
    cout<<"So lan doi trang thai bong den it nhat la: ";
    cout<<ans;
}
