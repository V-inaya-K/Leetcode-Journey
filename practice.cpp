
//Program to take age as input and tell that wether you are adult
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x;
//     cout<< " Enter Your age ";cin>>x;
//     if(x>=18){
//         cout<< "You are an adult";
//     }else{
//         cout<< "You are a minor";
//     }


//     return 0;
// }
// //Prgram for school grading system
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x;
//     cout<< " Enter Your Marks ";cin>>x;
//     if(x<25){
//         cout<< "F Grade";
//     }else if(x<=45){
//         cout<< "E Grade";
//     }else if(x<=65){
//         cout<< "D Grade";
//     }else if(x<=85){
//         cout<< "C Grade";
//     }else if(x<=90){
//         cout<< "B Grade";
//     }else if(x<=100){
//         cout<< "A Grade";
//     }


//     return 0;
// }



//Program to cgeck eleigiblity of employee for retirement
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int x;
// 	cout<< " Enter Your age ";
// 	cin>>x;
// 	if(x<18){
// 	    cout << "Not eligible for job";
// 	}else if(x<=54){
// 	    cout << "Eligible for job";
// 	}else if(x<=57){
// 	    cout << "Eligible for job , but retirement soon!!";
// 	}else if(x>57){
// 	    cout << "Retiremnet time!!";
// 	}
// 	return 0;
// }


//SWITCH STATEMENTS

//Program to access days according to number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int day;
//     cout<<"Enter day number ";cin>>day;
//     switch(day){
//         case 1:
//             cout<<"Monday";
//             break;
//         case 2:
//             cout<<"Tuesday";
//             break;
//         case 3:
//             cout<<"Wednesday";
//             break;
//         case 4:
//             cout<<"Thursday";
//             break;
//         case 5:
//             cout<<"Friday";
//             break;
//         case 6:
//             cout<<"Saturday";
//             break;
//         case 7:
//             cout<<"Sunday";
//             break;
//         default:
//             cout<<"Invalid";
//             break;
       //break; used to come out of current conditional statement like loop,switch etc.
//     }
//    return 0;

// }

//ARRAY AND STRINGS
//An array is collection of elements of same data type. 
//First element stored randomly and next elements stored consecutively.
//2D Array :- arr[row][col]
//String is collection of characters.

//------------------------------------------------------------------------------

// for(start;end;increement/decreement)
//while(end){ 
//  increement/decreement
// }

//do-while is exit controlled lopp executes for once even if condition false.
// example:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
    
    // for(i=0;i<=10;i=i+1){                  #for loop
    //     cout << "I Love You!! \n";
    // }
    
//     while(i<=10){                          #while loop
//         cout <<"Hello World!! \n";
//         i=i+1;
//     }
//     return 0;
// }


//FUNCTIONS
//1. Void -> Does not return anything.
//2. Return -> Function that return value.
//3. Parametrize -> Has parameters as arguments.
//4. Non Parametrize -> Does not Have parameters as arguments.

//Function give garbage value if does not find any return value in function(return not needed in case function is defined as void).

//Rate at which time taken increases w.r.t input size is time complexity.

//------------------------------------------------------------------------------

//Patter Questions:-

//Pattern questions have 2 "for" loop(most of the time)
//Rule 1: Outer "for" loop is for number of rows and Inner "for" loop is for number of columns.
//Rule 2: For Inner "for" loop focus on columns and connect them with rows somehow.
//Rule 3: Print pattern character in Inner "for" loop.
//Rule 4: Observe symmetry of patterns (if needed).

//Write only function in online coding platforms.

//Question 1:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     int j;
//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             cout<<"&";
//         }
//         cout<<endl;
//     }
// }

// Output:
// &&&&&
// &&&&&
// &&&&&
// &&&&&
// &&&&&

//Question 2:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<=i;j++){
//             cout<<"# ";
//         }
//         cout<<endl;
//     }
    
    
// }

// Output:
// # 
// # # 
// # # # 
// # # # # 

//Question 3:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<4;i++){
//         for(j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// Output:
// 1
// 12
// 123

