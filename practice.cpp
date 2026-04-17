//0. Factorial
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Factorial of " << num << " is: " << factorial(num);
//     return 0;
// }



// 1. tower of hanoi
// #include<bits/stdc++.h>
// using namespace std;
// void toh(int n, char A,char B,char C){
//     if(n>0){
//         toh(n-1,A,C,B);
//         cout<<"Move disk "<<n<<"from"<<A<<"to"<<C<<endl;
//         toh(n-1,B,A,C);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number of disks:";
//     cin>>n;
//     toh(n,'A','B','C');
//     return 0;
// }


// 2. bubble sort
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, a[50];
//     int temp=0;
//     cout<<"enter the number of elements:";
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     //bubble sort
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     cout<<"Sorted elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// 3. insertion sort
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,a[50];
//     cout<<"Enter the number of elements:";
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }   
//     //insertion sort
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>0 && a[j-1]>a[j]){
//             swap(a[j],a[j-1]);
//             j--;
//         }
//     }
//     cout<<"Sorted elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

//4. selection sort
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a[50];
//     cout<<"Enter the number of elements:";
//     cin>>n;
//     cout<<"Enter the elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     //selection sort
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[minIndex])
//                 minIndex=j;
//         }
//         swap(a[i],a[minIndex]);
//     }
//     cout<<"Sorted elements:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }   
//     return 0;
// }

//5. binary search
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int target;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
//     cout<<"Enter the number you want to find:";
//     cin>>target;
//     int low=0,high=n-1,mid;
//     bool found=false;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==target){
//             cout<<"Number "<<target<<" found at position "<<mid+1;
//             found=true;
//             break;
//         }
//         else if(target<arr[mid]){
//             high=mid-1;
//         }
//         else low=mid+1;
       
//     }
//      if(!found){ cout<<"not found";}
//     return 0;
// }

//6. Fractional Knapsack
// #include<bits/stdc++.h>
// using namespace std;

// struct Item{
//     int profit;
//     int weight;
// };

// //compare function to sort the profit/weight ratio
// bool compare(Item a, Item b){
//     return (double) (a.profit/a.weight) > (b.profit/b.weight);
// }

// int main(){
//     int n, capacity;
//     cout<<"Enter the number of items: ";
//     cin>>n;

//     Item items[100];
//     for(int i=0;i<n;i++){
//         cout<<"Enter profit and weight for item "<<i+1<<": ";
//         cin>>items[i].profit>>items[i].weight;
//     }

//     cout<<"enter the capacity of knapsack: ";
//     cin>>capacity;

//     //sort the ratio in ascending order
//     sort(items,items+n,compare);
//     double total_profit=0.0;

//     //main logic
//     for(int i=0;i<n && capacity>0;i++){
//         if(items[i].weight<=capacity){
//             total_profit+=items[i].profit;
//             capacity-=items[i].weight;
//         }
//         else{
//             total_profit+=items[i].profit * ((double(capacity)/items[i].weight));
//             break;
//         }
//     }
//     cout<<"max profit: "<<total_profit;
//     return 0;
// }

//7. Activity Selection
// #include<bits/stdc++.h>
// using namespace std;
// struct Activity {
//     int start;
//     int finish;
// };

// // Sort by finish time (ascending)
// bool compare(Activity a, Activity b) {
//     return a.finish < b.finish;
// }

// int main() {
//     int n;

//     cout << "Enter number of activities: ";
//     cin >> n;

//     Activity act[100];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter start and finish time of activity " << i + 1 << ": ";
//         cin >> act[i].start >> act[i].finish;
//     }

//     sort(act, act + n, compare);

//     cout << "\nSelected activities:\n";

//     int lastFinish = act[0].finish;
//     cout << "(" << act[0].start << ", " << act[0].finish << ")\n";

//     for (int i = 1; i < n; i++) {
//         if (act[i].start >= lastFinish) {
//             cout << "(" << act[i].start << ", " << act[i].finish << ")\n";
//             lastFinish = act[i].finish;
//         }
//     }

//     return 0;
// }

// 8. Job Sequencing with deadlines 
// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Job {
//     char id;
//     int deadline;
//     int profit;
// };

// // Sort by profit (descending)
// bool compare(Job a, Job b) {
//     return a.profit > b.profit;
// }

