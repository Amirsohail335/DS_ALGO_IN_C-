using namespace std;

void solve(int n){
  //base case
  if(n==0)
    return;
  cout <<n <<" ";
//Recursive call
  solve(n-1);
  cout <<n <<" ";
}
int main() {
  int n;
  cin>>n;

  solve(n);
  cout<<  endl;

  return 0;
  
} 