//Question 4:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<4;i++){
//         for(j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// Output:
// 1
// 22
// 333

//Question 5:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Output:
// ****
// ***
// **
// *

//Question 6:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<6;i++){
//         for(j=1;j<6-i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// Outpu:
// 1234
// 123
// 12
// 1


//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<5-i-1;j++){
//             cout<<" ";
//         }
//         for(j=0;j<2*i+1;j++){
//             cout<<"&";
//         }
//         for(j=0;j<5-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
        
//     }
// }
// Output:-
//     &    
//    &&&   
//   &&&&&  
//  &&&&&&& 
// &&&&&&&&&


//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(j=0;j<9-2*i;j++){
//             cout<<"&";
//         }
//         for(j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
        
//     }
// }
// Output:-
// &&&&&&&&&
//  &&&&&&& 
//   &&&&&  
//    &&&   
//     &    

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<5-i-1;j++){
//             cout<<"*";
            
//         }
//         for(j=0;j<2*i+1;j++){
//             cout<<" ";
//         }
//         for(j=0;j<5-i-1;j++){
//             cout<<"*";
//         }
        
//         cout<<endl;
        
//     }
//     for(i=0;i<5;i++){
//         for(j=0;j<i;j++){
//             cout<<"*";
            
//         }
//         for(j=0;j<9-2*i;j++){
//             cout<<" ";
//         }
//         for(j=0;j<i;j++){
//             cout<<"*";
//         }
        
//         cout<<endl;
        
//     }
    
// }

// //
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(i=0;i<4;i++){
//         for(j=0;j<4-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }

//Question :
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<2;i++){
//         for(j=0;j<2-i;j++){
//             cout<<"*";
//         }
//         for(j=0;j<2*i;j++){
//             cout<<" ";
//         }
//         for(j=0;j<2-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<1+i;j++){
//             cout<<"*";
//         }
//         for(j=0;j<2-2*i;j++){
//             cout<<" ";
//         }
//         for(j=0;j<1+i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }
// Output:
// ****
// *  *
// *  *
// ****

//

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int start=1;
//     for(int i=0;i<5;i++){
//         if(i%2 == 0) start=1;
//         else start=0;
//         for(int j=0;j<=i;j++){
//             cout<< start;
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }

// Output:
// 1
// 01
// 101
// 0101
// 10101

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=1;j<i;j++){
//             cout<<j;
//         }
//         for(j=1;j<9-2*i;j++){
//             cout<<" ";
//         }
//         for(j=1;j<i;j++){
//             cout<<j;
//         }
//         cout<<endl;
        
//     }
// }


//BASIC MATHS

// % operator represent remainder e.g. 7789%10 = 9(remainder)

//1. Count number of Digit in given number
// Method 1:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,count=0;
//     cout<<"Enter Number: ";cin>>n;
//     while(n>0){
//         int last=n%10;  //n%10 gives remainer i.e. extracts last digit of input number.
//         count++;        //increement count to count no. of last digits which will no. of digits.
//         n=n/10;         //divide number by 10 so that last digit is removed and same while loop run for the updated n.
//     }
//     cout<<"Total Digits: "<<count;
//     return 0;
// }
// Method 2:
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,count=0;
//     cout<<"Enter Number: ";cin>>n;
//     count= (int)(log10(n)+1); //Fotmula for total no. of digits.
//     cout<<"Total Digits: "<<count;
//     return 0;
// }

//Que: Reverse of a number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int rev=0,n;
//     cout<<"Enter Number: ";cin>>n;
//     while(n!=0){
//         int last=n%10; //to find last digit.
//         rev=(rev*10)+last;
//         n=n/10; //to remove last digit from n.
//     }
//     cout<<rev;
//     return 0;
// }

//Que: To Check Pallindrome.
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int rev=0,n;
//     cout<<"Enter Number: ";cin>>n;
//     int org=n;
//     while(n!=0){
//         int last=n%10; //to find last digit.
//         rev=(rev*10)+last;
//         n=n/10; //to remove last digit from n.
//     }
//     if(org==rev){
//         cout<<"A Pallindrome";
//     }else{
//         cout<<"Not a Pallindrome";
//     }
//     return 0;
// }

//Que: To check armstrong number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter Number: ";cin>>n;
//     int arm=n;  //assign n to another variable
//     while(n>0){
//         int last=n%10; //to find last digit.
//         sum=sum+(last*last*last); //Sum include last sum +last digit multiplied thrice
//         n=n/10; //to remove last digit from n.
//     }
//     if(arm==sum){
//         cout<<"Armstrong Number";
//     }else{
//         cout<<"Not Armstrong Number";
//     }
//     return 0;
// }

//Que: Print All divisors
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,6,9,23,45},n;
//     cout<<"Enter Number: ";cin>>n;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         if(n%arr[i]==0){
//             cout<<arr[i]<<"\n";
//         }
//     }
//     return 0;
// }