// int main() {
//     int n;

//     cout << "Enter number of jobs: ";
//     cin >> n;

//     Job jobs[100];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter job id, deadline and profit: ";
//         cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
//     }

//     sort(jobs, jobs + n, compare);

//     int maxDeadline = 0;
//     for (int i = 0; i < n; i++)
//         maxDeadline = max(maxDeadline, jobs[i].deadline);

//     char slot[100];
//     bool filled[100] = {false};

//     int totalProfit = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = jobs[i].deadline - 1; j >= 0; j--) {
//             if (!filled[j]) {
//                 filled[j] = true;
//                 slot[j] = jobs[i].id;
//                 totalProfit += jobs[i].profit;
//                 break;
//             }
//         }
//     }

//     cout << "\nJob sequence:\n";
//     for (int i = 0; i < maxDeadline; i++) {
//         if (filled[i])
//             cout << slot[i] << " ";
//     }

//     cout << "\nTotal profit: " << totalProfit;

//     return 0;
// }

//9. 0/1 knapsack
// #include <iostream>
// using namespace std;

// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int n, W;

//     cout << "Enter number of items: ";
//     cin >> n;

//     int wt[100], val[100];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter weight and profit of item " << i + 1 << ": ";
//         cin >> wt[i] >> val[i];
//     }

//     cout << "Enter knapsack capacity: ";
//     cin >> W;

//     int dp[100][100];

//     for (int i = 0; i <= n; i++) {
//         for (int w = 0; w <= W; w++) {
//             if (i == 0 || w == 0)
//                 dp[i][w] = 0;
//             else if (wt[i - 1] <= w)
//                 dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]],
//                                dp[i - 1][w]);
//             else
//                 dp[i][w] = dp[i - 1][w];
//         }
//     }

//     cout << "Maximum profit: " << dp[n][W];

//     return 0;
// }

//10. Coin change making problem
// #include <iostream>
// #include <climits>
// using namespace std;

// int min(int a, int b) {
//     return (a < b) ? a : b;
// }

// int main() {
//     int n, amount;

//     cout << "Enter number of coin types: ";
//     cin >> n;

//     int coins[100];

//     cout << "Enter coin denominations:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> coins[i];
//     }

//     cout << "Enter amount: ";
//     cin >> amount;

//     int dp[100];

//     dp[0] = 0;

//     for (int i = 1; i <= amount; i++) {
//         dp[i] = INT_MAX;
//     }

//     for (int i = 1; i <= amount; i++) {
//         for (int j = 0; j < n; j++) {
//             if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
//                 dp[i] = min(dp[i], dp[i - coins[j]] + 1);
//             }
//         }
//     }

//     cout << "Minimum coins required: " << dp[amount];

//     return 0;
// }

// 11. weighted job scheduling
// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct Job {
//     int start, finish, profit;
// };

// bool compare(Job a, Job b) {
//     return a.finish < b.finish;
// }

// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     int n;

//     cout << "Enter number of jobs: ";
//     cin >> n;

//     Job jobs[100];

//     for (int i = 0; i < n; i++) {
//         cout << "Enter start, finish and profit: ";
//         cin >> jobs[i].start >> jobs[i].finish >> jobs[i].profit;
//     }

//     sort(jobs, jobs + n, compare);

//     int dp[100];

//     dp[0] = jobs[0].profit;

//     for (int i = 1; i < n; i++) {
//         int incl = jobs[i].profit;

//         for (int j = i - 1; j >= 0; j--) {
//             if (jobs[j].finish <= jobs[i].start) {
//                 incl += dp[j];
//                 break;
//             }
//         }

//         dp[i] = max(incl, dp[i - 1]);
//     }

//     cout << "Maximum profit: " << dp[n - 1];

//     return 0;
// }

// 12. bellman-ford
// #include <iostream>
// #include <climits>
// using namespace std;

// struct Edge {
//     int src, dest, weight;
// };

// int main() {
//     int V, E;

//     cout << "Enter number of vertices and edges: ";
//     cin >> V >> E;

//     Edge edges[100];

//     for (int i = 0; i < E; i++) {
//         cout << "Enter source, destination and weight: ";
//         cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
//     }

//     int src;
//     cout << "Enter source vertex: ";
//     cin >> src;