//To find prime number - if a number has only 2 divisor (1 and number itself)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,6,9,23,45},n;
//     cout<<"Enter Number: ";cin>>n;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int count=1;
//     for(int i=0;i<size;i++){
//         if(n%arr[i]==0){
//             // cout<<arr[i]<<"\n";
//             count++;
//         }
//     }
//     if(count!=2 || n==1){
//         cout<<"Not Prime";
//     }else{
//         cout<<"A prime number";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     int count=1;
//     for(int i=0;i<size;i++){
//         if(n%arr[i]==0){
//             // cout<<arr[i]<<"\n";
//             count++;
//         }
//     }
//     if(count!=2 || n==1){
//         cout<<"Not Prime";
//     }else{
//         cout<<"A prime number";
//     }
//     return 0;
// }

//Recursion: When a function calls itself until a specific condition met.
// Condition that we use to prevent stach overflow by recursion is called "Base Condition'.
// There can be single/multiple base conditions.
//"return" terminates the function.

//Q1:Print name N times using recursion.Time- O(n),Space-O(n)
// #include<bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
//     if(i>n){            //Base Condition
//         return;
//     }
//     cout<<"Vinayak\n";
//     f(i+1,n);
    
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     f(1,n);
    
// }

//Q2:Print 1 to N using recursion.Time-O(n),Space-O(n)
// #include<bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
//     if(i>n){            //Base Condition
//         return;
//     }
//     cout<<i<<"\n";
//     f(i+1,n);
    
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     f(1,n);
    
// }

//Q3:Print N to 1 using recursion.Time-O(n),Space-O(n)
// #include<bits/stdc++.h>
// using namespace std;
// void f(int n,int i){
//     if(i>n){            //Base Condition
//         return;
//     }
//     cout<<n<<"\n";
//     f(n-1,i);
    
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     f(n,1);
    
// }


//In backtraching "Cout" is after recursive function call.
// #include<bits/stdc++.h>
// using namespace std;
// void f(int i,int n){
//     if(i>n){            //Base Condition
//         return;
//     }
//     f(i+1,n);
//     cout<<i<<"\n";
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     f(1,n);
    
// }


//Q5:Sum of first N numbers
// #include<bits/stdc++.h>
// using namespace std;
// void f(int sum,int n){
//     if(n<1){            //Base Condition
//         cout<<sum;
//         return;
//     }
//     // cout<<sum+i<<"\n";
    
//     f(sum+n,n-1);
    
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     f(0,n);
    
// }

//Factorial of N numbers 
// #include<bits/stdc++.h>
// using namespace std;
// void f(int fac,int n){
//     if(n<1){            //Base Condition
//         cout<<fac;
//         return;
//     }
//     // cout<<sum+i<<"\n";
    
//     f(fac*n,n-1);
    
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     f(1,n);
    
// }

//Reverse of array
// #include<bits/stdc++.h>
// using namespace std;
// void f(int i,int arr[],int n){
    
//     if(i<=n/2){            //Base Condition
//         return;
//     }
//     swap(arr[i],arr[n-i-1]);
//     cout<<arr;
    
//     f(i+1,arr,n);
    
// }
// int main(){
//     int arr[]={1,2,3,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     f(0,arr,n);
    
// }

//MULTIPLE RECURSSION
//Find fibonacci series upto N using multiple recursive.0 1 1 2 3 5 8 13 21.... 
// [fibonacci(n)=fibonacci(n-1)+fibonacci(n-2)]
// #include<bits/stdc++.h>
// using namespace std;
// int fibonacci(int n){
//     if(n<=1){            //Base Condition
//         return n;
//     }
//     // Problem broken down into 2 functional calls
//     // and their results combined and returned.
//     int last = fibonacci(n-1);
//     int slast = fibonacci(n-2);
//     return last + slast;
    
// }
// int main(){
//     int n;
//     cout<<"Enter Number: ";cin>>n;
//     cout<<fibonacci(n);
    
// }



//BINARY SEARCH
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int left = 0, right = nums.size() - 1; // Initialize pointers
        
//         while (left <= right) { // Continue while the search space is valid
//             int mid = left + (right - left) / 2; // Calculate the mid-point to prevent overflow
            
//             if (nums[mid] == target) {
//                 return mid; // Return index if target is found
//             } else if (nums[mid] < target) {
//                 left = mid + 1; // Search in the right half
//             } else {
//                 right = mid - 1; // Search in the left half
//             }
//         }
        
//         return -1; // If target is not found, return -1
//     }
// };

//lower bound is the smallest index, ind, where arr[ind] >= x
// #include <bits/stdc++.h>
// using namespace std;
// int lowerBound(vector<int> arr, int n, int x) {
//     int low = 0, high = n - 1;
//     int ans = n;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] >= x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }  
// [OR]  lb=lower_bound(arr.begin(),arr.end())-arr.begin; //For c++ stl only
// int main()
// {
//     vector<int> arr = {3, 5, 8, 15, 19};
//     int n = 5, x = 9;
//     int ind = lowerBound(arr, n, x);
//     cout << "The lower bound is the index: " << ind << "\n";
//     return 0;
// }

//upper bound is the smallest index, ind, where arr[ind] > x
// #include <bits/stdc++.h>
// using namespace std;
// int lowerBound(vector<int> arr, int n, int x) {
//     int low = 0, high = n - 1;
//     int ans = n;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] > x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }  
// [OR]  lb=upper_bound(arr.begin(),arr.end())-arr.begin; //For c++ stl only
// int main()
// {
//     vector<int> arr = {3, 5, 8, 15, 19};
//     int n = 5, x = 9;
//     int ind = lowerBound(arr, n, x);
//     cout << "The lower bound is the index: " << ind << "\n";
//     return 0;
// }
// floor of x is the largest element in the array which is smaller than or equal to x( i.e. largest element in the array <= x).
// ceiling of x is the smallest element in the array greater than or equal to x( i.e. smallest element in the array >= x).

//Array : Collection oif elements of same data type
//In interviews, we must ask about test cases in dsa topic. And Answer each question in 3 steps 
// 1.Brute force(first soln. that comes to mind) 
// 2.Better (Optimized brute force)
// 3.Optimal Solution

// example: Find largest element in an array



//Optimal Solution to find largest and second largest element in array. Time Complexity= O(n)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,4,8,8,2};
//     int largest=arr[0];
//     int slargest=-1;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=1;i<n;i++){
//         if(arr[i]>largest){
//             slargest=largest;
//             largest=arr[i];
            
//         }
        
//     }
//     cout<<largest<<slargest;
//     return 0;
// }