//     int dist[100];

//     for (int i = 0; i < V; i++)
//         dist[i] = INT_MAX;

//     dist[src] = 0;

//     // Relax edges V-1 times
//     for (int i = 1; i <= V - 1; i++) {
//         for (int j = 0; j < E; j++) {
//             int u = edges[j].src;
//             int v = edges[j].dest;
//             int w = edges[j].weight;

//             if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
//                 dist[v] = dist[u] + w;
//             }
//         }
//     }

//     // Check for negative cycle
//     for (int j = 0; j < E; j++) {
//         int u = edges[j].src;
//         int v = edges[j].dest;
//         int w = edges[j].weight;

//         if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
//             cout << "Graph contains negative weight cycle";
//             return 0;
//         }
//     }

//     cout << "\nVertex   Distance from Source\n";
//     for (int i = 0; i < V; i++) {
//         cout << i << "\t\t" << dist[i] << endl;
//     }

//     return 0;
// }

// 13. travelling salesman
// #include <iostream>
// #include <climits>
// using namespace std;

// #define N 4
// #define INF 99999

// int dist[N][N] = {
//     {0, 10, 15, 20},
//     {10, 0, 35, 25},
//     {15, 35, 0, 30},
//     {20, 25, 30, 0}
// };

// int dp[1 << N][N];

// int min(int a, int b) {
//     return (a < b) ? a : b;
// }

// int tsp(int mask, int pos) {

//     // All cities visited
//     if (mask == (1 << N) - 1)
//         return dist[pos][0];

//     if (dp[mask][pos] != -1)
//         return dp[mask][pos];

//     int ans = INF;

//     for (int city = 0; city < N; city++) {
//         if ((mask & (1 << city)) == 0) {

//             int newAns = dist[pos][city] +
//                          tsp(mask | (1 << city), city);

//             ans = min(ans, newAns);
//         }
//     }

//     return dp[mask][pos] = ans;
// }

// int main() {

//     // Initialize dp array
//     for (int i = 0; i < (1 << N); i++) {
//         for (int j = 0; j < N; j++) {
//             dp[i][j] = -1;
//         }
//     }

//     cout << "Minimum travelling cost: " << tsp(1, 0);

//     return 0;
// }

//14. floyd-warshall
// #include <iostream>
// using namespace std;

// #define INF 99999

// int main() {
//     int V;

//     cout << "Enter number of vertices: ";
//     cin >> V;

//     int dist[100][100];

//     cout << "Enter adjacency matrix (use 99999 for INF):\n";

//     for (int i = 0; i < V; i++) {
//         for (int j = 0; j < V; j++) {
//             cin >> dist[i][j];
//         }
//     }

//     // Floyd-Warshall
//     for (int k = 0; k < V; k++) {
//         for (int i = 0; i < V; i++) {
//             for (int j = 0; j < V; j++) {
//                 if (dist[i][k] != INF && dist[k][j] != INF &&
//                     dist[i][k] + dist[k][j] < dist[i][j]) {
//                     dist[i][j] = dist[i][k] + dist[k][j];
//                 }
//             }
//         }
//     }

//     cout << "\nShortest distance matrix:\n";

//     for (int i = 0; i < V; i++) {
//         for (int j = 0; j < V; j++) {
//             if (dist[i][j] == INF)
//                 cout << "INF ";
//             else
//                 cout << dist[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//15.8 queens
// #include <iostream>
// using namespace std;

// int board[8][8] = {0};

// bool isSafe(int row, int col) {

//     // Check row on left side
//     for (int i = 0; i < col; i++)
//         if (board[row][i])
//             return false;

//     // Upper diagonal
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j])
//             return false;

//     // Lower diagonal
//     for (int i = row, j = col; i < 8 && j >= 0; i++, j--)
//         if (board[i][j])
//             return false;

//     return true;
// }

// bool solve(int col) {

//     if (col >= 8)
//         return true;

//     for (int i = 0; i < 8; i++) {

//         if (isSafe(i, col)) {
//             board[i][col] = 1;

//             if (solve(col + 1))
//                 return true;

//             // Backtrack
//             board[i][col] = 0;
//         }
//     }

//     return false;
// }

// int main() {

//     if (solve(0)) {
//         cout << "One solution:\n";