//To check if array is sorted.
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,4,8,8,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=1;i<n;i++){
//         if(arr[i]>=arr[i-1]){
            
            
//         }else{
//             return false;
//         }
        
//     }
//     return true;

// }

//Remove duplicate elements from sorted array

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,1,2,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i]!=arr[j]){
//             i++;
//             arr[i]=arr[j];
            
//         }
//         cout<<arr[i+1];
        
//     }

// }


//Attempt-1
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,1,2,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             cout<<arr[i];
            
//         }else if(arr[i]!=arr[i+1]){
//             cout<<arr[i];
//         }
        
//     }
//     return 0;

// }

//To left rotate array by one place
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,1,2,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;

// }


//To left rotate array by k places.
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,1,2,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k; //To make k less than n incase user inputs large number.
//     cout<<"Enter Places";cin>>k;
//     k = k % n;
//     cout<<k<<endl;
//     // int n=sizeof(arr)/sizeof(arr[0]);
//     int temp[k];
//     for(int i=0; i<k; i++){
//         temp[i] = arr[i];
//     }
//     for (int i = 0; i < n - k; i++) {
//         arr[i] = arr[i + k];
//     }

//     // Move stored elements to the end
//     for (int i = 0; i < k; i++) {
//         arr[n - k + i] = temp[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] ;
//     }
//     return 0;

// }

//MOVE ZEROS TO END
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j=-1;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 j=i;
//                 break;
//             }
//         }
//         if(j==-1){
//             return;
            
//         }
//         for(int i=j+1;i<nums.size();i++){
//             if(nums[i]!=0){
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }
          
//     }
// };

// Hashing
// A program of 10^8 complexity takes nearly 1 second to execute.
// Combination of the steps, pre-storing, and fetching.

// Integer hashing:-
// array size =10^6 (Inside main function)
//            =10^7 (globally)
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n; //sizeofarray
//     cin >> n;
//     int arr[n]; //elements of array
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }

// Character hashing:-

// (i) Lowercase characters:
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s;
//     cin >> s;

//     //precompute:
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c - 'a'] << endl;
//     }
//     return 0;
// }


// (ii) Mixed Characters:
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s;
//     cin >> s;

//     //precompute:
//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c] << endl;
//     }
//     return 0;
// }

// Mapping: Maps are sorted and prevent memory wastage.
// Map: Key-Value pair in Sorted way. time complexity = O(N)
// Unordered Map: Key-Value pair in random way. time complexity = O(1)
// Unordered Map preferred over normal maps.

// 1. For Mapping Arrays:-
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Size of Array ";cin>>n;
//     int arr[n];
//     map<int,int> mpp; //creating map
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp[arr[i]]++; //incrementing map value count by one.
//     }
//     int q;
//     cout<<"Enter no. of queries ";cin>>q;
//     while(q--){   //No. of queries.
//         int num;
//         cout<<"Enter Number to Search ";cin>>num;
//         cout<<"No. of occurence of "<<num<<" is: "<< mpp[num] <<endl;
//     }
//     for(auto it : mpp){   //To traverse through Map.
//         cout<<it.first<<" -> "<<it.second<<endl;
//     }
//     return 0;
// }


// 2. For Mapping Characters:-
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter String ";cin>>s;
//     cout<<s.length();
//     map<char,int> mpp; //creating map
//     for(int i=0;i<s.length();i++){
//         mpp[s[i]]++; //incrementing map value count by one.
//     }
//     int q;
//     cout<<"Enter no. of queries ";cin>>q;
//     while(q--){   //No. of queries.
//         char c;
//         cout<<"Enter Number to Search ";cin>>c;
//         cout<<"No. of occurence of "<<c<<" is: "<< mpp[c] <<endl;
//     }
//     for(auto it : mpp){   //To traverse through Map.
//         cout<<it.first<<" -> "<<it.second<<endl;
//     }
//     return 0;
// }


// Sorting: 
// 1. Selection Sort: Find the minimum element and swap min ekement wuth first element in range.Time Complexity: O(n^2)
// #include<bits/stdc++.h>
// using namespace std;
// void selection_sort(int arr[],int n){
//     for(int i=0;i<=n-2;i++){
//         int min=i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }
//         int temp=arr[min];
//         arr[min]=arr[i];
//         arr[i]=temp;
//     }
// }
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         selection_sort(arr,n);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }

// 2. Bubble Sort : Push max element to the last using adjacent swaps.
// Time Complexity - Best case=O(n) {when array is already ordered} - Avergae case= O(n^2)
// #include<bits/stdc++.h>
// using namespace std;
// void Bubble_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){   //Loop for n-1 runs on array
//         for(int j=0;j<n-1-i;j++){ //no. of swaps in each subarray
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
                
//             }
//         }
        
//     }
// }
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Bubble_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }

// 3. Insertion Sort: Takes an element And places in currecnt order.
// #include<bits/stdc++.h>
// using namespace std;
// void Insertion_sort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){   //Loop for n-1 runs on array
//         int j=i;
//         while(j>0 && arr[j-1]> arr[j]){    //arr[j-i] is the last element for comparison
//             int temp= arr[j-1];
//             arr[j-1]=arr[j];
//             arr[j]=temp;
            
//             j--;
//         }
//     }
// }
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Insertion_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Trick:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// Check if array sorted:
// #include<bits/stdc++.h>
// using namespace std;
// bool Check_sort(int arr[],int n){
//     for(int i=0;i<=n;i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true; //True returned only if whole for loop is false.
// }
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Check_sort(arr,n); 
//     if (Check_sort(arr, n)) {
//         cout << "The array is sorted in non-decreasing order.\n";
//     } else {
//         cout << "The array is not sorted.\n";
//     }
//     return 0;
// }

// Check if array is rotated and was sorted before it was rotated;
// #include<bits/stdc++.h>
// using namespace std;
// bool Check_sort(int arr[],int n){
//     int count=0;
//     for(int i=0;i<=n;i++){
//         if(arr[i]<arr[(i-1)%n])){
//             count++;
//             return false;
//         }
//     }
//     return count>=1; //True returned only if whole for loop is false.
// }
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     Check_sort(arr,n); 
//     if (Check_sort(arr, n)) {
//         cout << "The array is sorted and rotated.\n";
//     } else {
//         cout << "The array is not sorted but rotated.\n";
//     }
//     return 0;
// }

// To check duplicated sorted array and remove duplicates.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k=1; //initial counter
//     int j=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[i-1]){
//             arr[j]=arr[i];
//             j++;
//             k++;
//         }
//     }
//     for(int i=0;i<j-1;i++){
//         cout<<arr[i];
//     }
//     cout<<k;
//     return 0;
// }

//LEFT AND RIGHT ROTATE BY K.
// #include<bits/stdc++.h>
// using namespace std;
// int main()

// int arr1[];
// int arr2[];
// int sum1=0;
// int sum2=0;
// int n1;
// int n2;
// for(int i=0;i<n1;i++){
//     while(i>0){
//         arr1[i]=arr1[i] + arr1[i+1]
//         sum1=sum1+arr1[i];
//     }
// }
// for(int i=0;i<n2;i++){
//     while(i>0){
//         arr2[i]=arr2[i] + arr2[i+1]
//         sum2=sum2+arr2[i];
//     }
// }

//MOVE ZEROS TO END:-
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,j=0; cout<<"Enter size of array";cin>>n;
//     int arr[n];
//     int temp[n]; //temp is global
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             temp[j++]=arr[i]; //insert arr[i] into temp when arr[i]!=0
//         }
//     }
//     while (j < n) {    //Run till j<n
//         temp[j++] = 0;   //Make Remaining index in temp as 0
//     }
//     for(int i=0;i<n;i++){
//         cout<<temp[i];
//     }
//     return 0;
// }

// Linked Lists: a linear data structure that can be visualized as a chain with different nodes 
// connected, where each node represents a different element. The difference between arrays and 
// linked lists is that the elements are not stored at a contiguous location in case of linked list 
// and size of linked list can be decreased/increased {both of these not possible in arrays}.

// for any element to be added in an array, we need the exact next memory location to be empty, 
// and it is impossible to guarantee that it is possible.
// The ‘head’ is the first node, and the ‘tail’ is the last node in a linked list.
// We use Linked List in:-
// 1. Stacks and Queues {whwere we need variable size, and variable size  not offered by array}
// 2. Web search and access in browser
// We store data and pointer to next node in linked list
// #include <bits/stdc++.h>
// using namespace std;
// class Node{ //Use class because it offers us to use OOPs concepts, which is not possible with struct
//     public: // access modifier
//     int data; // the data value stored in node
//     Node* next; //Node* is the pointer to the next value/value of next node
//     public:
//     // constructor
//     Node (int data1, Node* next1){
//         data=data1;  // Initialize data with the provided value
//         next=next1;  // Initialize next with the provided
//     }
//     Node (int data1){
//         data=data1;  // Initialize data with the provided value
//         next=nullptr;  // Initialize next as null since it's the end of the list

//     }
// };
// int main(){
//     vector<int> arr={2,5,8,7};
//     Node* y= new Node(arr[3]); //stores a pointer to the memory location of arr[0]
//     cout<<y<<'\n'; // returns the memory value
//     cout<<y->data<<'\n'; // returns the data stored at that memory point where y is refering
// }
// int main(){
//     int n=8;
//     int* y=&n; //int* is the pointer to n=8;
//     cout<<y; // & is the pointer to location hwere n=8 is stored. i.e n=8 stored at &n position
// }

//CONVERT ARRAY TO LINKED LIST NAD TRAVERSE IT
// #include <bits/stdc++.h>
// using namespace std;
// class Node{ //Use class because it offers us to use OOPs concepts, which is not possible with struct
//     public: // access modifier
//     int data; // the data value stored in node
//     Node* next; //Node* is the pointer to the next value/value of next node
//     public:
//     // constructor
//     Node (int data1, Node* next1){
//         data=data1;  // Initialize data with the provided value
//         next=next1;  // Initialize next with the provided
//     }
//     Node (int data1){
//         data=data1;  // Initialize data with the provided value
//         next=nullptr;  // Initialize next as null since it's the end of the list

//     }
// };
// Node* converArr2LinkList(vector<int> &arr){
//     Node* head=new Node(arr[0]);
//     Node* mover=head;
//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i]);
//         mover->next=temp;
//         mover=temp;
//     }
//     return head;
    
// }
// int main(){
//     vector<int> arr={2,5,8,7};
//     Node* head= converArr2LinkList(arr);
//     Node* temp=head; //temp=head for traversal
//     while(temp){
//         cout << temp->data <<" "; //access value in node;
//         temp= temp->next; //move temp to next node once temp->data accessed
//     }
//     // cout<<head->data; //data in head/first node
// }

//DELETIONS IN SIMPLE LINKED LIST
// #include <bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;

//     // Constructors
//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }

//     Node(int data1) {
//         data = data1;
//         next = nullptr;
//     }
// };

// // Convert array to linked list
// Node* converArr2LinkList(vector<int>& arr) {
//     if (arr.empty()) return nullptr;

//     Node* head = new Node(arr[0]); //head of linked list
//     Node* mover = head;

//     for (int i = 1; i < arr.size(); i++) {
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }

// // Delete from beginning
// Node* deleteAtBeginning(Node* head) {
//     if (head == nullptr) return nullptr;

//     Node* temp = head;
//     head = head->next;
//     delete temp;

//     return head;
// }

// // Delete from end
// Node* deleteAtEnd(Node* head) {
//     if (head == nullptr || head->next == nullptr) {
//         delete head;
//         return nullptr;
//     }

//     Node* temp = head;
//     while (temp->next->next != nullptr) {
//         temp = temp->next;
//     }

//     delete temp->next;
//     temp->next = nullptr;
//     return head;
// }

// // Delete at a given position (0-based index)
// Node* deleteAtPosition(Node* head, int pos) {
//     if (head == nullptr) return nullptr;

//     if (pos == 0) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node* temp = head;
//     for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
//         temp = temp->next;
//     }

//     if (temp->next == nullptr) return head; // Position out of bounds

//     Node* nodeToDelete = temp->next;
//     temp->next = temp->next->next;
//     delete nodeToDelete;

//     return head;
// }