//         for (int i = 0; i < 8; i++) {
//             for (int j = 0; j < 8; j++) {
//                 cout << board[i][j] << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         cout << "No solution exists";
//     }

//     return 0;
// }

//16.subset sum
// #include <iostream>
// using namespace std;

// int n, target;
// int arr[100];

// void subsetSum(int index, int sum) {

//     if (sum == target) {
//         cout << "Subset found\n";
//         return;
//     }

//     if (index == n || sum > target)
//         return;

//     // Include current element
//     subsetSum(index + 1, sum + arr[index]);

//     // Exclude current element
//     subsetSum(index + 1, sum);
// }

// int main() {

//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter target sum: ";
//     cin >> target;

//     subsetSum(0, 0);

//     return 0;
// }


//17. string matching
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string text, pattern;

//     cout << "Enter text: ";
//     cin >> text;

//     cout << "Enter pattern: ";
//     cin >> pattern;

//     int n = text.length();
//     int m = pattern.length();

//     bool found = false;

//     for (int i = 0; i <= n - m; i++) {
//         int j;

//         for (j = 0; j < m; j++) {
//             if (text[i + j] != pattern[j])
//                 break;
//         }

//         if (j == m) {
//             cout << "Pattern found at position " << i << endl;
//             found = true;
//         }
//     }

//     if (!found)
//         cout << "Pattern not found";

//     return 0;
// }


//18.hamiltonian
// #include <iostream>
// using namespace std;

// int graph[10][10], path[10], n;

// bool isSafe(int v, int pos) {

//     // Check if edge exists
//     if (!graph[path[pos - 1]][v])
//         return false;

//     // Check if already visited
//     for (int i = 0; i < pos; i++)
//         if (path[i] == v)
//             return false;

//     return true;
// }

// bool hamiltonian(int pos) {

//     if (pos == n) {
//         return graph[path[pos - 1]][path[0]];
//     }

//     for (int v = 1; v < n; v++) {

//         if (isSafe(v, pos)) {
//             path[pos] = v;

//             if (hamiltonian(pos + 1))
//                 return true;

//             // Backtrack
//             path[pos] = -1;
//         }
//     }
//     return false;
// }

// int main() {

//     cout << "Enter number of vertices: ";
//     cin >> n;

//     cout << "Enter adjacency matrix:\n";
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             cin >> graph[i][j];

//     // Initialize path
//     for (int i = 0; i < n; i++)
//         path[i] = -1;

//     path[0] = 0;

//     if (hamiltonian(1)) {
//         cout << "Hamiltonian Cycle:\n";

//         for (int i = 0; i < n; i++)
//             cout << path[i] << " ";

//         cout << path[0]; // return to start
//     } else {
//         cout << "No Hamiltonian Cycle exists";
//     }

//     return 0;
// }


//19.graph coloring
// #include <iostream>
// using namespace std;

// int graph[10][10], color[10] = {0};
// int n, m;

// bool isSafe(int v, int c) {
//     for (int i = 0; i < n; i++)
//         if (graph[v][i] && color[i] == c)
//             return false;
//     return true;
// }

// bool graphColoring(int v) {

//     if (v == n)
//         return true;

//     for (int c = 1; c <= m; c++) {

//         if (isSafe(v, c)) {
//             color[v] = c;

//             if (graphColoring(v + 1))
//                 return true;

//             // Backtrack
//             color[v] = 0;
//         }
//     }
//     return false;
// }

// int main() {

//     cout << "Enter number of vertices: ";
//     cin >> n;

//     cout << "Enter adjacency matrix:\n";
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             cin >> graph[i][j];

//     cout << "Enter number of colors: ";
//     cin >> m;

//     if (graphColoring(0)) {
//         cout << "Coloring Solution:\n";

//         for (int i = 0; i < n; i++)
//             cout << "Vertex " << i << " -> Color " << color[i] << endl;
//     } else {
//         cout << "No solution exists";
//     }

//     return 0;
// }


//20.n-queens
// #include <iostream>
// using namespace std;

// int board[10][10] = {0};
// int N;

// bool isSafe(int row, int col) {

//     // Check row on left side
//     for (int i = 0; i < col; i++)
//         if (board[row][i])
//             return false;

//     // Upper diagonal
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j])
//             return false;