// // Delete by node value (first occurrence)
// Node* deleteByValue(Node* head, int value) {
//     Node* curr = head; //curr=head
//     while (curr && curr->next) { //curr and curr->next not null
//         if (curr->data == value) {
//             Node* nextNode = curr->next; 
//             curr->data = nextNode->data; //replace data of current node with data of node just next
//             curr->next = nextNode->next;
//             delete nextNode; //delete repeated node
//             return head;
//         }
//         curr = curr->next; //if curr->data != value then move to next node data
//     }
//     return head;
// }

// // Print the linked list
// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "\n";
// }

// // Main function
// int main() {
//     vector<int> arr = {2, 30, 8, 7};
//     Node* head = converArr2LinkList(arr); //Make head of array to be 2;
    
//     int k,val;
    
//     cout << "Original list: ";
//     printList(head);

//     head = deleteAtBeginning(head);
//     cout << "After deleting at beginning: ";
//     printList(head);

//     head = deleteAtEnd(head);
//     cout << "After deleting at end: ";
//     printList(head);

//     cout<<"Enter node position";cin>>k;
//     head = deleteAtPosition(head, k); // Delete node at k position
//     cout << "After deleting at position k: ";
//     printList(head);
    
//     cout<<"Enter value to delete: ";cin>>val;
//     head = deleteByValue(head, val);
//     cout << "After deleting value val: "; // Delete node where data=value
//     printList(head);

//     return 0;
// }

//
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    // Constructors
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Convert array to linked list
Node* converArr2LinkList(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]); //head of linked list
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Insert at beginning
// Node* insertAtBeginning(Node* head , int val) {
//     Node* newNode=new Node(val);
//     newNode->next=head;
//     return newNode;
// }

// Insert at end
// Node* insertAtEnd(Node* head , int val){
//     Node* t = head; //t is the head
//     while (t->next) t = t->next;//while t->next !=NULL; move t to the next
//     t->next = new Node(val); //when t->next becomes NULL then make its next from nullptr -> val
//     return head;
// }

// // Delete at a given position (0-based index)
// Node* deleteAtPosition(Node* head, int pos) {
//     if (head == nullptr) return nullptr;

//     if (pos == 0) {
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node* temp = head;
//     for (int i = 0; i < pos - 1 && temp->next != nullptr; i++) {
//         temp = temp->next;
//     }

//     if (temp->next == nullptr) return head; // Position out of bounds

//     Node* nodeToDelete = temp->next;
//     temp->next = temp->next->next;
//     delete nodeToDelete;

//     return head;
// }

// // Delete by node value (first occurrence)
// Node* deleteByValue(Node* head, int value) {
//     Node* curr = head; //curr=head
//     while (curr && curr->next) { //curr and curr->next not null
//         if (curr->data == value) {
//             Node* nextNode = curr->next; 
//             curr->data = nextNode->data; //replace data of current node with data of node just next
//             curr->next = nextNode->next;
//             delete nextNode; //delete repeated node
//             return head;
//         }
//         curr = curr->next; //if curr->data != value then move to next node data
//     }
//     return head;
// }

// Print the linked list
// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "\n";
// }

// Main function
// int main() {
//     vector<int> arr = {2, 30, 8, 7};
//     Node* head = converArr2LinkList(arr); //Make head of array to be 2;
    
//     int k,val;
    
//     cout << "Original list: ";
//     printList(head);

    // head = insertAtBeginning(head,3); //insert 3 at beginning
    // cout << "After inserting at beginning: ";
    // printList(head);

    // head = insertAtEnd(head,9 );//insert 9 at end
    // cout << "After inserting at end: ";
    // printList(head);

    // cout<<"Enter node position";cin>>k;
    // head = deleteAtPosition(head, k); // Delete node at k position
    // cout << "After deleting at position k: ";
    // printList(head);
    
    // cout<<"Enter value to delete: ";cin>>val;
    // head = deleteByValue(head, val);
    // cout << "After deleting value val: "; // Delete node where data=value
    // printList(head);

//     return 0;
// }