//     // Lower diagonal
//     for (int i = row, j = col; i < N && j >= 0; i++, j--)
//         if (board[i][j])
//             return false;

//     return true;
// }

// bool solve(int col) {

//     if (col >= N)
//         return true;

//     for (int i = 0; i < N; i++) {

//         if (isSafe(i, col)) {
//             board[i][col] = 1;

//             if (solve(col + 1))
//                 return true;

//             // Backtrack
//             board[i][col] = 0;
//         }
//     }
//     return false;
// }

// int main() {

//     cout << "Enter number of queens: ";
//     cin >> N;

//     if (solve(0)) {
//         cout << "Solution:\n";

//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < N; j++)
//                 cout << board[i][j] << " ";
//             cout << endl;
//         }
//     } else {
//         cout << "No solution exists";
//     }

//     return 0;
// }


//21. lifo using stack
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> s;
//     int n, x;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     cout << "Enter node values:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         s.push(x);
//     }

//     cout << "LIFO Node Selection Order:\n";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }

//22.fifo using queue
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;
//     int n, x;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     cout << "Enter node values:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> x;
//         q.push(x);
//     }

//     cout << "FIFO Node Selection Order:\n";
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;
// }

//23.tsp lc bb fixed
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// #define INF 9999
// int tsp(int graph[4][4]) {
//     vector<int> perm = {1, 2, 3};
//     int min_cost = INF;
//     do {
//         int cost = graph[0][perm[0]] +
//                    graph[perm[0]][perm[1]] +
//                    graph[perm[1]][perm[2]] +
//                    graph[perm[2]][0];
//         min_cost = min(min_cost, cost);
//     } while (next_permutation(perm.begin(), perm.end()));
//     return min_cost;
// }
// int main() {
//     int graph[4][4] = {
//         {0, 10, 15, 20},
//         {10, 0, 35, 25},
//         {15, 35, 0, 30},
//         {20, 25, 30, 0}
//     };
//     cout << "Minimum travelling cost: "
//          << tsp(graph);
//     return 0;
// }


//24.knapsack lc bb fixed
// #include <iostream>
// #include <queue>
// using namespace std;
// struct Node {
//     int level, profit, weight;
//     float bound;
// };
// // Comparator for max heap (based on bound)
// struct compare {
//     bool operator()(Node a, Node b) {
//         return a.bound < b.bound;
//     }
// };
// int n, W;
// int wt[10], val[10];
// // Bound function
// float bound(Node u) {
//     if (u.weight >= W)
//         return 0;
//     float profit_bound = u.profit;
//     int j = u.level + 1;
//     int totweight = u.weight;
//     while (j < n && totweight + wt[j] <= W) {
//         totweight += wt[j];
//         profit_bound += val[j];
//         j++;
//     }
//     if (j < n)
//         profit_bound += (W - totweight) * ((float)val[j] / wt[j]);
//     return profit_bound;
// }
// int knapsackLC() {
//     priority_queue<Node, vector<Node>, compare> pq;
//     Node u, v;
//     u.level = -1;
//     u.profit = 0;
//     u.weight = 0;
//     u.bound = bound(u);
//     pq.push(u);
//     int maxProfit = 0;
//     while (!pq.empty()) {
//         u = pq.top();
//         pq.pop();
//         if (u.bound > maxProfit) {
//             v.level = u.level + 1;
//             // Include item
//             v.weight = u.weight + wt[v.level];
//             v.profit = u.profit + val[v.level];
//             if (v.weight <= W && v.profit > maxProfit)
//                 maxProfit = v.profit;
//             v.bound = bound(v);
//             if (v.bound > maxProfit)
//                 pq.push(v);
//             // Exclude item
//             v.weight = u.weight;
//             v.profit = u.profit;
//             v.bound = bound(v);
//             if (v.bound > maxProfit)
//                 pq.push(v);
//         }
//     }
//     return maxProfit;
// }
// int main() {
//     cout << "Enter number of items: ";
//     cin >> n;
//     cout << "Enter weights and profits:\n";
//     for (int i = 0; i < n; i++)
//         cin >> wt[i] >> val[i];
//     cout << "Enter knapsack capacity: ";
//     cin >> W;
//     cout << "Maximum Profit (LC Branch & Bound): "
//          << knapsackLC();
//     return 0;
// }
