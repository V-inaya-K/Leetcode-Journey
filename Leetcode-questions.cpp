// Que1- Concatentaion of Same Array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int j[2*n];
//     for (int i=0;i<n;i++){
//         j[i]=arr[i];
//         j[i+n]=arr[i];
//     }
//     for(int i=0;i<2*n;i++){
//         cout<<j[i];
//     }
//     return 0;
// }

// Output: 12341234
// *******************************************************************************

// Que2- Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int target,arr[]= {3,2,4};
// 	int n=sizeof(arr)/sizeof(arr[0]);
// 	cout<<"Enter Target: ";
// 	cin>>target;
// 	for(int i=0; i<n; i++) {
// 		if(arr[i]+arr[i+1]==target) {
// 			cout<<"\n"<<i<<" and "<<i+1;
// 		}
// 	}
// 	return 0;
// }

// Output: 
// Enter Target: 5
// 0 and 1


// Leetcode:-
// int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
// *******************************************************************************

// Que3- Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn]. Return the array in the form [x1,y1,x2,y2,...,xn,yn].

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={2,5,1,3,4,7};
//     int n=3;
//     for(int i=0;i<2*n;i++){
//         cout<<arr[i]<<arr[i+n];
//     }
//     return 0;
// }

// Output: 235417

// Leetcode:
// vector<int> result(2 * n);  // Preallocate space for the result vector
//     for (int i = 0; i < n; i++) {
//         result[2 * i] = nums[i];         // Assign x_i at even index
//         result[2 * i + 1] = nums[i + n]; // Assign y_i at odd index
//     }
//     return result;
// *******************************************************************************

// Que4- Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     int arr[] = {1, 2, 5, 3, 3, 1};
//     int val,n = sizeof(arr) / sizeof(arr[0]);
//     cout<<" Value";cin>>val;
//     int count = 0; 
//     for (int i = 0; i < n; ++i) {
//         if (arr[i] != val) {
//             arr[count++]=arr[i]; //Add to array without giving count increement.like for i=0(first pass) val != to array element so arr[count]=arr[i] and then it automatically increases couter for next pass.
//             k++;
//         }
//     }
//     cout<<count;
//     return count;
// }
// *******************************************************************************

// Que5- Given an array nums of size n, return the majority element.The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     int arr[] = {6,5,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int res=arr[0];
//     int count = 1; 
//     for (int i = 0; i < n; ++i) {
//         if(count==0){
//             res=arr[i];
            
//         }
//         if (arr[0]==arr[i]) {
//             count++;
//         }
//         else count--;
//     }
//     cout<<res;
//     return res;
//     cout<<res;
// }

// Leetcode:
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count=1;
//         int res=nums[0];
//         for(int i=1;i<nums.size();i++){
//             if(count==0){
//                 res=nums[i];
                
//             }
//             if(res==nums[i]){
//                 count++;
//             }else{
//                 count--;
//             }
//         }
//         return res;
//     }
// };

// *******************************************************************************

// Que6-A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers. 
//Valid palindrome
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="race a car";
//     int start=0;
//     int end=s.size()-1;
//     while(start<end){
//         if(!isalnum(s[start])){   //To increement start if non-alphanumeric.
//             start++;
            
//         }else if(!isalnum(s[end])){ //To decreement end if non-alphanumeric.
//             end--;
            
//         }
//         if(tolower(s[start]) != tolower(s[end])){
//             cout<<"Not A Pallindrome"<<endl;
//             break;
            
//         }else{
//             cout<<"A Pallindrome"<<endl;
//             break;
//         }
//         start++;
//         end--;
//     }
//     return 0;
// }

//Normal Pallindrome
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="Level";  //Works with number and strings both
//     int start=0;
//     int end=s.size()-1;
//     while(start<end){
//         if(tolower(s[start]) != tolower(s[end])){
//             cout<<"Not A Pallindrome"<<endl;
//             break;
            
//         }else{
//             cout<<"A Pallindrome"<<endl;
//             break;
//         }
//         start++;
//         end--;
//     }
//     return 0;
// }

//Reverse Of string
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="evel";
//     int start=0;
//     int end=s.size()-1;
//     while(start<end){
//         swap(s[start],s[end]);
//         end--,start++;
//     }
//     cout<<s;
//     return 0;
// }


//Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only.
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="Lorem Ipsum Lorem  ";  //Works with number and strings both
//     int end=s.size()-1; //Pointer from end
//     int count=0;       //Counter to count no. of words
//     while(end>=0 && s[end]==' '){ //decreemenmt if space found
//         end--;
//     }
//     while(end>=0 && s[end]!=' '){ //decreemenmt end and count till no-spaces
//         count++;
//         end--;
//     }
//     cout<<count;
//   return count;
// }

// Q- Given two strings s and t, return true if s is a subsequence of t, or false otherwise.A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="abc"; 
//     string t = "ahbgdc";  
//     int start=0;  //pointer for s
//     int start1=0; //pointer for t
//     while(start<s.size() && start1<t.size()){ //decreemenmt if space found
//         if(s[start]==t[start1]){
//             start++; // traverse s when condition met.
//         }
//         start1++;//run this every time without checking condition.
//     }
//     if(start==s.size()){
//             cout<<"yes";
//         }else{
//             cout<<"no";
//         }
//     return 0;
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

//MISSING NUMBER IN (0,n) array
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> temp;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());  
//     for (int i = 0; i < n; i++) {
//         if (i != arr[i]) {
//             cout << "Missing number is: " << i << endl;
//             return 0;
//         }
//     }
//     return 0;
// }

//COUNT MAX CONSECUTIVE ONES
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     int count=0,maxCount=0;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++) {
//         if (arr[i]==1) {
//             count++; //Count increements when arr[i]==1
//             maxCount=max(maxCount, count); //choose highest value among maxCount and count
//             //maxCount does not resets,just checks if current maxCount is increased or not.
//         }else{
//             count = 0; //makes count zero when arr[i]==0
//         }
//     }
//     cout << maxCount;
//     return 0;
// }


//Approach 1:-
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     int count=1;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     for (int i = 0; i < n; i++) {
//         if (arr[i+1]==arr[i]) {
//             count++; //Count increements when arr[i]==1
//         }else{
//             count--; //makes count zero when arr[i]==0
//         }
//         if(count==0){
//             cout<<arr[i];
//             break;
//         }
//     }
//     return 0;
// }
//Approach 2:- (XOR) 0^i=i;i^i=0
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     int xorr=0;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++) {
//         xorr+=arr[i];
//     }
//     cout<<xorr;
   
//     return 0;
// }


//FIND MAJORITY ELEMENT THAT APPERS >N/2
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     int count=0;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout<<n;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     map<int,int> mpp; //Map Decleration {Both Key and Value are int}
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++; //Store array elements in map in order of occurence
    // }
//     for(auto it:mpp){
//         if(it.second>(n/2)){ //Searching for Majority element (it.first refer to key and it.second is no. of times it appears)
//             cout<<it.first;
//         }
//     }
//     return 0;
// }

//BEST TIME TO BUY AND SELL STOCKS
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout<<n;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int maxPro = 0;
//     int minPrice = *max_element(arr.begin(),arr.end());
//     for (int i = 0; i < arr.size(); i++) {
//         minPrice = min(minPrice, arr[i]);
//         maxPro = max(maxPro, arr[i] - minPrice);
//     }
//     cout<<maxPro;
//     return 0;
// }

//REARRANGE POSITIVE AND NEGATIVE (2149)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> result(n);
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int positiveIndex=0;int negativeIndex=1;
//     for (int i = 0; i<n; i++) {
//         if(arr[i]>=0){
//             result[positiveIndex]=arr[i];
//             positiveIndex+=2;
//         }else{
//             result[negativeIndex]=arr[i];
//             negativeIndex+=2;
//         }
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=result[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<" "<<arr[i];
//     }
//     return 0;
// }

//FIND NEXT PREMUTATION(31)
//Approach 1:-
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> result(n);
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     next_permutation(arr.begin(),arr.end()); //Using STL
//     for(int i=0;i<n;i++){
//         cout<<" "<<arr[i];
//     }
//     return 0;
// }
//Approach 2:-
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> result(n);
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     // Step 1: Find the break point:
//     int ind = -1; // break point
//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] < arr[i + 1]) {
//             // index i is the break point
//             ind = i;
//             break;
//         }
//     }
//     // If break point does not exist:
//     if (ind == -1) {
//         // reverse the whole array:
//         reverse(arr.begin(), arr.end());
//         // return arr;
//     }
//     // Step 2: Find the next greater element
//     //         and swap it with arr[ind]:
//     for (int i = n - 1; i > ind; i--) {
//         if (arr[i] > arr[ind]) {
//             swap(arr[i], arr[ind]);
//             break;
//         }
//     }
//     // Step 3: reverse the right half:
//     reverse(arr.begin() + ind + 1, arr.end());
//     for(int i=0;i<n;i++){
//         cout<<" "<<arr[i];
//     }
//     return 0;
// }

//TO FIND ARRAY WHICH HAS ONE ADDED(66)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,res=0;
//     cout << "Enter Number of elements: ";
//     cin >> n;
//     // vector<int> result(n);
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         if(arr[i]<9){
//             arr[i]++;
//             break;
//         }else{
//             arr[i]=0;
//         }
//     }
//     if(arr[0]==0){
//         arr[0]=1;
//         n++;
//     }
//     // arr[n-1]=arr[n-1] - n + 1;
//     for(int i=0;i<n;i++){
//         cout<<" "<<arr[i];
//     }
//     return 0;
// }

//FIND PEAK ELEMENT(162)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,count=0;
//     cout << "Enter Number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int res=arr[0];
//     for(int i=0;i<n;i++){
//       if(arr[i]>res){
//             res = arr[i];
//             count = i;
//       }
       
//     }
//     cout<<res<<" "<<count;
//     return 0;
// }

//BEST TIME TO BUY/SELL STOCK II(122)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,count=0;
//     cout << "Enter Number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int maxPro=0;
//     for(int i=1;i<n;i++){
//       if(arr[i]>arr[i-1]){
//             maxPro+=arr[i]-arr[i-1];
//       }
//     }
//     cout<<maxPro;
//     return 0;
// }

//TWO SUM (1)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{2,7,11,15};
//     int target=9;
//     unordered_map<int, int> m; //to store element{key} with index{value}
//     for (int i = 0; i < nums.size(); i++) {
//         int need = target - num]];//number we need to sum up to target
//         if (m.count(need)) {//if "need" is already present in map
//             return {m[need], i};//return index of need and i
//         }
//         m[nums[i]] = i;//store current element -> index in map
//     }
//     return {};
// }

//SUM OF K MIRROR NUMBERS (2081)
// approach :- L = Even then halflength -> {L/2 digits generated and append its reverse}
//             L = Odd then halflength -> { L+1/2 digits generated and append its reverse except starting character of reverse}
// Max no.=pow(10,halflength -1)
// Min no.=pow(10,halflength) - 1

//SEARCH INSERT POSITION (35)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,element;
//     cout << "Enter Number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: "<<endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int pos;
//     cout << "Enter search element: ";cin>>element;
//     for(int i=0;i<n;i++){
//         if(element<arr[i]){
//             pos=i;
//             break;
//         }else{
//             pos=i;
//         }
//     }
//     cout<<pos;
//     return 0;
// }

//FIND ARRAY MAJORITY ELEMENT THAT APPERS >N/3 (229)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     int count=0;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> res(n);
//     cout<<n;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     map<int,int> mpp; //Map Decleration {Both Key and Value are int}
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++; //Store array elements in map in order of occurence
//     }
//     int k=0;
//     for(auto it:mpp){
//         if(it.second>(n/3)){ //Searching for Majority element (it.first refer to key and it.second is no. of times it appears)
//             // cout<<it.first;
//             res[k]=it.first;
//             k++;
//         }
//     }
//     for(int i=0;i<res.size();i++){
//         cout<<res[i];
//     }
//     return 0;
// }

//MERGE SORTED ARRAY(88)
// Approach 1:-
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     int count=0;
//     vector<int> arr1={5,6,7,0,0,0};
//     vector<int> arr2={1,2,3};
//     vector<int> res(arr1.size()+arr2.size());
//     int k=0,i=0,j=0;
//     while(i<arr1.size()){
//         if(arr1[i]!=0){
//             res[k]=arr1[i];
//             k++;
//         }
//         i++;
//     }
//     while(j<arr2.size()){
//         res[k++]=arr2[j++];
//     }
//     for(int i=0;i<res.size();i++){
//         if(res[i]!=0){
//             cout<<res[i];
//         }
//     }
//     return 0;
// }
// Approach 2:-
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;         // pointer for nums1 elements
//         int j = n - 1;         // pointer for nums2 elements
//         int k = m + n - 1;     // fill position from end

//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j])
//                 nums1[k--] = nums1[i--];
//             else
//                 nums1[k--] = nums2[j--];
//         }

//         // Copy remaining nums2 elements if any
//         while (j >= 0)
//             nums1[k--] = nums2[j--];
//     }
// };

//MEADIAN OF TWO SORTED ARRAYS (4)
// Approach 1:-
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr1={1,3};
//     vector<int> arr2={2,4};
//     int i=arr1.size()-1;
//     int j=arr2.size()-1;
//     int k1=arr1.size()+arr2.size();
//     int k=arr1.size()+arr2.size()-1;
//     while(i>=0 && j>=0){
//         if(arr1[i]>arr2[j]){
//             arr1[k--]=arr1[i--];
//         }else{
//             arr1[k--]=arr2[j--];
//         }
//     }
//     while(j>=0){
//         arr1[k--]=arr2[j--];
//     }
//     if (k1 % 2 == 1){
//         cout<<nums1[k1 / 2];
//     }else{
//         cout<<(nums1[k1 / 2] + nums1[k1 / 2 - 1]) / 2.0;
//     }
//     return 0;
// }<b
// Approach 2:-
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums1={1,3};
//     vector<int> nums2={2,4};
//         int n = nums2.size();
//         int m = nums1.size();
//         int i=m-1;
//         int j=n-1;
//         int k1=m+n;
//         vector<int> nums3(k1);
//         int k=n+m-1;
//         while(i>=0 && j>=0){
//             if(nums1[i]>nums2[j]){
//                 nums3[k--]=nums1[i--];
//             }else{
//                 nums3[k--]=nums2[j--];
//             }
//         }
//         while(j>=0){
//             nums3[k--]=nums2[j--];
//         }
//         while(i >= 0){
//             nums3[k--] = nums1[i--];
//         }
//         if (k1 % 2 == 1) cout<<nums3[k1 / 2];
//         else cout<<(nums3[k1 / 2] + nums3[k1 / 2 - 1]) / 2.0;
    
// };

//CONTAINER WITH MOST WATER (11)
//USING 2 POINTER APPROACH WHERE ONE POINTER MOVES FWD AND ONE BACK
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter Number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int i=0;
//     int j=n-1;
//     int maxWater=0;
//     while(i<j){  //smaller wall decides the amount of water that can be hold
//         int limit=min(arr[i],arr[j]);  //to find minimum of two walls in eaqch iteration
//         int w=j-i;  //distance b/w two lines/walls
//         int res=limit*w;
//         maxWater=max(maxWater,res);  //To compare maxWater each time
//         arr[i]>arr[j] ? j-- : i++;  //if left wall small then move leftr pointer else move right pointer
//     }
    
//     cout<<maxWater;
// }

//Find All K-Distant Indices in an Array (2200)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,key,k;
//     cout << "Enter Number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> res;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Enter key element: ";
//     cin >> key;
//     cout << "Enter k: ";
//     cin >> k;
//     int inc=0;
//     vector<int> index(n);
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             index[inc]=i;
//             inc++;

//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<inc;j++){
//             if(abs(i-index[j])<=k){
//                 res.push_back(i);
//                 break;
                
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<res[i];
//     }
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number: ":cin>>n;
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int k,ans;
//     int i=0;
//     vector<int> arr1={2,5};
//     vector<int> arr2={3,4,5};
//     int n=arr1.size();
//     int m=arr2.size();
//     cout<<"Enter Kth: ";cin>>k;
//     if(k<=m*n){
//             int indexArr1=(k-1)/m; //to find index each in arr1
//             int indexArr2=(k-1)%m; //to find index each in arr2
//             ans=arr1[indexArr1]*arr2[indexArr2];
//             cout<<ans;
//             // break;
//     }
//     return 0;
//     // cout<<ans;
// }

//ROMAN TO INTEGER (13)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int res=0;
//     string s="MCMXCIV";
//     unordered_map<char,int> roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};//Unordered map for symbols
//     for(int i=0;i<s.length();i++){ //loop runs for 0 to lenght of string times
//         if(roman[s[i]]<roman[s[i+1]]){//When s[i] value in roman map is less than s[i+1] value in roman map. {s[i],s[i+1] fed to roman for searching}
//             res-=roman[s[i]];
//         }
//         else{ //When s[i] value in roman map is greater than s[i+1] value in roman map. {s[i],s[i+1] fed to roman for searching}
//             res+=roman[s[i]];
//         }
//     }
//     cout<<res;
//     return 0;
// }

//LONGEST BINARY SUBSEQUENCE LESS THA K (2311)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int res=0;
//     long long val=0;  //for ultra larger values that cant be processed with int
//     string s="1001010";
//     int k=5;
//     int n=s.length();
//     for(int i=0;i<s.length();i++){ 
//         int bit = s[n - i - 1] - '0';  //Converts each character to string {from the end}
//         if(bit==0){  //If-else conditions with bit{as bit is integer type}
//             res++;
//         }
//         else if((val+(1LL << i))<=k){ 
//             val+=1LL << i; //1LL << i means 2^i
//             res++;
//         }
//     }
//     for (int i = n - 64; i >= 0; --i) { //Count remaining '0's to the left of the 63rd bit{Only when long long}
//             if (s[i] == '0') res++;
//         }
//     cout<<res;
//     return 0;
// }

//INTEGER TO ROMAN
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="";
//     vector<int>    val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//     vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
//     int i=0;
//     int nums=3749;
//     while(nums>0){
//         while(nums>=val[i]){ //Take value from val that is just less tha nums.
//             nums -= val[i]; //remove value which was just less.
//             s += sym[i];  //add symbol of that removed val from sym to s.
//         }
//         i++; //increment to continue this process further.
//     }
//     cout<<s;
//     return 0;
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> val{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
//     vector<string> sym{
//         "A", "B", "c", "D", "E", "F", "G","H", "I", "J", "K", "L", "M", "N","O", "P", "Q", "R", "S", "T","U", "V", "W", "X", "Y", "Z"};
//     int a=70;
//     string s="";
//     for(int i=0;i<26;i++){
//         if(a==val[i]){
//             cout<<val[i];
//             s+=sym[i];
//             break;
//         }else if(a>26*i){
//             int k=a-27;
//             s+=sym[i] + sym[k];
            
            
//             // cout<<k;
//         }
//     }
//     cout<<s;

// }

//EXCEL SHEET COLUMN TITLE (168)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int a = 28; //Input number
//     string s = ""; //String to store
//     while (a > 0) {
//         a--;  //Pass1:decrease a by one.{701-1=700},Pass2: 26-1=25
//         char ch = 'A' + (a % 26);//Pass1:'A' + 700%26='A' +24 = Y,Pass2: 'A'+25=Z
//         // cout<<ch;
//         s = ch + s;//Add character to string s
//         a /= 26; //700/26 = 26 and move 26 to again a-- | a becomes 0 and while loop ends.
//         // cout<<7/26; //7/26=0
//     }
//     cout << s;
//     return 0;
// }

//ADD BINARY (67)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s1 = "11"; //String to store
//     string s2="1";
//     string s="";
//     int n1=s1.length()-1; //set to end
//     int n2=s2.length()-1; //set to end
//     int carry = 0;

//     while (n1 >= 0 || n2 >= 0 || carry) { //WHile loop used a s s1 and s2 may have diffrent lengths
//         int bit1 = (n1 >= 0) ? s1[n1--] - '0' : 0; //extract digit from string from end {decreement n1}
//         int bit2 = (n2 >= 0) ? s2[n2--] - '0' : 0; //extract digit from string from end {decreement n2}
//         int sum = bit1 + bit2 + carry; //to find curren bit

//         s += (sum % 2) + '0';//Curren binary bit formed
//         carry = sum / 2; //update carry to be 0 or 1 (sum=0|2 then carry=0,else1)
//     }

//     reverse(s.begin(), s.end());
//     cout<<s;
//     return 0;
// }

//FIND THE DIFFERENCE (389)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="abcd"; //string original
//     string s2="abcdk";//string with one extra character at random place
//     int sum = 0;
//     for (char &ch: s1){ //iterate each character and find their ASCII value. 
//         sum += ch; //Sum of these ascii values
//     }
//     for (char &ch: s2){ //iterate each character and find their ASCII value.
//         sum -= ch; //Sum of ASCII value of s2 is greater than that of s1,sum(s2)-sum(s1)=diffrence
//     }
//     cout<<(char)sum; //diffrence above is ASCII Value and convert it to character.
// }

//FIND FIRST AND LAST POSITION IN SORTED ARRAY(34)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    // int n,k;
    // cout<<"Enter Size: ";cin>>n;
    // vector<int> arr(n);
    // vector<int> res;
    // int set =0;
    // cout<<"Enter elements: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
//     cout<<"Enter element to search: ";cin>>k;
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){
            
//         }
//     }
// }

//LONGEST SUBSEQUENCE REPEATED K TIMES (2014)
// STEP1: Find frequency of each character
// STEP2: Ignore character(s) whose occurence<=K
// STEP3: A character can be use only frequency(char)/K times.
// STEP4: Find all possible subsequences and store in sub(Use backtracking).
// STEP5: Keep checking if sub*k is in string s, update result to get best output.
// TIP: Use modulo(%) when we want to countinue round by round
// (s="let",len=3 then if we say s[i]/L then it will give us 0,1,2 and 
// no out of bnound error,hence effective to use modulo)
// Time:  O(n * (n/k)!)
// Space: O(n)
// #include <bits/stdc++.h>
// using namespace std;
// bool check(const string& s, int k, const string& curr) { //verifies if a subsequence appear >=k
//     if (curr.empty()) return true; //empty string is always a subsequence
//     int i = 0;
//     for (const auto& c : s) { //iterate through string s
//         if (curr[i] == c) { //if curr
//             i++;
//             if (i == curr.size()) {
//                 k--;
//                 if (k == 0) return true;
//                 i = 0;
//             }
//         }
//     }
//     return false;
// }
// void backtracking(const string& s, int k, string* curr, vector<int>* cnts, string* result) {
//     if (!check(s, k, *curr)) return;
//     if (curr->size() > result->size()) {
//         *result = *curr;
//     }
//     for (char c = 'z'; c >= 'a'; --c) {
//         if ((*cnts)[c - 'a'] < k) continue;
//         (*cnts)[c - 'a'] -= k;
//         curr->push_back(c);
//         backtracking(s, k, curr, cnts, result);
//         curr->pop_back();
//         (*cnts)[c - 'a'] += k;
//     }
// }
// int main() {
//     vector<int> cnts(26); //Define alphabets vector
//     int k = 2;
//     string s = "letsleetcode";
//     for (const auto& c : s) ++cnts[c - 'a']; //COunt how many times each alphabet occur{c-'a' converts to ASCII of alphabet}
//     string new_s;
//     for (const auto& c : s) {
//         if (cnts[c - 'a'] >= k) {//check if alphabet occurs >=K 
//             new_s.push_back(c); //push to string new_s when if condition met
//         }
//     }
//     string result, curr; //string to store result and store current subsequence
//     backtracking(new_s, k, &curr, &cnts, &result);
//     cout << "Result: " << result << endl;
//     return 0;
// }

//SUBSEQUENCE OF LENGTH K WITH LARGEST SUM (2099)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cout<<"Enter Size: ";cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter K: ";cin>>k;
//     sort(arr.begin(),arr.end());
//      if(k > n || k < 0) {
//         cout << "Invalid value of K!" << endl;
//         return 1;
//     }
//     for(int i=n-1;i>=n-k;i--){
//         cout<<arr[i];
//     }
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1="6";
//     string s2="4";
//     int s3=stoi(s1)*stoi(s2);
//     string res=to_string(s3);
//     cout<<res;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=4;
//     int s=n%2;
//     cout<<s;
    
//     return 0;
// }

//EXCEL SHEET COLUMN TITLE (168)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int a = ; //Input number
//     string s = "AB"; //String to store
//     while (a > 0) {
//         a--;  //Pass1:decrease a by one.{701-1=700},Pass2: 26-1=25
//         char ch = 'A' + (a % 26);//Pass1:'A' + 700%26='A' +24 = Y,Pass2: 'A'+25=Z
//         // cout<<ch;
//         s = ch + s;//Add character to string s
//         a /= 26; //700/26 = 26 and move 26 to again a-- | a becomes 0 and while loop ends.
//         // cout<<7/26; //7/26=0
//     }
//     cout << s;
//     return 0;
// }

//NUMBER OF subsequences THAT SATISFY SUM (1498)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n=5;
//     vector<int> arr{2,3,4,6,7};
//     int left=0;
//     int right=n-1;
//     int mod=1e9+7;
//     int count=0;
//     int target=12;
//     sort(arr.begin(), arr.end());
//         vector<int>power(n+1,1);
//         for(int i=1;i<=n;i++){
//             power[i]=power[i-1]*2;
//             power[i]=power[i]%mod;
//         }
//         while(left<=right){
//             if(arr[left]+arr[right]<=target){
//                 count=(count+(power[right-left]))%mod; //2^(high-low) subsequences b/w high and low
//                 left++;
//                 if(right==n) break;
//             }
//           else right--;
//         }
//     cout<<count;
    
//     return 0;
// }

//LONGEST HARMONIC SUBSEQUENCE (594)
//Subsequence will only have a nume n and n+1, then only max-min=1 sattisfies
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;//to store maximum subsequence length
//     cout<<"Enter Size of Array ";cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     unordered_map<int,int> mpp; //creating map
//     for(int &num : arr) {
//         mpp[num]++; //store frequencies in map
//     }

//     for(int &num : arr) {
//         int minNum = num; //numbers with diffrence =1
//         int maxNum = num+1;//numsber 1 greater than minNum

//         if(mpp.count(maxNum)) { //if maxNum is present
//             sum = max(sum, mpp[minNum] + mpp[maxNum]); //add frequency of minNum and maxNum
//         }
//     }
//     cout<<sum;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="codeleet";
//     string target="leet";
//     if(strstr(s.c_str(),target.c_str()))
// {
//   cout << " S1 Contains S2";
// }
//     return 0;
// 
    
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     double x=2;
//     int n=10;
//     cout<<(double)pow(x,n);
//     return 0;

// }

//TWO SUM II WITH SORTED ARRAY (167)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,sum;
//     int total=0;
//     cout<<"Enter Size of Array ";cin>>n;
//     vector<int> arr(n);
//     vector<int> res(2,0);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"EnterSum ";cin>>sum;
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         int curr=arr[i]+arr[j];
//         if(curr==sum){
//             res[0]=i;
//             res[1]=j;
//         }else if(curr<sum){
//             i++;
//         }else{
//             j--;
//         }
//     }
//     for(int i=0;i<2;i++){
//         cout<<res[i];
//     }
//     return 0;
// }

//FIND ORIGINAL TYPED STRING I (3330)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="abbcccc"; //input string
//     int count=1;
//     for(int i=1;i<s.length();i++){ 
//         if(s[i]==s[i-1]){ //if character are repeated then increement by one
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }

//PASCAL TRIANGLE (118)
//Application:- Usefulf in find xCy {No. of combination} where x->: row,y->column
//element in previous row and same column + element in previous row and previous column {in 2D Array}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Input Number: ";cin>>n;
//     vector<vector<int>> res(n);
//     for(int i=0;i<n;i++){ //i represent rows
//         res[i]=vector<int>(i+1,1); //array of lengthi+1 and default values as 1{arr diffrwent for each i}
//         for(int j=1;j<i;j++){ //j represents columns.j=1 is tsart as first and last value in each array of columns is 1
//             res[i][j]=res[i-1][j]+res[i-1][j-1]; //element in previous row and same column + element in previous row and previous column
//         }
//     }
//     return 0;
// }

//PASCAL TRIANGLE II (119) - SEARCH USING SPECIFIC ROW
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int rowPrint;
//     cout<<"Enter Row Number: ";cin>>rowPrint;
//     int n=rowPrint+1; //Run till Row +1{so that it does not run extra}
//     vector<vector<int>> res(n); //2D res with length = rowIndex+1
//     for(int i=0;i<n;i++){ //i represent rows
//         res[i]=vector<int>(i+1,1); //array of lengthi+1 and default values as 1{arr diffrwent for each i}
//         for(int j=1;j<i;j++){ //j represents columns.j=1 is tsart as first and last value in each array of columns is 1
//             res[i][j]=res[i-1][j]+res[i-1][j-1]; //element in previous row and same column + element in previous row and previous column
//         }
//     }
//     cout<<"Enter Row: ";cin>>rowPrint;
//     for (int i = 0; i < res[rowPrint].size(); i++) {
//         cout << res[rowPrint][i];
//     }
//     return 0;
// }

//CONTAINS DUPLICATE (217)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Size of Array ";cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             cout<<"Yes";
//             break;
//         }else{
//             cout<<"No";
//             break;
//         }
//     }
//     return 0;
// }

//MAXIMUM SUBARRAY (53)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Size of Array ";cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     long long max=LONG_MIN; //max=lower limit of Long long initially.{-9223372036854775808}
//     long long sum=0;  //-2,1,-3,4,-1,2,1,-5,4
//     for(int i=0;i<n;i++){
//         sum+=arr[i]; //sum=sum+arr[i];
//         if(sum>max){ //if sum>max then update max to be sum 
//             max=sum; //max was initially smaller so that i coul;d be updated using '>'
//         }
//         if(sum<0){ //if sum is negative then sum=0;
//             sum=0; //5,4,-1,7,8
//         }
//     }
//     cout<<max;
//     return 0;
// }

//
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Input Number: ";cin>>n;
//     vector<vector<int>> res(n);
//     for(int i=0;i<n;i++){ //i represent rows
//         res[i]=vector<int>(i+1,1); //array of lengthi+1 and default values as 1{arr diffrwent for each i}
//         for(int j=1;j<i;j++){ //j represents columns.j=1 is tsart as first and last value in each array of columns is 1
//             if( res[i][j] ==0 ){
//                 res[i]==0;
//                 res[j]==0;
//             }
            
//         }
//     }
//     return 0;
// }

//FIND KTH CHARACTER IN STRING GAME 1 (3304)
//Goal is to find shift b/w chartacter which is count of 1 bit of k-1;
//Approach1:-
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int k=10;
//     int shift = __builtin_popcount(k-1);//__builtin_popcount(k-1); counts how many 1 bit in binary of k-1
//     char res=  'a' + shift; //result character has been shifted by __builtin_popcount(k-1);
//     cout<<res;
//     return 0;
// }
//Approach2:- We need whole sequence till k hence not optimal
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int k=10;
//     int idx=k-1;
//     string s="a";
//     while(s.length()<k){
//         int n = s.length();
//         for(int i = 0; i < n; i++) {
//             char ch = s[i] == 'z' ? 'a' : s[i]+1; //if s[i]==z then return 'a' else Ascii val of s[i] +1
//             s.push_back(ch);
//         }
//     }
//     cout<<s[idx];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int k=10;
//     vector<int> operations{0,1,0,1};
//     reverse(operations.begin(), operations.end());
//     long long path = k - 1;
//     long long opMask= 0;
//     for (int op : operations) {
//         opMask = (opMask << 1) | op; //to convert reverses operations array to binary
//     }
//     int shift = __builtin_popcount((k-1) & opMask);
//     char res = 'a' + (shift%26); //shift%26 ensures we stay between 'a' to 'z'
//     cout<<res;
//     return 0;
// }

//MEETING ROOMS III (2304)
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     int arr[3][2] = {{1, 20}, {2, 7}, {3, 4}};
//     map<int, int> mpp;

//     // Map keys to values
//     for (int i = 0; i < 3; ++i) {
//         mpp[arr[i][0]] = arr[i][1];
//     }

//     // Find key with maximum value
//     int maxVal = -1;
//     int maxKey = -1;
//     for (auto &it : mpp) {
//         if (it.second > maxVal) {
//             maxVal = it.second;
//             maxKey = it.first;
//         }
//     }

//     cout << "Key with max value: " << maxKey << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     vector<int> players{1,1,1};
//     vector<int> trainers{10};
//     sort(players.begin(),players.end()); //sort both arrays so that , two pointer i and j can match easily wihtout error
//     sort(trainers.begin(),trainers.end());
//     int count =0,i=0,j=0;
//     while(i<players.size() && j<trainers.size()){
//         if(players[i]<=trainers[j]){
//             count++; //increement count
//             i++;
//             j++; 
//         }else{
//             j++; //if value of player greater than trainers then move to next trainer
//         }
//     }
//     cout<<count;
//     return 0;
// }

//VALID WORD (3136)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string word="234Bds";
//     int vowel=0,cons=0;
//     for (char c : word) {
//             if (!isalnum(c)) return false; // reject if not alphanumeric

//             char lower = tolower(c); //converts to lower
//             if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
//                 vowel++; //increement if vowel
//             } else if (isalpha(c)) {
//                 cons++; //Alphanumeric is Numbers + characters
//             }
//         }
//     if(vowel>0 && cons>0 ){
//         cout<<"true";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string word="B";
//     int n='B'; //Use charcter to find ASCII
//     cout<<n;
//     return 0;
// }

//FIND MAX LENGTH OF VALID SUBSEQUENCE I (3201)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> arr{1,2,3,4};
//     int n = arr.size();
//     int odd = 0, even = 0, alternate = 1, prev = arr[0];//To count no. of odd/even and alternate occurences
//     for(int i = 0; i < n; i++){
//         if(arr[i] % 2 == 1) odd++; //increment odd if arr[i] is odd no.
//         else even++; //increment even if arr[i] is even no.

//         if(i >= 1 && arr[i] % 2 != prev % 2){ //if parity does not match i.e odd-even (or) even-odd
//             alternate++; //increement alternate
//             prev = arr[i]; //change prev from arr[0] to arr[i] when alternate
//         }
//     }
//     cout<< max({odd, even, alternate}); //select max value out of three
//     return 0;
// }

//If we ever have to "TRACK" a number either it has to be included or not, then use DP(Dynamic Programming)
//Also we can stores result and reuse in another iteration in Dynamic Programming

//3202 LEETCODE
// class Solution {
// public:
//     int maximumLength(vector<int>& nums, int k) {
//         int ans = 0 ;
//         for(int i=0 ; i<nums.size() ; i++){
//             nums[i] = nums[i]%k ;
//         }
//         int n = nums.size() ;
//         for(int val=0 ; val<k ; val++){
//             vector<int> v(k) ;
//             // unordered_map<int,int> mp ;
//             v[nums[0]] = 1 ;
//             for(int i=1 ; i<n ; i++){
//                 int a = nums[i] ;
//                 int b = (val-a+k)%k ;
//                 v[nums[i]] = 1+v[b] ;
//                 ans = max(ans , v[nums[i]]) ;
//             }
//             // ans  = max(ans , *max_element(v.begin() , v.end())) ;
//         }   
//         return ans ;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> arr{7,9,5,8,1,3};
//     int sizeArr = arr.size();
//     int n=sizeArr/3;
//     int minDiff=0;
//     for(int val=0 ; val<k ; val++){
//         vector<int> v(k) ; //dp
//         v[nums[0]] = 1 ;
//         for(int i=1 ; i<n ; i++){
//             int a = nums[i] ;
//             int b = (val-a+k)%k ;
//             v[nums[i]] = 1+v[b] ;
//             ans = max(ans , v[nums[i]]) ;
//         }
//     }
//     cout<< minDiff; //select max value out of three
//     return 0;
// }

//------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter N (half size): ";
//     cin >> n;

//     vector<int> arr(3 * n);  // total 2n elements
//     cout << "Enter " << 3 * n << " elements: ";
//     for (int i = 0; i < 3 * n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     int minSum = 0, maxSum = 0;

//     cout << "Resultant array: ";
//     // First n elements (smallest) — minimum sum
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//         minSum += arr[i];
//     }

//     // Next n elements (largest) — maximum sum
//     for (int i = 2 * n - 1; i >= 2 * n - n; i--) {
//         cout << arr[i] << " ";
//         maxSum += arr[i];
//     }

//     cout << "\nSum of first n (min sum): " << minSum << endl;
//     cout << "Sum of last n (max sum): " << maxSum << endl;

//     return 0;
// }

//FIND MEDIAN FROM DATA STREAM (295) {Using minHeap and maxHeap (OR) priority_queue}
// class MedianFinder {
// public:
//     priority_queue<int> left_max_heap; //max_heap defined
//     priority_queue<int,vector<int> ,greater<int>> right_min_heap; //min_heap defined
//     MedianFinder() {
        
//     }
//     void addNum(int num){
//         if(left_max-heap.empty() || nums<left_max_heap.top()){
//             left_max_heap.push(num);
//         }else{
//             right_min_heap.push(num;) //push to right heap if num>left heap top
//         }
        
//         if(abs((int)left_max_heap.size()-(int)right_min_heap.size())>1){//if diffrence bteween size of both heaps is greater than 1
//             right_min_heap.push(left_max_heap.top());//push to right heap
//             left_max_heap.pop();//pop top ele from left heap as it has been pushed
//         }else if(left_max_heap.size()<right_min_heap.size()){
//             left_max_heap.push(right_min_heap.top());//push to right heap
//             right_min_heap.pop();//pop top ele from left heap as it has been pushed
//         }
//     }
//     double findMedian() {
//         if(right_min_heap.size() ==left_max_heap.size()){
//             return (double)(left_max_heap.top()+right_min_heap.top())/2;
//             //means even no. of elements
//         }else{
//             return left_max_heap.top(); //means odd no. of elements
//         }
        
//     }
// };

//Minimum Difference in Sums After Removal of n{N/3} Elements (2163)
// class Solution {
// public:
//     long long minimumDifference(vector<int>& nums) {
//         int N = nums.size(); //3*n
//         int n = N/3; //no. of elements to remove

//         vector<long long> leftMinSum(N, 0);//array to store min sum from left
//         vector<long long> rightMaxSum(N, 0);//array to store min sum from left

//         priority_queue<int> maxHeap; //maxHeap initialized
//         long long leftSum = 0;
//         for(int i = 0; i < 2*n; i++) { //loop run from 0 to 2*n leaving n lements of end{as they are removed}
//             maxHeap.push(nums[i]);
//             leftSum += nums[i];

//             if(maxHeap.size() > n) {
//                 leftSum -= maxHeap.top();
//                 maxHeap.pop();
//             }

//             leftMinSum[i] = leftSum;
//         }


//         priority_queue<int, vector<int>, greater<int>> minHeap; //maxHeap initialized
//         long long rightSum = 0;
//         for(int i = N-1; i >= n; i--) { //Loop runs from end leaving n elements of start{as they are removed}
//             minHeap.push(nums[i]);
//             rightSum += nums[i]; //increement value of nums[i]

//             if(minHeap.size() > n) { //if size of minHeap!=n
//                 rightSum -= minHeap.top();//remove from right sum
//                 minHeap.pop();//and pop
//             }

//             rightMaxSum[i] = rightSum;
//         }


//         long long result = LLONG_MAX;

//         for(int i = n-1; i <= 2*n-1; i++) {
//             result = min(result, leftMinSum[i] - rightMaxSum[i+1]);
//         }

//         return result;


//     }
// };

//DELETE CHARACTERS TO MAKE FANCY STRING (1957)(STRINGS)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="aaabaaaa";
//     string res="";
//     int count=0;
//     char prev=0; //s[0] is initial prev 
//     for(char c:s){ //accessing characters from string one by one
//         if(c==prev){
//             count++;
//         }else{
//             count=1;
//             prev=c; //change current character to prev if c!=prev
//         }
//         if(count<=2){
//             res+=c;
//         }
//     }
//     for(int i=0;i<res.length();i++){
//         cout<<res[i];
//     }
// }

//If question is based on "Contigous substring/subarray" then always use sliding window.
//MAXIMUM ERASURE VALUE (1695) (SLIDING WINDOW)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     //Khandani Sliding window Template starts
//     int i=0;     
//     int j=0;
//     int sum=0;
//     int result=0;
//     //Khandani Sliding window Template ends
//     vector<int> arr{4,2,4,5,6};
//     unordered_set<int> mpp; //map for storing occurence of each element of array
//     while(j<arr.size()){
//         if(!mpp.count(arr[j])){
//             sum+=arr[j];
//             result=max(sum,result);
//             mpp.insert(arr[j]);
//             j++;
//         }else{ //we have seen this element befor so shrink the window
//             while(i<arr.size() && mpp.count(arr[j])){ //if we have seen in mpp
//                 sum-=arr[i]; //minus arr[i] from sum
//                 mpp.erase(arr[i]); //erase arr[i] from set
//                 i++; //move i by one
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     //Khandani Sliding window Template starts
//     int i=0;     
//     int j=0;
//     // int sum=0;
//     // int result=0;
//     //Khandani Sliding window Template ends
//     int k=3;
//     vector<int> arr{1,2,3,1,2,3};
//     unordered_set<int> mpp; //map for storing occurence of each element of array
//     while(j<arr.size()){
//         if(arr[i]==arr[j] && abs(i-j)<=k){
//             j++;
//             cout<<"yes";
//         }
//         i++;
//     }
//     return 0;
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "cdbcbbaaabab";
//     int x = 4;
//     int y = 5;
//     int sum=0;
//     for(int i=1;i<s.length();i++){
//         if(s[i-1]=='b' && s[i]=='a'){
//             s.erase(i-1, 2);
//             sum+=y;
//             cout<<s;
//             i = max(0, i - 2);
//         }
//         else if(s[i-1]=='a' && s[i]=='b'){
//             s.erase(i-1, 2);
//             sum+=x;
//             i = max(0, i - 2);
//         }
//     }
//     cout<<sum;
//     return 0;

// }

//MAXIMUM UNIQUE SUBARRAY SUM AFTER DELETION (3487) (SLIDING WINDOW) 
//(Used slidng window because of subarray)
//LEETCODE SOLUTION:-
// class Solution {
// public:
//     int maxSum(vector<int>& nums) {
//         //unordered_set<int> st;
//         vector<int> st(101, -1); //we define vector of size 101 and has all values as "-1".{Acc. to contstraints}
//         int sum = 0;
//         int maxNeg = INT_MIN;
//         for(int &num : nums) { //iterate through values of nums
//             if(num <= 0) { //if element is negative 
//                 maxNeg = max(maxNeg, num); //take maximum of maxneg and this new negative number
//             } else if(st[num] == -1) { //if num elemnt is unseen(or == -1)
//                 sum += num;
//                 //st.insert(num);
//                 st[num] = 1; //Change Value at num positon to 1
//             }
//         }
//         return sum == 0 ? maxNeg : sum; //if sum==0 return maxNeg else return sum;
//     }
// };

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//         vector<int> nums{1,2,-1,-2,1,0,-1};
//         //unordered_set<int> st;
//         vector<int> st(-101, -1);
//         int sum = 0;
//         int maxNeg = INT_MIN;

//         for(int &num : nums) {
//             if(num <= 0) {
//                 maxNeg = max(maxNeg, num);
//             } else if(st[num] == -1) {
//                 sum += num;
//                 //st.insert(num);
//                 st[num] = 1;
//             }
//         }
//         if(sum==0){
//             cout<<maxNeg;
//         }else{
//             cout<<sum;
//         }
        
//     return 0;
// }

//Maximize Subarrays After Removing One Conflicting Pair (3480)
//T.C : O(n+p), p = total number of conflicting points, n = total points
//S.C : O(n)
//Step 1: For all points, find the restricting starting point.
//Step 2: Find maximum and second maximum restricting starting points.
//Step 3: validSubarray= point -maxStarting restriction point
// #define ALL(x) begin(x), end(x)  
//if compiler see "ALL(x)" anywhere in code then it will be replaced by begin(x), end(x)
// class Solution {
// public:
//     long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
//         long long valid = 0;

        
//         vector<vector<int>> conflictingPoints(n+1);
//         //conflictingPoints[i] = {points which confliuct with i}

//         for(auto &p : conflictingPairs) { //O(C)
//             //(a, b)
//             int a = min(p[0], p[1]);
//             int b = max(p[0], p[1]);

//             conflictingPoints[b].push_back(a); //{1,2,a,,,,b}
//         }

//         int maxConflict = 0;
//         int secondMaxConflict = 0;

//         vector<long long> extra(n+1, 0);
//         //extra[i] = number of extra subarrays by removing the conflicting point i

//         //O(n+P)
//         //O(n)
//         for(int end = 1; end <= n; end++) { //visiting each point and treating them as subarray ending at this point
//             //total subarrays ending at this point 'end'
            
//             //O(P)
//             for(int &u : conflictingPoints[end]) { //check all conflicting points of end
//                 if(u >= maxConflict) {
//                     secondMaxConflict = maxConflict;
//                     maxConflict = u;
//                 } else if(u > secondMaxConflict) {
//                     secondMaxConflict = u;
//                 }
//             }
//             valid += end - maxConflict;
//             extra[maxConflict] += maxConflict - secondMaxConflict;
//         }
//         return valid + *max_element(ALL(extra)); //you could also write valid + *max_element(begin(extra), end(extra))
//     }
// };

// //COUNT HILLS AND VALLEYS IN ARRAY (2210)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums{2,4,1,1,6,5};
//     vector<int> clean;
//     clean.push_back(nums[0]);//cleans array stores removes duplicate elements of the array
//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] != nums[i - 1]) {//if element duplicate
//             clean.push_back(nums[i]);//Assures that duplicate element is "stored only once" in "clean"
//         }
//     }
//     int count=0;
//     for(int i=1;i<clean.size()-1;i++){ //first and last always nor hill niether valley
//         if(clean[i]<clean[i-1] && clean[i]<clean[i+1]){
//             count++;
//         }else if(clean[i]>clean[i-1] && clean[i]>clean[i+1]){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }

//Count Number of Maximum Bitwise-OR Subsets (2044) (USING RECURSION)
// #include <bits/stdc++.h>
// using namespace std;
// int findSubset(int index,int currOR,vector<int>&arr,int maxOR){
//     if(index==arr.size()){
//         if(currOR==maxOR){
//             return 1; //Found one subset
//         }else{
//             return 0;
//         }
//     }
    
//     int take=findSubset(index+1,currOR|arr[index],arr,maxOR);//Recursion to take the subset
//     int notTake=findSubset(index+1,currOR,arr,maxOR);//Recursion to not take the subset
//     return take+notTake;
    
// }
// int main(){
//     vector<int> arr{3,1};
//     int maxOR=0,currOR=0;
//     for(int &num : arr){
//         maxOR|=num;//to find maxOR
//     }
//     cout<<findSubset(0,currOR,arr,maxOR);//pass index,currOR,arr,maxOR
//     return 0;
// }

//SUBSETS (78) (USING RECURSSION)
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> result;
// void findSubset(int index,vector<int>&arr,vector<int>&temp){
//     if(index>=arr.size()){
//         result.push_back(temp);
//         return;
//     }
//     temp.push_back(arr[index]);
//     findSubset(index+1,arr,temp);
//     temp.pop_back();
//     findSubset(index+1,arr,temp);
// }
// int main(){
//     vector<int> arr{1,2,3};
//     vector<int> temp;//array for storing subset on temporary basis
//     findSubset(0,arr,temp);//pass index,arr,temp
//     cout<<result;
//     return 0;
// }

//LONGEST COMMON PREFIX (14)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<string> arr{"flower","flow","flight"};
//     string s=arr[0];
//     for(int i=0;i<arr.size();i++){
//         int j = 0;//pointer to access each character of each element
//         while (j < s.length() && j < arr[i].size() && s[j] == arr[i][j]) {
//             // s[j] == arr[i][j] denotes if j'th character of s == characters of i'th element each
//             j++;
//         }
//         s = s.substr(0, j);//return string from 0 to j
//         if(s=="") break; //break out of loop if now common prefix
//     }
//     cout<<s;
//     return 0;
// }

//Smallest Subarrays With Maximum Bitwise OR (2411) (USING BIT MANIPULATION)
//T.C : O(n)
//S.C : O(1)
// class Solution {
// public:
//     vector<int> smallestSubarrays(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result(n);
//         vector<int> setBitIndex(32, -1);//setBitIndex[j] = i, it means that jth bit can be set via element at index i in nums
//         for(int i = n-1; i >= 0; i--) {//By traversing from end we can easily tell which number (ahead of number we're checking)can satisfy the bit i.e. can make bit==1
//             int endIndex = i;
//             for(int j = 0; j < 32; j++) {
//                 if(!(nums[i] & (1 << j))) { //!(nums[i] && (1<<j)) means if j'th bit not set 
//                 //IMP: nums[i] && (1<<j) method to find if j'th bit of nums is set or not
//                     if(setBitIndex[j] != -1) {
//                         endIndex = max(endIndex, setBitIndex[j]);//taken "max" so that we can know till where to go
//                     }
//                 } else {
//                     setBitIndex[j] = i;//j'th bit already set
//                 }
//             }
//             result[i] = endIndex - i + 1;//store in result array
//         }
//         return result;

//     }
// };

//LONGEST SUBARRAY WITH MAXIMUM BITWISE AND (2419)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> nums{3,3,1,2,2,2};
//     int n = nums.size();
//     int maxi=*max_element(begin(nums),end(nums));
//     //Khandani Sliding Window Starts
//     int i=0,j=0;
//     int maxlen=INT_MIN;
//     while(j<n){
//         if(nums[j]==maxi){ //if nums[j] is equal to maximum element
//             maxlen=max(maxlen,j-i+1);//max of j-i+1 and maxlen
//             j++;
//         }
//         else{ //if nums[j] is not equal to maximum element
//             j++;//increement j
//             i=j;//increements i with j
//         }
//     } 
//     cout << maxlen ;
//     return 0;
// }

//NUMBER OF DIFFRENT/UNIQUE INTEGERS IN A STRING (1805)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s="a123bc34d8ef34";
//     unordered_set<string> seen;
//     int i=0;
//     while(i<s.size()){
//         string num;//string to store number
//         if(isdigit(s[i])){
//             while(i<s.size() && s[i]=='0'){//remove leading 0's
//                 i++;
//             }
//             while(i<s.size() && isdigit(s[i])){//if the word[i] is digit
//                 num+=s[i++];//increement to num till isdigit() sattisfied
//             }
//             seen.insert(num);//insert sum to seen
//         }else{
//             i++;//if word[i] is alphabet then just move i
//         }
//     }
//     cout<<seen.size();
//     return 0;
// }

//Remove Colored Pieces if Both Neighbors are the Same Color (2038)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s="ABBBBBBBAAA";
//     int alice=0,bob=0;
//     for(int i=1;i<s.size()-1;i++){ //Leave first and last element as they cant be removed/used
//         if(s[i]==s[i-1] && s[i]==s[i+1]){
//             if(s[i]=='A'){
//                 alice++;
//             }else{
//                 bob++;
//             }
//         }
//     }
//     cout << (alice > bob ? "true" : "false");
//     return 0;
// }

//BITWISE ORS OF SUBARRAYS (898) (USING SETS)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{1,1,2};
//     unordered_set<int> previous;
//     unordered_set<int> current;
//     unord8ered_set<int> result; //declare 3 Subsets
//     //current to store current set contaning value of ORs
//     //previous to store previous contaning value set of ORs
//     //result to store value set of ORs
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int val:previous){
//             current.insert(val|arr[i]); //insert cauurent val ORed with prev ORed value
//             result.insert(val|arr[i]);
//         }
//         current.insert(arr[i]);//current element also need ti be stored
//         result.insert(arr[i]);
//         previous=current;//update current set by making making previous set as current
//         current.clear();
//     }
//     cout<<result.size(); //.size() returns size of set{unique elements only}
// }

//LONGEST NICE SUBARRAY (2401) ( O(n) approach)
//USED SLIDING WINDOW AS QUESTION SAID "CONTIGOUS ARRAY"
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> nums{1, 3, 8, 48, 10};
//     int n = nums.size();
//     //Khandani Sliding Window
//     int i = 0, j = 0;
//     int mask = 0;
//     int result = INT_MIN;
//     while (j < n) {
//         if ((mask & nums[j]) == 0) { //used mask
//             mask |= nums[j]; //ORed mask with nums[j] and used that mask further
//             result = max(result, j - i + 1);
//             j++;
//         } else {
//             mask ^= nums[i];//XOR mask with nums[i] if !=0 to{makes mask again 0}
//             i++;
//         }
//     }
//     cout << result;
//     return 0;
// }

//Check If Digits Are Equal in String After Operations I (3641)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s = "3902";
//     int n=s.size();
//     while(n>2){
//         for(int i=0;i<n-1;i++){//iterate i till n-1 as we have to acess 'i+1'
//             int a = ((s[i]-'0') + (s[i+1]-'0')) % 10; s[i] = a+'0'; 
//             //convert char to int, store operation result in a
//             s[i] = a+'0'; //convert int back to string, ans store in s
//         }
//         n--;//as length of next string is reduced by 1
//     }
//     if(s[0]==s[1]) cout<<1;//if both element in final string equal then True
//     return 0;//else false
// }

//Divide Two Integer (29)
// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if (dividend == INT_MIN && divisor == -1) return INT_MAX;

//         long a = abs((long)dividend), b = abs((long)divisor), res = 0;
//         while (a >= b) {
//             long temp = b, count = 1;
//             while (a >= (temp << 1)) {
//                 temp <<= 1; 
//                 count <<= 1;
//             }
//             a -= temp;
//             res += count;
//         }
//         return ((dividend > 0) == (divisor > 0)) ? res : -res;
//     }
// };

//REVERSE BITS (191)
// 1. Check the least significant bit of n via (n & 1) which uses the bitwise AND operator to isolate the bit.
// 2. Shift this bit to its reversed position with << (31 - i), where i is the current iteration index, 
// thus "moving" the bit to the correct position in the reversed number.
// 3. Use |= (bitwise OR assignment) to add this bit to the result res.
// 4. Right shift n by 1 with n >>= 1 to move to the next bit for the next iteration.
// (>>) shifts the bits of a binary number to the right by a specified number of positions.
// (<<) shifts the bits of a binary number to the left by a specified number of positions.
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int reverseNumber=0,num=43261596;
//     for(int i=0;i<32;i++){
//         reverseNumber |= (num & 1)<<(31 - i);
//         num>>=1;
//     }
//     cout<<reverseNumber;
// }

//NUMBER OF 1 BITS (191)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num=128;
//     int count= __builtin_popcount(num);
//     cout<<count;
// }

//POWER OF TWO (31)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=128;
//     if(n > 0 && (n & (n - 1)) == 0){
// n>0 means a non zero positive number
//  The expression n & (n – 1) essentially turns off the least significant set bit in n. 
//  If n was a power of 2 with only one set bit, this operation would result in zero.
//     //In binary representation, a power of 2 number has only one set bit (1) and all other bits set to 0.
//         cout<<"True";
//     }else cout<<"false";
// }

//REARRANGING FRUITS (2561)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> basket1{4,2,2,2};
//     vector<int> basket2{1,4,2,1};
//     int n=basket2.size();
//     unordered_map<int, int> mpp;//declare map
//     int minCost = INT_MAX;
//     for(int i=0;i<basket1.size();i++){
//         mpp[basket1[i]]++;//increement count of fruit from basket1
//         mpp[basket2[i]]--;//decreement count of fruit from basket1
//         int minEl=min(basket1[i],basket2[i]);
//         minCost=min(minCost,minEl);//To find minimum Cost
//     }
//     vector<int> unEqual;
// //vector to store elements whose count after increemen+decreement is divisible by 2 and not equal to zero
//     for(auto &it : mpp) {
//         int fruitCost  = it.first;
//         int count = it.second;
//         if(count == 0) {
//             continue;//when all elements are correctly placed
//         }
//         if(count % 2 != 0) {
//             //when basket1.size()!=basket2.size() (OR) some elements are xtra 
//             return -1; 
//         }
//         for(int c = 1; c <= abs(count)/2; c++) {
//             unEqual.push_back(fruitCost);
//             //split Count and psuh it.first(value of fruit cost) to unEqual
//         }
//     }
//     sort(begin(unEqual), end(unEqual));//sort unEqual
//     long long finalCost = 0;//define finalCost
//     for(int i = 0; i < unEqual.size()/2; i++) {//taking elements only till half length of unEqual array.
//         finalCost += min(unEqual[i], minCost*2);
//         //extra step to reduce cost,either include unEqual[i] (OR) minCost*2{if available}
//     }
//     cout<<finalCost;
// }

//MINIMUM NUMBER OF OPERATIONS TO MAKE ARRAYS SIMILAR (2449) Complexity: O(n logn)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums{8,12,6};
//     vector<int> target{2,14,10};
//     vector<int> oddsNums,evensNums,oddsTarget,evensTarget;
//     sort(nums.begin(),nums.end());//6 8 12 26
//     sort(target.begin(),target.end());//2 10 14 
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]&1){
//             oddsNums.push_back(nums[i]);
//         }else{
//             evensNums.push_back(nums[i]);
//         }
//         if(target[i]&1){
//             oddsTarget.push_back(target[i]);
//         }else{
//             evensTarget.push_back(target[i]);
//         }
//     }
//     long long total=0;
//     for(int i=0;i<evensNums.size();i++){
//         total+=abs(evensNums[i] - evensTarget[i]);
//     }
//     for(int i=0;i<oddsNums.size();i++){
//         total+=abs(oddsNums[i] - oddsTarget[i]);
//     }
//     cout<<total/4;
//     return 0;
// }

//EXCEL SHEET COLUMN NUMBER (171)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="AAB";
//     //AAB=> 26*1 + 27*1 + 2 =27*26 +2
//     //2 in first pass
//     int num=0;
//     for(char c:s){
//         num=num*26 + (c-'A'+1);
//         //1st pass -> num=0 + 1; 2nd pass -> num=26 + 1; 3rd pass -> num=27*26 + 2;
//         //c - 'A' with A gives 0, so add 1 always
//     }
//     cout<<num;
// }

//ADD DIGITS
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int number=10;
//     while(number>=10){
//         int res=0;
//         while(number>0){
//             res+=number%10;
//             number /= 10;
//         }
//         number=res;
//     }
//     cout<<number;
// }

//MAXIMUM FRUITS HARVESTED AFTER AT MOST K STEPS (2106)
//T.C : O(n+klogn)
//S.C : O(n)
//Case1: If we go left then, i=p-d ; j=p+(k-2*d)
//Case2: If we go right then, j=p+d ; i=p-(k-2*d)
//remaining=k-2*d always : p=startPos,k=maxMoves,d<=k/2
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>>fruits{{2,8},{6,3},{8,6}};
//     int startPos=5;
//     int k=4;
//     int n = fruits.size();
//     vector<int> prefixSum(n);
//     vector<int> indices(n);
//     // Build prefix sum and extract indices
//     for (int i = 0; i < n; i++) {
//         indices[i]   = fruits[i][0];
//         prefixSum[i] = fruits[i][1] + (i > 0 ? prefixSum[i - 1] : 0);
//         //when i>0 only then add prefixSum[i-1]
//     }
//     int maxFrutis = 0;
//     for (int d = 0; d <= k / 2; d++) {
//         // First case: move left x, then right (k - 2x)
//         int remain = k - 2 * d;
//         int i   = startPos - d;
//         int j  = startPos + remain;
//         int left  = lower_bound(indices.begin(), indices.end(), i) - indices.begin();
//         int right = upper_bound(indices.begin(), indices.end(), j) - indices.begin() - 1;
//         if(left <= right) {
//             int total = prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
//             maxFrutis = max(maxFrutis, total);
//         }

//         // Second case: move right x, then left (k - 2x)
//         i  = startPos - remain;
//         j  = startPos + d;
//         left  = lower_bound(indices.begin(), indices.end(), i) - indices.begin();
//         right = upper_bound(indices.begin(), indices.end(), j) - indices.begin() - 1;
//         if(left <= right) {
//             int total = prefixSum[right] - (left > 0 ? prefixSum[left - 1] : 0);
//             maxFrutis = max(maxFrutis, total);
//         }
//     }
//     cout<<maxFrutis;
// }

//MINIMUM OPERATIONS TO EXCEED THRESHHOLD VALUE I (3065)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{2,11,10,1,3};
//     int k = 10;
//     int count=0;
//     for(int& val:arr){
//         if(val<k){
//             count++;
//         }
//     }
//     cout<<count;
// }

//POW(x,n) (50)
// #include <bits/stdc++.h>
// using namespace std;
// double power(double x, long n){
//     if(n == 0) return 1;
//     if(n < 0){//if n is negative
//         return 1 / power(x, -n);//flip exponent to its positive counterpart
//     }
//     if(n % 2 == 1){
//         return x * power(x, n - 1);//if n is odd
//     }
//     return power(x * x, n / 2);//if n is even
// }
// int main(){
//     double x = 2.10000;
//     long n = 10;
//     cout << power(x, n);
// }

//HAPPY NUMBER (202)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int number=19;
//     while(number>=10){
//         int res=0;
//         while(number>0){
//             res+=pow(number%10,2);
//             number /= 10;
//         }
//         number=res;
//     }
//     if(number==1 || number==7){
//         cout<<"A happy number..";
//     }
// }

//FRUITS INTO BASKET (904)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{1,2,3,2,2};
//     unordered_map<int,int> mpp; //map to store occurence of each fruit
//     //Khandani Sliding Window starts
//     int i=0,j=0;
//     int maxlen=0;
//     while(j<arr.size()){
//         mpp[arr[j]]++;//store fruit occurences
//         if(mpp.size()>2){//as only two types of fruits can be kept in basket
//             if(--mpp[arr[i]]==0){
//             //remove first fruit occurence from basket so that there is place for new fruit type
//                 mpp.erase(arr[i]);//erase from map so that new kind of fruit can be placed
//             }
//             i++;
//         }else{
//             maxlen=max(maxlen,j-i+1);//if only two(or less) types of fruit
//         }
//         j++;
//     }
//     cout<<maxlen;
// }

//VALID ANAGRAM (242)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="anagram";
//     string t="nagaram";
//     if (s.length() != t.length()){
//         cout<<"Not a Equal Length";
//     }
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//   if(s == t){
//       cout<<"An Anangram..";
//   }else{
//       cout<<"Not anagram..";
//   }
// }

//ISOMORPHIC STRINGS (205)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="egg";
//     string t="app";
//     unordered_map<char, char> forT,forS;
//     for (int i = 0; i < s.size(); i++) {
//         if ((forS.count(s[i]) && forS[s[i]] != t[i]) ||
//             (forT.count(t[i]) && forT[t[i]] != s[i])) {
//             cout<<"Not Isomorphic.";
//         }
//         forS[s[i]] = t[i];
//         forT[t[i]] = s[i];
//     }
//     cout<<"Yes, Isomorphic..";
// }

//FRUITS INTO BASKETS II (3477)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>fruits{4,2,5};//define fruits
//     vector<int>baskets{3,5,4};//define baskets
//     vector<int>used(baskets.size(),false); 
//     //array to mark if that "i'th" fruit has been used,false byy default
//     int unplaced=0;//to store unplaced fruits
//     for(int i=0;i<fruits.size();i++){//loop to iterate through fruits
//         bool isPlaced=false;
//         for(int j=0;j<baskets.size();j++){//loop to iterate through baskets
//             if(!used[j] && baskets[j]>=fruits[i]){//if fruits and basket match criterian
//             //used[j]==false, baskets[j]>=fruits[i]
//                 used[j]=true;//mark "i'th" fruits as placed in used vector
//                 isPlaced=true;//mark true, meaning that it is placed
//                 break;
//             }
//         }
//         if(!isPlaced){//if fruit not placed
//             unplaced++;
//         }
//     }
//     cout<<unplaced;
// }

//POWER OF THREE (326)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=27;
//     // 1162261467 is the max that a 32 bit int can store,acc to constraints
//     // 1162261467 is the largest integer that is a power of three (3^19)
//     // If n is a power of three, it must be a divisor of 1162261467.
//     if(n > 0 && 1162261467 % n == 0){
//         cout<<"A power of 3..";
//     }else cout<<"Not a power of 3..";
//     return 0;
// }

//POWER OF FOUR (342)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=16;
//     if(n > 0 && (n & (n - 1)) == 0 && (n-1)%3==0){
//     n>0 means a non zero positive number
// //  The expression n & (n – 1) essentially turns off the least significant set bit in n. 
// //  If n was a power of 2 with only one set bit, this operation would result in zero.
// //  In binary representation, a power of 2 number has only one set bit (1) and all other bits set to 0.
//  n-1 is always divisible by 3 if, n is a power of 4
//         cout<<"A power of 4..";
//     }else cout<<"Not a power of 4..";
//     return 0;
// }

//VALID PERFECT SQUARE (367)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num=38;
//     double squareRoot = sqrt(num);
//     int SquareRoot = static_cast<int>(squareRoot);
//     // Convert the square root to an integer
        
//     if(SquareRoot * SquareRoot == num){
//     // A number is a perfect square if squaring its integer square root gives the original number
//         cout<<"A perfect square..";
//     }else cout<<"Not a perfect square..";
// }

//UGLY NUMBER (263)
// #include <bits/stdc++.h>
// using namespace std;
// int isUgly(int n){
//     // An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
//     if(n==1) return true;
//     if(n<=0) return false;
//     if(n%2==0) return isUgly(n/2);
//     if(n%3==0) return isUgly(n/3);
//     if(n%5==0) return isUgly(n/5);
//     return false;
// }
// int main(){
//     int n=14;
//     cout<<isUgly(n);
// }

//FRUITS INTO BASKETS III (3479) (USING SEGMENT TREE)
// #include <bits/stdc++.h>
// using namespace std;
// void build(int i, int l, int r, vector<int>& baskets, vector<int>& segmentTree){
//         if (l == r) {
//             segmentTree[i] = baskets[l];
//             return;
//         }
//         int m = (l + r) / 2; //finding mid
//         build(2*i + 1, l, m, baskets, segmentTree);
//         build(2*i + 2, m + 1, r, baskets, segmentTree);
//         segmentTree[i] = max(segmentTree[2*i + 1], segmentTree[2*i + 2]);
//     }

//     bool querySegmentTree(int i, int l, int r, vector<int>& segmentTree, int val) {
//         if (segmentTree[i] < val)
//             return false; // No basket in this segment
//         if (l == r) {
//             segmentTree[i] = -1; // Mark basket as used
//             return true;
//         }
//         int mid = (l + r) / 2;//finding mid
//         bool placed = false;
//         if (segmentTree[2*i + 1] >= val) {
//             placed = querySegmentTree(2*i + 1, l, mid, segmentTree, val);
//         } else {
//             placed = querySegmentTree(2*i + 2, mid + 1, r, segmentTree, val);
//         }
//         segmentTree[i] = max(segmentTree[2*i + 1], segmentTree[2*i + 2]);
//         return placed;
//     }

// int main(){
//     vector<int>fruits{4,2,5};//define fruits
//     vector<int>baskets{3,5,4};//define baskets
//     int n = fruits.size();
//     vector<int> segmentTree(4 * n, -1);//define segment tree with 4*n size and -1 by default
//     build(0, 0, n - 1, baskets, segmentTree);//to build segment tree with "baskets"
//     int unplaced = 0;
//     for (int &fruit : fruits) {
//         if (!querySegmentTree(0, 0, n - 1, segmentTree, fruit)) {
//             unplaced++;
//         }
//     }
//     cout<<unplaced;
// }

//INTERSECTION OF 2 ARRAYS (349)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums1{4,9,5};
//     vector<int>nums2{9,4,9,8,4};
//     sort(nums1.begin(), nums1.end());//sort nums1
//     sort(nums2.begin(), nums2.end());//sort nums2
//     vector<int> res;//vector to store result
//     int last=INT_MIN;
//     int i = 0, j = 0;//two pointer approach
//     while (i < nums1.size() && j < nums2.size()) {
//         if(nums1[i] == nums2[j]) {//if elements are same
//             if (nums1[i] != last)  // avoid duplicates
//                 res.push_back(nums1[i]);//push nums1[i] to res
//                 last=nums1[i];//update last inserted element
//             i++; 
//             j++;
//         }
//         else if (nums1[i] < nums2[j]) {
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     cout<<res.size();
// }

//THIRD MAXIMUM NUMBER (414)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums{2,2,3,1}; // 1 2 2 3
//     sort(nums.begin(),nums.end());
//     int count=0;
//     for(int i = nums.size()-1; i > 0; i--){
//         if(nums[i] != nums[i-1]){
//             count++;
//             if(count == 2){
//                 cout<<nums[i-1];
//             }
//         }
//     }
//     // cout<<nums.back();
// }

//WORD PATTERN (290) (IMPORTANT) (WORD TOKENIZATION USED)
// #include <bits/stdc++.h>
// using namespace std;
// bool wordPattern(string pattern, string s){
//     unordered_map<char,int> charToindex;//map to store pattern character with their index
//     unordered_map<string,int> wordToindex;//map to store s word with their index
//     stringstream ss(s);//use stringgstream to tokenize words from s
//     string token;
//     int i=0,countToken=0;
//     while(ss << token){//to  get each word of s string by tokenizing
//         countToken++;
//         if(i==pattern.size() || charToindex[pattern[i]]!=wordToindex[token]){
//             //if index of char and words dont match
//             return false;
//         }
//         charToindex[pattern[i]] = wordToindex[token] = i+1;//increement i
//     /*
//     Why i+1 ?
//     Because by default, if the key is not in map, it's value is returned as 0
//     */
//         i++;
//     }
//     if(countToken != pattern.size() || i != pattern.size()) //if size of pattern and s not same
//         return false;
//     return true;
// }
// int main(){
//     string pattern="abba";
//     string s="dog cat cat dog";
//     cout<<wordPattern(pattern,s);
// }

//FIND THE MAXIMUM NUMBER OF FRUITS COLLECTED (3363) (IMPORTANT) (DP GRID)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // i=row,j=column
//     vector<vector<int>> fruits={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n = fruits.size();
//     vector<vector<int>> t(n, vector<int>(n, 0));
//     //t[i][j] = max fruits collected till [i][j]

//     //For child 1 , go through diagonal cells so that can be done in n-1 steps
//     int result = 0;
//     for(int i = 0; i < n; i++){
//         result += fruits[i][i];
//     }

//     //Before child2 and child3, nullify the cells which can't be visited by child2 and child3
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(i < j && i+j < n-1) {
//                 t[i][j] = 0; //Cells which cannot be used with Child starting from (n - 1, 0)
//             }else if(i > j && i+j < n-1){
//                 t[i][j] = 0;//Cells which cannot be used with Child starting from (0, n - 1)
//             }else{
//                 t[i][j] = fruits[i][j//store cells into "t" which can be used
//             }
//         }
//     }
    
//     //child2 collect fruits (n - 1, 0)
//     //cells upper to diagonal : i < j
//     for(int i = 1; i < n; i++) {
//         for(int j = i+1; j < n; j++) {
//             t[i][j] += max({t[i-1][j-1], t[i-1][j], (j+1 < n) ? t[i-1][j+1] : 0});
//             //t[i-1][j-1], t[i-1][j], t[i-1][j+1] are all possible ways to reach t[i][j]
//         }
//     }

//     //child3 collect fruits (0, n - 1)
//     //cells upper to diagonal : i > j
//     for(int j = 1; j < n; j++) {
//         for(int i = j+1; i < n; i++) {
//             t[i][j] += max({t[i-1][j-1], t[i][j-1], (i+1 < n) ? t[i+1][j-1] : 0});
//             ////t[i-1][j-1], t[i][j-1], t[i+1][j-1] are all possible ways to reach t[i][j]
//         }
//     }
//     cout<<result + t[n-2][n-1] + t[n-1][n-2];
//     //child 2 returns maxFruits at t[n-2][n-1]
//     //child 2 returns maxFruits at t[n-1][n-2]
// }

//REORDERED POWER OF TWO (869)
//T.C : O(d), d = number of digits
//S.C : O(1)
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> getCountformat(int n){
//     vector<int> res (10,0);//array of size 10 for storing occurence of digits in each number
//     //Idea is to check this occurence array, 
//     //beacuse it will be the only thing tha will not change even on shuffling/in permutations
//     while(n){
//         res[n%10]++; //To extract digit and store occurence in res (this occurence array is checked)
//         n/=10;
//     }
//     return res;
// }
// int main(){
//     int n=215;//define int
//     vector<int> input=getCountformat(n);//input array to store format of input number
//     for(int i=0;i<31;i++){
//         if(input==getCountformat(1<<i)){ //it means if input==getCountformat(2^i)
//         //if input(occurence array) is same as tha t of 2^i then return true
//             cout<<"true";
//         }
//     }
// }

//SORT CHARACTERS BY FREQUENCY (451) (USING COMPARATOR AND SORTING)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s = "baaA";//input string
//     vector<pair<char,int>> vec(123);
//     //vector to store pair wise character with number of occurence
//     for(char &ch : s) {
//         int freq = vec[ch].second; //frequency is .second of character
//         vec[ch] = {ch, freq+1};//every time a character seen, inreement frequency with 1
//     }
//     auto comp = [&](pair<char,int> &p1,pair<char,int> &p2) {
//         //[&] used so that value by inference is used that saves memory
//         //p1 and p2 are 2 pairs that we compare according to their .second{or frequency}
//         return p1.second > p2.second;
//     };
//     sort(begin(vec), end(vec), comp);//to sort vector using comparator
//     string result = "";//to store result
//     for(int i = 0; i <= 122; i++) {
//         result += string(vec[i].second, vec[i].first);
//         //increement a string of size vec[i].second, and vec[i].first as content
//     }
//     cout<<result;
// }

//RANGE PRODUCT QUERIES OF POWERS (2438)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int mod=1e9+7;//define modulus as answer required in modulo
//     int n=15;
//     vector<vector<int>> queries={{0,1},{2,2},{0,3}};
//     vector<int> result;//array to store result
//     vector<int> power;//array to store power array that equals to "n" when added up
//     for(int i=0;i<32;i++){
//         if((n & (1<<i))!=0){ // to check if i'th bit is set
//             power.push_back(1<<i); //push to power when bit is == 1
//         }
//     }
//     for(auto &val:queries){
//         int start=val[0];//start of window
//         int end=val[1];//end of window
//         long product=1;//to store product 
//         for(int i=start;i<=end;i++){//run loop from start to end in each turn
//             product=(product*power[i])%mod;//update product
//         }
//         result.push_back(product);//ush product to result
//     }
//     for(int &ele:result){
//         cout<<ele;
//     }
// }

//COUNT PRIMES (204)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n=10;
//     vector<bool> isPrime(n, true); // Create a vector of boolean values, filled with 'true', representing prime status
//     int primeCount = 0; // Initialize a count of prime numbers
      
//     // Use the Sieve of Eratosthenes algorithm to find all primes less than n
//     for (int i = 2; i < n; ++i) { // Start at the first prime, 2, and check up to n
//         if (isPrime[i]) { // If the number is marked as prime
//             primeCount++; // Increment the count of primes
//             // Mark all multiples of i as not prime starting from i^2 to avoid redundant work (i * i can be optimized to skip non-primes)
//             for (int j=i; j < n; j += i) {
//                 isPrime[j] = false; // Mark the multiple as not prime
//             }
//         }
//     }
//     cout<<primeCount;
// }

//MAXIMUM 69 NUMBER (1323)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=6996;
//     string str=to_string(n);//convert int to string of integer 
//     for(char& ch:str){
//         if(ch=='6'){//replace first occurence of 6 to 9
//             ch='9';
//             break;
//         }
//     }
//     cout<<"Largest number after replacing one integer is : "<<stoi(str);//convert string back to integer 
// }

//NEW 21 GAME (837)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n= 21;
//     int k= 17;
//     int maxPts= 10;
//     vector<double> P(n + 1, 0.0);
    //P[i] = probability of getting score = i
//     P[0] = 1; //Since already initally she has score = 0, hence probability for scoring 0 is 1
//     double currProbabSum = k > 0 ? 1 : 0;
//     for (int i = 1; i <= n; i++) {
//         P[i] = currProbabSum/maxPts;
//         if(i < k) {
//             currProbabSum += P[i];
//         }
//         if(i - maxPts >= 0 && i-maxPts < k) {
//             currProbabSum -= P[i-maxPts];
//         }
//     }
//     cout<<accumulate(P.begin() + k, P.end(), 0.0);
// }

//NUMBER OF ZERO FILLED SUBARRAYS (2348)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{0,0,0,2,0,0};
//     int n=arr.size();
//     int count=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count++;
//         }else{
//             count=0;
//         }
//         sum+=count;// 1+2+3 then count=0 and then 1+2
    //sum updates each time with leaving previous one until non zero element occurs
//     }
//     cout<<sum;
// }

//Arithmetic Slices (413)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{1,2,3,4};
//     int currslice=0;//to mark current slice were working with
//     int total= 0;//to keep track of total slices that we have got
//     int diff= INT_MAX;//we need this to compare with currdiff and update diff accordingly 
//     for(int i=1;i<arr.size();i++){
//         int currdiff=arr[i] - arr[i-1];//difference of each slice
//         if(currdiff==diff) currslice++;//if diff == currdiff then add slice to total
//         else{
//             diff=currdiff;//update diff
//             currslice=0; //remove that slice
//         }
//         total+=currslice;//keep adding each time valid slice found
//     }
//     cout<<"Total Arithmetic Slices are : "<<total;
// }

//COUNT SQUARE SUBMATRICES WITH ALL ONES
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> num={{0,1,1,1},{1,1,1,1},{0,1,1,1}};
//     int m=num.size();
//     int n=num[0].size();
//     vector<vector<int>> t(m, vector<int>(n,-1));//initialise memorization 
//     int res=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || j==0){ //i or j is zero then we cannot expand and check
//                 t[i][j]=num[i][j];
//             }else if(num[i][j]==1){
//                 t[i][j]=1+min({t[i][j-1] , t[i-1][j-1], t[i-1][j]});
//                 //1 is the element at which we are standing and checking
//                 // min(left, up, diagonal previous)
//             }
//             res+=t[i][j];
//         }
//     }
//     cout<<"Total Squared Matrix are: "<<res;
// }

//Longest Substring Without Repeating Characters (3)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="abcabcbb";
//     unordered_set<char> store;
//     //Khandani Sliding Window Starts
//     int i=0,j=0,maxl=0;
//     while(j<s.length()){
//         if(!store.count(s[j])){
//             store.insert(s[j]);
//             maxl=max(maxl,j-i+1);
//             j++;
//         }else{
//             store.erase(s[i]);
//             i++;
//         }
//     }
//     cout<<maxl;
// }

//Find the Index of the First Occurrence in a String (28)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="butsad";
//     string n="sad";
//     int len=n.length();
//     for(int i=0;i<s.length();i++){
//         if(s.substr(i,len) == n){
//             cout<<i;
//         }
//     }
// }

//Maximal Square (221)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<vector<int>> num = {
//         {1,0,1,0,0},
//         {1,0,1,1,1},
//         {1,1,1,1,1},
//         {1,0,0,1,0}
//     };
//     int m = num.size();
//     int n = num[0].size();
//     int maxl = 0;//to check max each time
//     vector<vector<int>> t(m, vector<int>(n, 0));//to do memoization
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == 0 || j == 0) {
//                 t[i][j] = num[i][j];
//             } 
//             else if (num[i][j] == 1) {
//                 t[i][j] = 1 + min({t[i-1][j], t[i][j-1], t[i-1][j-1]});
//             }
//             maxl = max(maxl, t[i][j]);
//         }
//     }
//     cout << "Maximal Square Area: " << maxl * maxl;
// }

//ROTATE IMAGE (48)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//Step 1:- Transpose the Matrix 
//Step 2:- Reverse the matrix 
//     vector<vector<int>> num={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<num.size();i++){
//         for(int j=i;j<num.size();j++){ //to find transpose of (Square matrix)
//             swap(num[i][j],num[j][i]); //to swap element that dont lie on diagonal 
//         }
//     }
//     for(int i=0;i<num.size();i++){
//         reverse(num[i].begin(),num[i].end());//to reverse matrix
//     }
//     for(int i=0;i<num.size();i++){
//         for(int j=0;j<num.size();j++){ //to print matrix
//             cout<<num[i][j];
//         }
//     }
// }

//Transpose of Matrix (867)(IMP)
//Works for all matrix,Square + Non Square 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> matrix={{1,2,3},{4,5,6}};
//     int m = matrix.size();
//     int n = matrix[0].size();
//     vector<vector<int>> result(n, vector<int>(m)); // new matrix n x m
//     for(int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             result[j][i] = matrix[i][j];
//         }
//     }
// }

// (3195)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>>grid={{0,1,0},{1,0,1}};
//     int minRow=grid.size();
//     int minCol=grid[0].size();
//     int maxCol=-1,maxRow=-1;
//     for(int i=0;i<minRow;i++){//to access row of matrix
//         for(int j=0;j<minCol;j++){//to access column of matrix 
//             if(grid[i][j]==1){
//                 minRow=min(minRow,i);
//                 maxRow=max(maxRow,i);
//                 maxCol=max(maxCol,j);
//                 minCol=min(minCol,j);
//             }
//         }
//     }
//     cout<<(maxCol - minCol + 1)*(maxRow - minRow + 1);
// }

//LONGEST SUBARRAY OF 1's AFTER DELETING ONE ELEMENT 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{0,1,1,1,0,1,1,0,1};
//     //Khandani Sliding Window 
//     int i=0;
//     int j=0;
//     int maxl=0;
//     int lastZero=-1;//to store index of last occured zero
//     while(j<arr.size()){
//         if(arr[j]==0){
//             i=lastZero+1;//update i only when nums[j] == 0
//             lastZero=j;//update last zero
//         }
//         maxl=max(maxl,j-i);
//         j++;
//     }
//     cout<<maxl;
// }

//MAXIMUM AREA OF LONGEST DIAGONAL RECTANGLE (3000)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> dimensions={{9,3},{8,6}};
//     int m = dimensions.size();
//     double maxl = -1.0;//to update max len
//     int maxArea = 0;//to update max area
//     for (int i = 0; i < m; i++) {
//         int l = dimensions[i][0];//length
//         int w = dimensions[i][1];//breadth
//         double len = sqrt(l*l + w*w);//formula of diagonal given in question 
//         int area = l * w; //area of rectangle 
//         if (len > maxl || (len == maxl && area > maxArea)) { 
//         //if len is greater that max len and if the len is max,then area should be greater than maxarea
//             maxl = len;//make len as max
//             maxArea = area;//make area as max
//         }
//     }
//     cout<<maxArea;
// }

//LENGTH OF LONGEST V SHAPED DIAGONAL SEGMENT (3459)
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> directions = {{1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
// //1,1 means d=0; 1,-1 means d=1; -1,-1 means d=2; -1,1 means d=3
// int m, n;
// int t[501][501][4][2];
// int solve(int i, int j, int d, bool canTurn, int val, vector<vector<int>>& grid) {
//     int i_ = i + directions[d][0];// to store i'th of where we can go next
//     int j_ = j + directions[d][1];// to store j'th of where we can go next
//     if(i_ < 0 || i_ >= m || j_ < 0 || j_ >= n || grid[i_][j_] != val) {
//         return 0;//if grid[i_][j_] does not match val ; m,n out of bound
//     }
//     if(t[i_][j_][d][canTurn] != -1) {
//         return t[i_][j_][d][canTurn];
//     }
//     int result = 0;
//     int keepMoving = 1 + solve(i_, j_, d, canTurn, val == 2 ? 0 : 2, grid);// if val is 2 then update val to  0 else 2
//     result = max(result, keepMoving);// toc check if length after keepmoving is max, update accordingly
//     if(canTurn == true) { //if we can turn
//         int turnAndMove = max(keepMoving, 1 + solve(i_, j_, (d+1)%4, false, val == 2 ? 0 : 2, grid)); //perform solve function with d+1, increement d
//         result = max(result, turnAndMove);//update result
//     }
//     return t[i_][j_][d][canTurn] = result;
// }
// int main(){
//     vector<vector<int>> grid = {{2,2,1,2,2},{2,0,2,2,0},{2,0,1,1,0},{1,0,2,2,2},{2,0,0,2,2}};
//     m = grid.size();
//     n = grid[0].size();
//     memset(t, -1, sizeof(t));//memoize set
//     int result = 0;
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             if(grid[i][j] == 1) {//if element is ==1
//                 for(int d = 0; d <= 3; d++) {
//                     result = max(result, 1 + solve(i, j, d, true, 2, grid));//store max result where next element is= 2
//                 }
//             }
//         }
//     }
//     cout<<"Length of longest V Shaped Diagonal sement is: "<<result;
// }

//SORT MATRIX BY DIAGONAL (3446)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> grid = {{0,1},{1,2}};
//     int m=grid.size();
//     unordered_map<int,vector<int>> res;
//     //map to store diagonal with elements int{0 is numbering for main diagonal.
//     //if diagonal is upper diagonal matrix then its numbering will be +ve (else) -ve
//     //like 0 -> 0,2;1 -> 1;-1 ->1;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             int diag=i-j;//represnts which diagonal it is
//             res[diag].push_back(grid[i][j]); //help find anmd store diagonal elements
//             //to store element grid[i][j] where the int/numbering is diag
//         }
//     }
//     for(auto it:res){
//         if(it.first>=0){
//             sort(begin(it.second),end(it.second));
//             //to sort in increasing order when diagonal in upper triangle
//         }else{
//             sort(rbegin(it.second),rend(it.second));
//             //to sort in decreasing order when diagonal in bottom triangle
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             int diag=i-j;//represnts which diagonal it is
//             grid[i][j]=res[diag].back();//after sorting push element back to grid from the map
//             res[diag].pop_back();
//             //pop the diagnol along with numbering and array from map, after it is sent back to grid 2D array
//         }
//     }
// }

//ALICE AND BOB PLAYING FLOWER GAME (3021)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long m=3;
//     long long n=2;
//     //Alice can only win if m+n is odd.
//     long longevenM=m/2;// even no. form of m
//     long long evenN=n/2;// even no. form of n
//     long long oddN=(n+1)/2;// odd no. form of n
//     long long oddM=(m+1)/2;// odd no. form of m
//     long long result =oddM*evenN + oddN*evenM;//combination that will give no. of posisble ways
//     cout<<result;
// }

//RECTANGLE AREA (223)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     //area(A) + area(B) - overlap
//     int ax1 = -3,ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2;
//     int areaA=(ax2 - ax1)*(ay2 - ay1);//area of rectangle A
//     int areaB=(bx2 - bx1)*(by2 - by1);//area of rectangle B
    
//     //for finding overlapping
// //min(ax2,bx2) and min(ay2,by2) is for positive quadrants/sides, beacuse we want to minimze their edge value
// //max(ax1,bx1) and max(ay1,by1) is for positive quadrants/sides, beacuse we want to minimze their edge value
//     int w=max(0,min(ax2,bx2)-max(ax1,bx1));//width of overlap
//     int h=max(0,min(ay2,by2)-max(by1,ay1));//height of overlap
//     int overlap=w*h;//area of overlap
//     cout<<"Area of 2 overlapped Recangles is: "<<areaA+areaB-overlap;
// }

//VALID SUDOKU (36)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     unordered_set<string> st;// set which will store 3 informations about each element
//     for(int i = 0; i<9; i++) {
//         for(int j = 0; j<9; j++) {
//             if(board[i][j] == '.') continue;
//             //if '.' is encountered on board, then continue to next place/element
//             string row = string(1, board[i][j]) + "_row_" + to_string(i);//to_string(i) is value of row
//             //to store row board[i][j]'s row
//             string col = string(1, board[i][j]) + "_col_" + to_string(j);//to_string(j) is value of column
//             //to store row board[i][j]'s column
//             string box = string(1, board[i][j]) + "_box_" + to_string(i/3) + "_" + to_string(j/3);
//             //to store row board[i][j]'s i/3,j/3 {i/3,j/3 will be same for whole block[total 9 blocks in sudoku]}
            
//             if(st.count(row) || st.count(col) || st.count(box)) return false; 
//             //if the number already exist then false
            
//             st.insert(row);//else if not false then do this
//             st.insert(col);//else if not false then do this
//             st.insert(box);//else if not false then do this
//         }
//     }
//     return true;
// }

//Find the Number of Ways to Place People I (3025)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<vector<int>> points={{6,2},{4,4},{2,6}};
//     auto comp = [&](const vector<int>& a, const vector<int>& b) {//defining comparator
//         //[&] used so that value by inference is used that saves memory
//         //a and b are 2 vectors that we compare 
//         //for A(x1,y1) and B(x2,y2) x2>x1 && y1>y2 to get upper left point
//         return a[0] < b[0] || (a[0] == b[0] && b[1] < a[1]);//true if condition met
//     };
//     sort(points.begin(),points.end(),comp);
//     int n = points.size();
//     int ans = 0;
//     for (int i = 0; i < n; ++i) {
//         int y1 = points[i][1];
//         int maxY = INT_MIN;//to update maxY
//         for (int j = i + 1; j < n; ++j) {
//             int y2 = points[j][1];
//             if (maxY < y2 && y2 <= y1) {
//                 maxY = y2;
//                 ++ans;
//             }
//         }
//     }
//     cout<<ans;
// }

//FIND CLOSEST PERSON (3516)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x=2;
//     int y=7;
//     int z=5;
//     int a=abs(x-z);//to find distance of person 1 from person 3
//     int b=abs(y-z);//to find distance of person 2 from person 3
//     if(a==b){
//         cout<<"0";
//         //if a==b then return 0, else Return 2-1 if (a<b) or 2-0 if(a!<b)
//     }else cout<<2- (a<b);
// }

//MINIMUM OPERATIONS TO MAKE INTEGER ZERO (2749)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     long long num1 = 3, num2 = -2;
//     for (int i = 1; i < 60; i++) {
//         long long val = num1 - i * num2;
//         // Each operation: num1 = num1 - (2^i + num2)
//         // After k operations: num1 - k * num2 - sum(2^i) = 0
//         // So we need: sum(2^i) = num1 - k * num2 = x
//         if (val >= i && __builtin_popcountll(val) <= i) {//val>=i is nearly always fullfiled
//             cout << i << endl;
//             return 0;
//         }
//     }
//     cout << -1 << endl;//if no condition sattisfied
// }

//MINIMUM OPERATIONS TO MAKE ARRAY ELEMENTS ZERO (3495)
// #include <bits/stdc++.h>
// using namespace std;
// long long solve(int l, int r) {
//     //L, R
//     //1 to 3 : 1 steps
//     //4 to 15 : 2 steps
//     //16 to 63 : 3 steps
//     long long L = 1;//set L=1 initially 
//     //R = 4*L-1 
//     long long S = 1;//set S=1 initially 
//     long long steps = 0;
//     while(L <= r) {//untill L<=r
//         long long R = 4*L - 1;//to update R
//         long long start = max(L, (long long)l);
//         long long end   = min(R, (long long)r);
//         if(start <= end) {
//             steps += (end-start+1)*S;//formula to calculate steps
//         }
//         S += 1;//increement S untill L<=r {dont increement if while not met}
//         L = L*4;//multiple L*4 each time untill L<=r {dont multiply if while not met}
//     }
//     return steps;
// }
// int main() {
//     vector<vector<int>> queries = {{2,6}};
//     long long res = 0;//to store result
//     for(auto &query : queries){//iterate through query
//         int l = query[0];//leftmost limit
//         int r = query[1];//rightmost limit
//         long long steps = solve(l, r);//pass l,r to solve function
//         res += (steps+1)/2;//convert result to ceil value as steps can be odd too
//     }
//     cout <<"Minimum Steps: "<<res;
// }

//FIND N UNIQUE INTEGERS SUM UPTO ZERO (1304)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n=5;
//     vector<int> res;
//     if(n % 2 == 1){ // if n is odd then
//         res.push_back(0); //insert zero first, as (i)+(-i)=Always Even
//             //Therefore add a zero to make even + 1 =odd
//     }
//     for(int i=1;i<=n/2;i++){
//         res.push_back(i);//push i
//         res.push_back(-i);//push counterpositive of i (-1*i)
//     }
//     cout<<"Array is: ";
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
// }

//CONVERT INTEGER TO SUM OF TWO
// #include<bits/stdc++.h>
// using namespace std;
// bool hasZero(int n) {
//     while (n > 0) {
//         if (n % 10 == 0) return true;//if number divisible by 10 then means it has 0 in it
//         n /= 10;//if no zeros in digit after removing the last digit
//     }
//     return false;
// }
// int main(){
//     int n=214;
//     for (int a = 1; a < n; a++) {
//         int b = n - a;//used loop to check on multiple pair and choose pair that has no zero in both a,b
//         if (!hasZero(a) && !hasZero(b)) {//if both a,b has no zero
//             return {a, b};
//         }
//     }
// }

//NUMBER OF PEOPLE AWARE OF A SECRET (2327) (UISNG SLIDING WINDOW + MEMOIZATION)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=6,delay=2,forget=4;
//     int mod=1e9+7;
//     vector<int>t(n + 1, 0);//Vector for memoization of size n+1 and 0 as initially
//     // t[day] means number of people that know secret on "day"
//     t[1] = 1;//As only i1 person know secret on day 1.
//     int count = 0;// to store sliding window sum from range [day-forget+1 and day-delay]
//     for (int day = 2; day <= n; day++) {//
//         // people who become eligible to share on this day
//         if (day - delay > 0) {
//             count = (count + t[day-delay])%mod;
//         }
//         // people who forget on this day
//         if (day - forget > 0) {
//             count = (count - t[day-forget]+mod)%mod;
//         }
//         //above if loop tell no. of people who know secret betwen day-forget+1 and day-delay
//         t[day] = count; //total number of people who will get to know today
//     }

//     // Count the people who still remember on day n
//     int result = 0;
//     for (int day = n - forget + 1; day <= n; day++) {
//         if (day > 0) {
//             result = (result + t[day])%mod;
//         }
//     }
//     cout<<"Noumber of people who know secret on "<<n<<"th day: "<<result;
// }

//MINIMUM NUMBER OF PEOPLE TO TEACH (1733) (GREEDY)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=3;
//     vector<vector<int>> languages={{2},{1,3},{1,2},{3}};
//     vector<vector<int>> friendships={{1,4},{1,2},{3,4},{2,3}};
//     //Intution: we teach mostTalked lang to the people that dont know mostTalked lang
//     //sadUsers.lenght() - mostTalked lang=answer
        
//     unordered_set<int> sadUsers;//set to store sad users
//     //used set so that elemnts/persons dont repeat
//     for(auto &friends : friendships) {
//         int u = friends[0] - 1; //convert friends[0] to 0 based indexing
//         int v = friends[1] - 1;//convert friends[1] to 0 based indexing

//         unordered_set<int> langSet(begin(languages[u]), end(languages[u]));//to store all language that u'th user knows
//         bool canTalk = false;//to check common lang
//         for(int lang : languages[v]) {
//             if(langSet.count(lang)) {//if lang present in langSet
//                 canTalk = true;
//                 break;
//             }
//         }
//         if(!canTalk) {//if cant talk
//             sadUsers.insert(u);
//             sadUsers.insert(v);
//         }
//     }

//     //Find max known language among sad users
//     vector<int> language(n+1, 0);
//     int mostKnownLang = 0;

//     for(int user : sadUsers) {
//         for(int lang : languages[user]) {
//             language[lang]++;//add language of sadusers to language vector
//             mostKnownLang = max(mostKnownLang, language[lang]);//to update most talked lang
//         }
//     }        
//     cout<<"Minimum number of persons to teach: "<<sadUsers.size() - mostKnownLang;
// }

//SORT VOWELS IN A STRING (2785)
// #include <bits/stdc++.h>
// using namespace std;
// bool isVowel(char c){//function to chech if character is vowel 
//     c=tolower(c);//convert c to lower and check, so that conditions decrease
//     return c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u';
// }
// int main(){
//     string s="lEetcOde";
//     vector<char> vowels;//to store occuring vowels in s
//     for(char c:s){
//         if (isVowel(c)){//if c is vowel then
//             vowels.push_back(c);//push c to vowels
//         }
//     }
//     sort(vowels.begin(),vowels.end());//sort thvowels vector
//     int i=0;//to access each character in vowels vector
//     for(char &ch:s){
//         if(isVowel(ch)){//if ch is a vowel
//             ch=vowels[i++];//replace character ch with elemnt at vowels[i]
//         }
//     }
//     cout<<s;
// }

//VOWELS GAME IN A STRING (3227)
// #include <bits/stdc++.h>
// using namespace std;
// bool isVowel(char c){//function to chech if character is vowel 
//     return c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u';
// }
// int main(){
//     string s="leetcoder";
//     for(char c:s){
//         if (isVowel(c)){//if c is vowel then
//             return true;
//         }
//     }
//     return false;
    
// }

//3541
// #include<bits/stdc++.h>
// using namespace std;
// bool isVowel(char c){
//     c=tolower(c);
//     return c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u';
// }
// int main(){
//     vector<int> frequency(26); //vector to store frequency of each character (Total 26 character)
//     string s="successes";
//     int maxFreqVowel=0;//to store max frequency vowel
//     int maxFreqConso=0;//to store max frequency consonant
//     for(char &c:s){
//         frequency[c-'a']++;//increments frequency by one when c-'a' occurs
//     }
//     for(int i=0;i<26;i++){
//         char c='a'+i;//to get each character from 26
//         if(isVowel(c)){//character vowel then
//             maxFreqVowel=max(maxFreqVowel,frequency[i]);//update frequency 
//         }else{
//             maxFreqConso=max(maxFreqConso, frequency[i]);
//         }
//     }
//     cout<<maxFreqConso+maxFreqVowel;
// }

// VOWEL SPELLCHECKER (966)
// #include<bits/stdc++.h>
// using namespace std;
// unordered_set<string> exactWords;          // to store exact word {if found}
// unordered_map<string, string> caseMap;     // if no exact match, then turn to lower case and store here
// unordered_map<string, string> vowelMap;    // mask all vowels with '*' for traversals
// string toLower(const string& s) {//to convert string to lowerCase
//     string res = s;
//     for (char& c : res) {//access each character
//         c = tolower(c);//and turn to lower
//     }
//     return res;
// }
// string maskVowels(const string& s) {//to mask vowels of lowercase string 
//     string res = s;
//     for (char& c : res) {
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){//if char is vowle then
//             c = '*';//replace char with '*'
//         }
//     }
//     return res;
// }
// string checkForMatch(const string& query) {
//     // Exact match
//     if (exactWords.count(query)) {
//         return query;
//     }
//     // Case error match
//     string lowerQuery = toLower(query);
//     if (caseMap.count(lowerQuery)) {
//         return caseMap[lowerQuery];
//     }
//     // Vowel error match
//     string maskedQuery = maskVowels(lowerQuery);
//     if (vowelMap.count(maskedQuery)) {
//         return vowelMap[maskedQuery];
//     }
//     // 4. No match
//     return "";
// }
// int main(){
//     vector<string> wordlist = {"KiTe","kite","hare","Hare"};
//     vector<string> queries = {"kite","Kite","KiTe","Hare","HARE","Hear","hear","keti","keet","keto"};
//     exactWords.clear();
//     caseMap.clear();
//     vowelMap.clear();
//     for (string word : wordlist) {
//         exactWords.insert(word);//inserts every query to exactWords
//         string lowerWord = toLower(word);//converts whole word to lowercase
//         if (caseMap.find(lowerWord)==caseMap.end()){//if lowerWord not in caseMap then push into caseMap
//             caseMap[lowerWord] = word;
//         }
//         string maskedWord = maskVowels(lowerWord);//to make vowels of lowerWord masked
//         if (vowelMap.find(maskedWord)==vowelMap.end()){//if maskedWord not in vowelMap then push into vowelMap
//             vowelMap[maskedWord] = word;
//         }
//     }

//     vector<string> result;//vector to store result
//     for (string query : queries) {
//         result.push_back(checkForMatch(query));//function top check query matches wihich category
//     }
    
//     for(string c:result){
//         cout<<c<<" , ";
//     }
// }

//MAXIMUM NUMBER OF WORDS YOU CAN TYPE (1935)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string text = "hello world";
//     string brokenLetters = "ad";
//     bool mapp[26];//by default all 26 are false
//     for(char &ch:brokenLetters){
//         mapp[ch -'a']=true;//make mapp[i] == true when it is a brokenLetter
//         //{ch-'a'} used to extract brokenLetter
//     }
//     bool canBTyped=true;
//     int result=0;
//     for(char &c:text){
//         if(c==' '){//this means 1 word has been iterated as "space" is delimitter
//             if(canBTyped){//if word does not contain brokenLetter
//                 result++;//increement reult
//             }
//             canBTyped=true;
//         }else if(mapp[c-'a']==true){//if any one/more character is a brokenLetter
//             canBTyped=false;
//         }
//     }
//     if(canBTyped){
//         result++;
//     }
//     cout<<"Total Word that can be typed: "<<result;
// }

//DESIGN A FOOD RATING SYSTEM (2353)
// class FoodRatings {
// public:
//     unordered_map<string, set<pair<int, string>>> cuisine_ratings_food;
//     //string mapped with set, and set created on based of rating{int}

//     unordered_map<string, string> food_cuisine;//to store cuisine and the food they have
//     unordered_map<string, int> food_rating;//to store food and its rating
    
//     FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
//         int n = foods.size();
        
//         for(int i = 0; i<n; i++) {
//             string food    = foods[i];
//             string cuisine = cuisines[i];
//             int rating     = ratings[i];
            
//             cuisine_ratings_food[cuisine].insert({-rating, food});
//             food_cuisine[food] = cuisine;
//             food_rating[food]  = rating;
            
            
//         }
//     }
    
//     void changeRating(string food, int newRating) {
//         string cuisine = food_cuisine[food];//access food in cuisine
//         int oldRating  = food_rating[food];
        
//         cuisine_ratings_food[cuisine].erase({-oldRating, food});//erase oldrating from "food" position
//         cuisine_ratings_food[cuisine].insert({-newRating, food});//insert oldrating from "food" position
//         food_rating[food] = newRating;//update rating
        
//     }
    
//     string highestRated(string cuisine) {
//         return begin(cuisine_ratings_food[cuisine])->second; //used second food anme is second thing in pair
        
//         //first item will have highest absolute rating "we put all ratings in negative" (ordered_set)
//         //Why did we not put them in ascending order and just return the last element of ordered_set ?
//         //Ans : Because We can have a case like below
//         //{(15, abc), (16, ramen), (16, sushi)} -> Order in ordered_set. last element is not lexicographically smaller
//         //{(-16, ramen), (-16, sushi), (-15, abc)} -> First element is now lexicographically smaller
//     }
// };

//DESIGN TASK MANAGER (3408)
// class TaskManager {
//     typedef pair<int, int> Task;//to store priority, taskId
//     priority_queue<Task> maxHeap;//priority,taskid
//     //tasks sorted by priority, then taskId

//     unordered_map<int, int> taskPriorityMap;//taskid -> priority
//     //map to store taskid and its priority

//     unordered_map<int, int> taskOwnerMap;//taskid -> userid
//     //map to store which task done by which owner

// public:
//     // Initialize with a list of [userId, taskId, priority]
//     TaskManager(vector<vector<int>>& initialTasks) {
//         for (const auto& task : initialTasks) {
//             add(task[0], task[1], task[2]);
//             //task[0]=userid
//             //task[1]=taskid
//             //tasl[2]=priority
//         }
//     }

//     // Add new task
//     void add(int userId, int taskId, int priority) {
//         maxHeap.push({priority, taskId});
//         taskPriorityMap[taskId] = priority;//taskid -> priority
//         taskOwnerMap[taskId] = userId;//taskid -> userid
//     }

//     // Edit existing task priority
//     void edit(int taskId, int newPriority) {
//         maxHeap.push({newPriority, taskId});
//         taskPriorityMap[taskId] = newPriority;//update taskid -> newpriority {change}
//     }

//     // Remove a task from the system
//     void rmv(int taskId) {
//         taskPriorityMap[taskId] = -1; // mark as invalid
//     }

//     // Execute the top task and return its userId
//     int execTop() {
//         while (!maxHeap.empty()) {
//             auto [priority, taskId] = maxHeap.top();
//             maxHeap.pop();

//             if (priority == taskPriorityMap[taskId]) {//means taskid is fresh (not stale)
//                 taskPriorityMap[taskId] = -1; // mark as executed
//                 return taskOwnerMap[taskId];//return user id from taskOwnerMap
//             }
//         }
//         return -1; // no tasks available
//     }
// };

//DESIGN SPREADSHEET (3484)
// class Spreadsheet {
// public:
//     vector<vector<int>> sheet;//2D sheet defined

//     Spreadsheet(int rows) {
//         sheet.assign(rows, vector<int>(26, 0));    //sheet defined with 26 column, and rows
//     }
    
//     void setCell(string cell, int value) {
//         int col = cell[0] - 'A';//to find column, by converting Character to int, this int is column number
//         int row = stoi(cell.substr(1)) - 1;//string from cell[0] till end is converted to int,{-1 after that to make 1 indexed} 
//         sheet[row][col] = value;//store value at sheet[row][col]
//     }
    
//     void resetCell(string cell) {
//         int col = cell[0] - 'A';
//         int row = stoi(cell.substr(1)) - 1;
//         sheet[row][col] = 0;//make value of sheet[row][col]=0
//     }
    
//     int solve(string &s) {
//         if(isdigit(s[0])) {
//             return stoi(s);//character is digit
//         }

//         int col = s[0] - 'A';
//         int row = stoi(s.substr(1)) - 1;

//         return sheet[row][col];//else turn character to int and then return
//     }

//     int getValue(string formula) {
//         //Example : "=X+Y"
//         string s = formula.substr(1);//taken from index 1 to remove '='
//         int plusIdx = s.find('+');//find '+' plus

//         string left = s.substr(0, plusIdx);//left side string/int of '+'
//         string right = s.substr(plusIdx+1);//right side string/int of '+'


//         return solve(left) + solve(right);//add right and left part
//     }
// };

//COUNT ELEMENTS WITH MAXIMUM FREQUENCY (3005)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,2,2,1,3,4};
//     unordered_map<int,int> mpp;//map to store frequency
//     int freq=0;//to update and compare maximum frequency
//     int res=0;//to store result
//     for(int ele:arr){
//         if(++mpp[ele] > freq){ 
//         //if newly incremented frequency of the current element is greater than the current maximum frequency
//             freq=mpp[ele];//then update max frequency
//             res=0;//and do result 0
//         }
//         if(mpp[ele]==freq){//if this elemnt has max frequency
//             res+=mpp[ele];//then add that frequency to result
//         }
//     }
//     cout<<res;
// }

//COMPARE VERSION NUMBERS (165) (using stringstream)
// #include<bits/stdc++.h>
// using namespace std;
// vector<string> convertToToken(string version){
//     stringstream v(version);//convert string to string stream
//     vector<string> tokens;//array of strings to store extracted tokens
//     string tokenOfv=" ";//variable to store current token
//     while(getline(v,tokenOfv,'.')){
//         // v -> stringstream from which we have to extract token
//         //tokenOfv -> to store extracted token
//         //'.' is the delimitter
//         tokens.push_back(tokenOfv);//push current extracted token to tokens array
//     }
//     return tokens;
// }
// int main(){
//     string version1 = "1.2", version2 = "1.10";
//     vector<string> v1 = convertToToken(version1);//extract tokens of version1
//     vector<string> v2 = convertToToken(version2);//extract tokens of version2
//     int m = v1.size();
//     int n = v2.size();
            
//     int  i = 0;
//     while(i < m || i < n) {
        
//         int a = i < m ? stoi(v1[i]) : 0 ;//while i<m convert i'th index string to int
//         int b = i < n ? stoi(v2[i]) : 0 ;//while i<m convert i'th index string to int
        
//         //concept is that if any of the token is same then continue matching, 
//         //else higher one will be answer
//         if(a > b)
//             cout<<"version1 greater";
//         else if(b > a)
//             cout<<"version2 greater";
//         else
//             i++;
//     }
//     return 0;
// }

//FRACTION TO RECURRING DECIMAL (166)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int numerator = 4, denominator = 333;
//     if(numerator == 0)//if nnumerator is 0 then ans will be zero
//         cout<<"0";
//     string result;//to store result

//     if((long long)numerator * (long long)denominator < 0) {//if their multiplication -ve
//         result += "-";//then add '-' symbol at start of result
//     }

//     long long absNumerator = labs(numerator);//convert numerator to long long absolute
//     long long absDenominator = labs(denominator);//convert denominator to long long absolute

//     long long integerDiv = absNumerator / absDenominator;
//     result += to_string(integerDiv); //log10
//     //add integerDiv to result
//     long long remain = absNumerator % absDenominator;//to find remainder
//     if(remain == 0) {
//         cout<< result;
//     }//if remainder is zero then return current result
//     result += '.';//else if result!=0 then add '.'
//     unordered_map<int, int> mp;//to store if we've seen remainder in past
//     // 0 <= remain < denominator
//     //O(denominator + length)
//     while(remain != 0) {//while remainder > 0
//         if(mp.count(remain)) {//if remainder is already in map
//             result.insert(mp[remain], "("); //O(length)
//             //then insert '(' at mp[remain] position
//             result += ")";
//             break;
//         }

//         mp[remain] = result.length();//add mp[remain] at result.length

//         remain *= 10;//after decimal dot, find remainder to compare with
//         int digit = remain / absDenominator;//to find and add the digit to result
//         result += to_string(digit); //O(1)

//         remain = remain % absDenominator;
//         //update remainder and help to check if same remainder seen in past
//     }

//     cout<<"Answer is: "<<result;
// }

//TRIANGLE (120)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
//     vector<int> dp = triangle.back();//dp takes last row initially
//     int n=triangle.size();
//     int i = n - 2, j = 0;//i=n-2 means start from second last row to First{ bottom-up }
//     while (i >= 0) {
//         dp[j] = triangle[i][j] + min(dp[j], dp[j+1);
//         //triangle[i][j] use 2nd last row, and dp user last row
//         //and same happens as i keeps decreasing, 
//         //j is only used in dp and j accesses whole dp
//         j++;//increase j in both triangle and dp
//         if (j > i) {//if j>i means that current row{triangle} has been fully iterated
//             i--;//move toward i-1 row{prev row while going down to up}
//             j = 0;//and Initialize j again to begining
//         }
//     }
//     cout<<dp[0];//after all rows have been iterated, dp[0] of final dp array is minimumSum
// }

//VALID TRIANGLE NUMBER (611)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={2,2,3,4};
//     sort(arr.begin(),arr.end());//sort array for easy iteration
//     int res=0;
//     for(int k=arr.size()-1;k>1;k--){
//         int i=0;
//         int j=k-1;
//         while(i<j){
//             if(arr[i]+arr[j]>arr[k]){//condition for three points to form a triangle
//             //if this conditionis sattisfied then
//                 res+=j-i;//every number between i and j works can pair form triangle
//                 //so 1(i,j used)+number of elemnt b/w them can form one pair per element
//                 j--;
//             }else{
//                 i++;
//             }
//         }
//     }
//     cout<<res;
// }

//LARGEST TRIANGLE AREA (812)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>>points={{0,0},{0,1},{1,0},{0,2},{2,0}};
//     double maxArea=0.0;
//     for(int i=0;i<points.size();i++){//loop for a(x1,y1) point
//         for(int j=i+1;j<points.size();j++){//loop for b(x2,y2) point
//             for(int k=j+1;k<points.size();k++){//loop for c(x3,y3) point
//                 double x1=points[i][0];
//                 double y1=points[i][1];
                
//                 double x2=points[j][0];
//                 double y2=points[j][1];
                
//                 double x3=points[k][0];
//                 double y3=points[k][1];
                
//                 double a = hypot(x2-x1, y2-y1);//C++ stl to find hypotenuse length between x2,y2 and x1,y1
//                 double b = hypot(x2-x3, y2-y3);
//                 double c = hypot(x3-x1, y3-y1);
                
//                 double s=(a+b+c)*0.5;
//                 double herons=sqrt(s*(s-a)*(s-b)*(s-c));//used herons formula to find area of triangle
//                 maxArea=max(maxArea,herons);//update area of triangle
//             }
//         }
//     }
//     cout<<maxArea;
// }

//LARGEST PERIMETER TRIANGLE (976)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums={1,2,1,10};
//     int maxPerimeter;
//     sort(nums.begin(),nums.end());
//     for(int i=nums.size()-1;i>=2;i--){//start from end, so that first triplet forms largest perimeter
//         if(nums[i-2]+nums[i-1]>nums[i]){//condition to check if three sides can form a triangle
//             maxPerimeter=nums[i-2]+nums[i-1]+nums[i];
//         }
//     }
//     cout<<"Max Perimeter is: "<<maxPerimeter;
// }

//MINIMUM SCORE TRIANGULATION (1039)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>values={3,7,4,5};
//     int n = values.size();
//     vector<vector<int>> dp(n, vector<int>(n));//to store minimum score of the subpolygon for i to j.
//     for (int j = 2; j < n; ++j){
//         for (int i = j - 2; i >= 0; --i){
//             dp[i][j] = INT_MAX;
//             for (int k = i + 1; k < j; ++k){
//                 dp[i][j] =
//                 min(dp[i][j],dp[i][k] + values[i] * values[k] * values[j] + dp[k][j]);
//             }
//         }
//     }
//     cout<<dp[0][n-1];
// }

//FIND TRIANGULAR SUM OF TRIANGLE (2221)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>values={1,2,3,4,5};
//     int n=values.size();
//     while(n>1){
//         for(int i=1;i<values.size();i++){
//             values[i-1]=(values[i]+values[i-1])%10;//replace [i-1] element with new value
//         }
//         n--;//decrease array size by one on each pass
//     }
//     cout<<values[0];
// }

//SUCCESSFUL PAIRS OF SPELLS AND POTIONS (2300)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> spells = {5,1,3};
//     vector<int> potions = {1,2,3,4,5};
//     int success = 7;
//     sort(potions.begin(), potions.end());
//     int m = potions.size();
//     vector<int> ans;
//     ans.reserve(spells.size());  // avoid reallocations

//     for (int spell : spells) {
//         long long need = (success + spell - 1) / spell; // ceil(success / spell)
//         int idx = lower_bound(potions.begin(), potions.end(), need) - potions.begin();
//         ans.push_back(m - idx);
//     }
//     cout<<ans;
// }

//FIND THE MINIMUM AMOUNT OF TIME TO BREW POTIONS (3494)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> skill = {1,5,2,4};
//     vector<int> mana = {5,1,4,2};
//     int n = skill.size(), m = mana.size();
//     vector<long long> finishTime(n, 0); // finishTime[i] = when wizard i finishes current potion
//     for (int j = 0; j < m; ++j) {
//         finishTime[0] += 1LL * mana[j] * skill[0];//calculates 0th element of each wizard pass
//         //PORTION NO. IS SAME, JUST SKILLS CHANGES IN BELOW LOOPS
//         for (int i = 1; i < n; ++i){
//             finishTime[i] = max(finishTime[i], finishTime[i - 1]) + 1LL * mana[j] * skill[i];
//             //pass this array to next wizard
//         }
//         for (int i = n - 1; i > 0; --i){
//             finishTime[i - 1] = finishTime[i] - 1LL * mana[j] * skill[i];
//             //without changing n-1 element, do reverse calc
//         }
//     }
//     cout<<finishTime[n-1];
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> energy={5,2,-10,-5,1};
//     int k = 3;
//     int res=INT_MIN;
//     int size=energy.size();
//     for(int i=size-1;i>=0;i--){
//         if(size>i+k){
//             energy[i]+=energy[i+k];
//         }
//         res=max(res,energy[i]);
        
//     }
//     cout<<res;
// }

//
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     vector<int> power = {7,1,6,6};
//     // Step 1: Count frequency of each unique power value
//     unordered_map<ll, ll> mp;
//     for (int &x : power){
//         mp[x]++;
//     }
//     // Step 2: Collect and sort unique values
//     vector<ll> nums;
//     nums.reserve(mp.size());
//     for (auto &p : mp){
//         nums.push_back(p.first);
//     }
//     sort(begin(nums), end(nums));
//     int n = nums.size();
//     vector<ll> t(n, 0);
//     //dp[i] = Maximum Total Damage if we start from index i
//     long long result = INT_MIN;
//     for (int i = n - 1; i >= 0; --i) {
//         //skip current value
//         ll skip = (i + 1 < n) ? t[i + 1] : 0;

//         //take current value
//         int j   = lower_bound(begin(nums) + i + 1, end(nums), nums[i] + 3) - begin(nums);
//         ll take = nums[i] * mp[nums[i]] + ((j < n) ? t[j] : 0);
//         t[i]   = max(skip, take);
//         result = max(result, t[i]);
//     }
//     cout<<result;
// }

//FIND RESULTANT ARRAY AFTER REMOVING ANAGRAMS (2273)
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     vector<string> words = {"abba","baba","bbaa","cd","cd"};
//     int n=words.size();
//     for(int i=1;i<words.size();i++){
//         string a=words[i];
//         string b=words[i-1];
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());
//         if(a==b){
//             words.erase(words.begin() + i);
//             i--;
//         }
//     }
//     for(auto &w: words) cout << w << " ";
// }

//ADJACENT INCREASING SUBARRAYS DETECTION(3349)
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     vector<int> nums = {2,5,7,8,9,2,3,4,3,1};
//     int k=5;
//     int n=nums.size();
//     int current=1;//to find current increasing subarray
//     int previous=0;
//     for(int i=1;i<n;i++){
//         if(nums[i]>nums[i-1]){
//             current++;
//         }else{//increasing subarray breaks
//             previous=current;//assign current value to previous
//             current=1;//resent current
//         }
//         if(current >= 2*k){
//             cout<<"true";
//         }
//         if(min(current,previous) >=k){
//             cout<<"true";
//         }
//     }
// }

//ADJACENT INCREASING SUBARRAYS DETECTION(3350)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums = {15,19};
//     int k=0;
//     int n=nums.size();
//     int previous=0;
//     int current=1;//to find current increasing subarray
//     for(int i=1;i<n;i++){
//         if(nums[i]>nums[i-1]){
//             current++;
//         }else{//increasing subarray breaks
//             k = max(k, min(previous, current));
//             k = max(k, current / 2);
//             previous=current;//assign current value to previous
//             current=1;//resent current
//         }
//     }
//     k = max(k, min(previous, current));
//     k = max(k, current / 2);
//     cout<<k;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums={1,2,2,3,3,4};
//     int k=2;
//     sort(nums.begin(),nums.end());
//     int res=0;
//     int occupy=INT_MIN;
//     for(int num:nums){
//         if(occupy<num+k){
//             occupy=max(num-k,occupy+1);
//             res++;
//         }
//     }
//     cout<<res;
// }

//Maximum Frequency of an Element After Performing Operations I (3346)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>  nums = {5,11,20,20};
//     int k = 5, numOperations = 1;
//     int maxEl = *max_element(begin(nums), end(nums)) + k;
//     vector<int> freq(maxEl + 1, 0);
//     for(int &num : nums) {
//         freq[num]++;
//     }
//     //cumulative sum of frequenceis
//     for(int i = 1; i <= maxEl; i++) {
//         freq[i] += freq[i-1];
//     }
//     int result = 0;
//     for(int target = 0; target <= maxEl; target++) {
//         if(freq[target] == 0)
//             continue;
//         int leftNum  = max(0, target-k); //l
//         int rightNum = min(maxEl, target+k); //r
//         int totalCount  = freq[rightNum] - (leftNum > 0 ? freq[leftNum-1] : 0);
//         int targetCount = freq[target] - (target > 0 ? freq[target-1] : 0);
//         int needConversion = totalCount - targetCount;
//         int maxPossibleFreq = targetCount + min(needConversion, numOperations);
//         result = max(result, maxPossibleFreq);
//     }
//     cout<<result;
// }

//NEXT GREATER NUMERICALLY BALANCED NUMBER (2048)
// #include <bits/stdc++.h>
// using namespace std;
// bool isBalanced(int n){
//     vector<int> frequency(10,0);
//     while(n > 0){
//         int digit = n % 10;
//         if(digit == 0) return false;
//         frequency[digit]++;
//         n /= 10;
//     }
//     for(int i = 1; i <= 9; i++){
//         if(frequency[i] > 0 && frequency[i] != i) return false;
//     }
//     return true;
// }
// int main(){
//     int n = 1;
//     n++;
//     while(true){
//         if(isBalanced(n)){
//             cout << n;
//             break;
//         }
//         n++;
//     }
// }

//CALCULATE MONEY IN LEETCODE BANK (1716)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n =4;
//     int result=0;
//     int qou=n/7;
//     int rem=n%7;
//     for(int i = 4; i<qou+4; i++){
//         result+=7*i;
//     }
//     result+=((rem*(rem+1))/2)+(qou*rem);
//     cout<<result;
// }

//NUMBER OF LASER BEAMS IN A BANK (2125)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<string> bank = {"011001","000000","010100","001000"};
//     vector<int> ones;
//     ones.reserve(bank.size()); //To avoid multiple allocations
//     int result = 0;
//     for (int i = 0; i < bank.size(); i++) {
//         int count = 0;
//         for (char c : bank[i]) {
//             if (c == '1') count++;
//         }
//         if (count > 0) ones.push_back(count); //To store only non-zero rows
//     }
//     for (int i = 1; i < ones.size(); i++) {
//         result += ones[i] * ones[i - 1];
//     }
//     cout<<result;
// }

//MAKE ARRAY ELEMENTS EQUAL TO ZERO (3354)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums={16,13,10,0,0,0,10,6,7,8,7};
//     int n=nums.size();
//     int result =0;
//     int curr = 0;
//     int total=0;//to find total
//     for (int x : nums){
//         if (x != 0) total += x; //to find total sum of non zero value in array nums
//     }    
//     for(int i = 0; i < n; i++) {
//         curr += nums[i]; //to find left sum
//         int leftsum  = curr;
//         int rightsum = total - leftsum;//rightsum is total - leftsum
//         if(nums[i] != 0){
//             continue;
//         }
//         if(leftsum == rightsum){//if left side Sum==right side Sum for curr
//             result += 2;
//         }    
//         if(abs(leftsum - rightsum) == 1){//if the difrrence between leftsum and rightsum is 1.
//             result += 1;//then it is also valid
//         }
//     }
//     cout<<result;
// }

//SMALLEST NUMBERS WITH ALL SET BITS (3370)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 514;
//     int limit=0;
//     for(int i=1;i<=10;i++){
//         if(n<pow(2,i)){
//             limit+=i;
//             break;
//         }
//     }
//     cout<<pow(2,limit)-1;
// }

//Minimum Number of Increments on Subarrays to Form a Target Array (1526)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> target={3,1,5,4,2};
//     int result=target[0];//as first element occur target[0] times{can be seen from examples}
//     for(int i=1;i<target.size();++i){
//         if(target[i]>target[i-1]){
//             result+=target[i]-target[i-1];
//         }
//     }
//     cout<<result;
// }

//THE TWO SNEAKY NUMBERS OF DIGITVILLE (3289)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums={7,1,5,4,3,4,6,0,9,5,8,2};
//     unordered_map<int,int> mp;
//     mp.reserve(nums.size());//to reserve space for optimization
//     for (int num : nums){
//         mp[num]++;
//     }
//     vector<int> result;
//     result.reserve(nums.size());
//     for (auto &[val, cnt] : mp){ //to find [value,count] pair
//         if (cnt == 2){
//             result.push_back(val);
//         }
//     }
//     for (int num : result){
//         cout<<num<<" ";
//     }
// }

//MINIMUM TIME TO MAKE ROPE COLORFUL (1578)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string colors = "aabaa";
//     vector<int> neededTime = {1,2,3,4,1};
//     int result=0;
//     int n=neededTime.size();
//     for (int i=1;i<n;i++){
//         if (colors[i]==colors[i-1]){
//             result+=min(neededTime[i],neededTime[i-1]);
//             //to keep max needed time if more than two consecutive same
//         }
//     }
//     cout<<result;
// }

//H INDEX (274)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> citations = {3,0,6,1,5};
//     int result=0;
//     int n=citations.size();
//     sort(citations.begin(),citations.end());
//     for(int i=0;i<n;i++){
//         int formula=n-i;
//         if(citations[i]>=formula){
//             result=formula;
//             break;
//         }
//     }
//     cout<<result;
//     return 0;
// }

//FIRST UNIQUE CHARACTER IN A STRING (387)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="loveleetcode";
//     int result=INT_MAX;
//     unordered_map<char,vector<int>> mpp;
//     for(int i=0;i<s.length();i++){
//         mpp[s[i]].push_back(i);//at s[i] value of map, push 'i' into array
//     }
//     for(auto &p:mpp){
//         if(p.second.size()==1){
//             result=min(result,p.second[0]);
//         }
//     }
//     if(result==INT_MAX) cout<<-1;
//     else cout<<result;
// }

//NIM GAME (274)
// You lose only when n is a multiple of 4,because whatever number (1, 2, or 3) you remove,
// your opponent can always remove enough to make the total removed = 4 each round.
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=3;
//     ifn%4 != 0){
//         cout<<"true";
//     }else cout<<"false";
// }

//FIZZ BUZZ GAME (274)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<string> result;
//     int n=4;
//     for(int i=1;i<=n;i++){
//         if(i%3==0 && i%5==0){
//             string s="FizzBuzz";
//             result.push_back(s);
//         }
//         else if(i%3==0){
//             string s="Fizz";
//             result.push_back(s);
//         }
//         else if(i%5==0){
//             string s="Buzz";
//             result.push_back(s);
//         }
//         else{
//             result.push_back(to_string(i));
//         }
//     }
//     for(auto &ch:result){
//         cout<<ch;
//     }
// }

//COUNT OPERATIONS TO OBTAIN ZERO (2169)
// #include <bits/stdc++.h>
// using namespace std;
// int find(int x,int y){
//     if(x==0 || y==0) return 0;
//     if(x>=y){
//         return 1+ find(x-y,y);
//     }else{
//         return 1+ find(x,y-x);
//     }
// }
// int main(){
//     int num1 = 2, num2 = 3;
//     cout<<find(num1,num2);
// }

//COUNT OPERATIONS TO OBTAIN ZERO (2169)
// #include <bits/stdc++.h>
// using namespace std;
// int solve(vector<pair<int,int>>&count,int m,int n,int index){
//     if((index>count.size()) || (m==0 && n==0)){
//         return 0;
//     }
//     int take=0;
//     if(count[index].first<=m && count[index].second<=n){
//         take=1+solve(count,m-count[index].first,n-count[index].second,index+1);
//     }
//     int nottake=solve(count,m,n,index+1);
//     return max(take, nottake);
// }
// int main(){
//     vector<string> strs = {"10","0001","111001","1","0"};
//     int m = 5, n = 3;
//     vector<pair<int,int>> count;
//     int i=0;
//     for(auto str:strs){
//         int countZero=0,countOne=0;
//         for(char s:str){
//             if(s == '1'){
//                 countOne++;
//             }else if(s == '0'){
//                 countZero++;
//             }
//         }
//         count[i++]={countZero,countOne};
//     }
//     cout<<solve(count,m,n,0);
// }

//Maximum Number of Operations to Move Ones to the End (3228) (USING GREEDY)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "1001101";
//     int ans=0;
//     int countOnes=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='1'){
//             countOnes++;
//         }else if(s[i+1]=='1' || i+1==s.length()){
//             ans+=countOnes;
//         }
//     }
//     cout<<ans;
// }

//FLIP STRING TO MONOTONE INCREASE (926) (USING GREEDY)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "1001101";
//     int ans=0;
//     int countOnes=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='1'){
//             countOnes++;
//         }else if(s[i+1]=='1' || i+1==s.length()){
//             ans+=countOnes;
//         }
//     }
//     cout<<ans;
// }

//INCREMENT SUBMATRICES BY ONE (2536)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=3;
//     vector<vector<int>>queries = {{1,1,2,2},{0,0,1,1}};
//     vector<vector<int>> mat(n,vector<int>(n,0));//mat matrix to store result
//     for(auto &q:queries){
//         int row1,col1,row2,col2;
//         row1=q[0];
//         col1=q[1];
//         row2=q[2];
//         col2=q[3];
//         for(int i=row1;i<row2;i++){//Using difference of array technique for 2D
//             mat[i][col1]+=1;
//             if(col2+1<n){
//                 mat[i][col2+1]-=1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){//i for row
//         for(int j=1;j<n;j++){// j for column
//             mat[i][j]+=mat[i][j-1];//cummalative sum
//         }
//     }
// }

//
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int target=7;
//     vector<int> candidates = {2,3,6,7};
//     vector<vector<int>> answer;
//     int n=candidates.size();
//     int set=0;
//     for(int i=n-1;i>=0;i--){
//         if(candidates[i]==target){
//             answer.push_back(target);
//         }
//     }
// }

//GREATEST SUM DIVISIBLE BY THREE (1262)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>nums={3,6,5,1,8};
//     vector<int> dp(3);
//     // dp[0] = best sum whose remainder is 0
//     // dp[1] = best sum whose remainder is 1
//     // dp[2] = best sum whose remainder is 2
//     for (const int num : nums){
//         for (const int sum : vector<int>(dp)){
//             //For each sum find sum + num and update dp[rem] to be the best maximum.
//             dp[(sum + num) % 3] = max(dp[(sum + num) % 3], sum + num);
//             //(sum+num)%3 gives us remainder for each element of nums
//         }
//     }
//     cout<<dp[0];
// }

//SMALLEST INTEGER DIVISIBLE BY K (1015)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int k=17;
//     int res=0;
//     for(int i=1;i<=k;i++){
//         res=(res*10 + 1) % k;//modulo k(%k) here only so that,size of res dont go so high above computation
//         if(res==0){
//             cout<<i;
//         }
//     }
//     if(k%2==0 || k%5==0) return -1;
//     return -1;
// }

//MAKE SUM DIVISIBLE BY P (1590)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums={3,1,4,2}; 
//     int p = 6,sum=0;
//     for(int &val:nums){
//         sum+=val;
//     }
//     int wanted=sum%p;
//     if(wanted==0) cout<<"0";
//     unordered_map<int,int> mp;
//     //map stores Occurrence of modulo remainder.
//     mp[0]=-1;//base condition { 0:-1 }
//     int res=nums.size();
//     long long prefix=0;
//     for(int i=0;i<nums.size();i++){
//         prefix=(prefix+nums[i])%p;
//         int findPair=(prefix - wanted +p)%p;
//         if(mp.count(findPair)){
//             res=min(res,i-mp[findPair]);
//         }
//         mp[prefix]=i;
//     }
//     return res == nums.size() ? -1 : res;
// }

//COUNT COLLISIONS ON A ROAD (2211)
//T.C = O(n); S.C = O(1)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string directions = "LLRLRSLLRR";
//     int res=0;
//     int n=directions.length();
//     int i=0;//left boundary
//     int j=n-1;//right boundary
//     //we need to remove head(if L) and trails(if R) as they are not going to create any difference
//     while(i<n && directions[i]=='L'){
//         i++;
//     }
//     while(j>=0 && directions[j]=='R'){
//         j--;
//     }
//     while(i<=j){
//         if(directions[i]!='S'){
//         //we dont add one into result, when S appears as its collison is counted as R or L
//             res++;
//         }
//         i++;
//     }
//     cout<<res;
// }

//COUNT SPECIAL TRIPLETS (3583)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int Mod=1e9+7;
//     vector<int> nums = {8,4,2,8,4};
// //idea is to select each element and check if its right and left side has twice of it
//     int count=0;
//     unordered_map<int,int>rightSide,leftSide;
//     for(int &val:nums){
//         rightSide[val]++;
//         //initially have only rightSide Map
//         //leftSide map increases one by one and so right Side decreases one by one
//     }
//     for(int num:nums){
//         rightSide[num]--;//reduce frequencyof num by 1
//         int left=leftSide[num*2];//value/frequency of num*2 element in left map
//         int right=rightSide[num*2];//value/frequency of num*2 element in right map
//         leftSide[num]++;//increase frequency of num by 1
//         count=(count+(1LL*right*left))%Mod;
//     }
//     cout<<count;
// }

//Count the Number of Computer Unlocking Permutations (3577)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int Mod=1e9+7;
//     vector<int> complexity = {3,3,3,4,4,4};
//     long long count=1;
//     for(int i=1;i<complexity.size();i++){//zero'th elemenmt will be there so we can skip
//         if(complexity[i]<=complexity[0]){//condition can be noticed from example 1
//             return 0;
//         }
//         count=(count*i)%Mod;//function to find factorial
//     }
//     cout<<count;
// }

//COUNT COVERED BUILDINGS (3531)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int  n = 3;
//     int count=0;
//     vector<vector<int>> buildings = {{1,2},{2,2},{3,2},{2,1},{2,3}};
//     unordered_map<int, set<int>> rows;//store rows
//     unordered_map<int, set<int>> cols;//store cols
//     for (auto& b : buildings) {
//         rows[b[1]].insert(b[0]); // row y → x positions
//         cols[b[0]].insert(b[1]); // column x → y positions
//     }
//     for (auto& b : buildings) {
//         int x = b[0], y = b[1];
//         auto& row = rows[y];
//         auto& col = cols[x];
//         bool left  = *row.begin() < x;
//         bool right = *row.rbegin() > x;
//         bool below = *col.begin() < y;
//         bool above = *col.rbegin() > y;
//         if(left && right && above && below){//if all 4 conditions are true
//             count++;
//         }
//     }
//     cout<<count;
// }

//COUPON CODE VALIDATOR (3606)
// #include <bits/stdc++.h>
// using namespace std;
// bool checkLine(string &businessLine){//to ckech valid businessLine
//     return businessLine=="electronics"||
//     businessLine=="grocery"||
//     businessLine=="pharmacy"||
//     businessLine=="restaurant";
// }
// bool checkCode(string &code) {//to ckeck sytactic properties of code
//         for(char &ch : code) {
//             if(!isalnum(ch) && ch != '_') {//we traverse code
//                 return false;
//             }
//         }
//         if(code.empty()){
//             return false;
//         }
//         return true;
//     }
// int main(){
//     vector<string> code = {"SAVE20","","PHARMA5","SAVE@20"};
//     vector<string> businessLine = {"restaurant","grocery","pharmacy","restaurant"};
//     vector<bool> isActive = {true,true,true,true};
//     vector<string> result;
//     for(int i=0;i<code.size();i++){
//         if(isActive[i] && checkCode(code[i]) && checkLine(businessLine[i])){//if conditions met then push to result
//             result.push_back(code[i]);
//         }
//     }
//     sort(result.begin(),result.end());
// }

//Number of Ways to Divide a Long Corridor (2147)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int Mod=1e9+7;
//     string corridor = "PPSPSP";
//     int countSeat=0;
//     int countPlant=0;
//     long long total=1;
//     for(char &c:corridor){
//         if(c=='S'){
//             countSeat++;
//             if(countSeat > 2 && countSeat % 2 == 1) {
//                 total = (total * (countPlant + 1)) % Mod;
//                 countPlant = 0;
//             }
//         }else if(countSeat>=2 && countSeat%2==0){
//             countPlant++;
//         }
//     }
//     //increemnt plants only after 2 seats have occured
//     //minimum condition because if 2 seats not occured then no point of counting plants
//     if(total%2==0){
//          cout<<total;
//     }else return 0;
// }

//NUMBER OF SMOOTH DESCENT PERIODS OF A STOCK (2110)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> prices = {3,2,1,4};
//     int n=prices.size();
//     long long count=1;
//     int result=1;
//     for(int i=1;i<n;i++){
//         if(prices[i-1]-prices[i]==1){//condition for descent
//             count++;
//         }else{
//             count=1;
//         }
//         result+=count;
//     }
//     cout<<result;
// }

//DELETE COLUMN TO MAKE SORTED
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<string> strs = {"xc","yb","za"};
//     int n=strs.size();
//     int m=strs[0].size();
//     int count=0;
//     for(int i=0;i<m;i++){//to iterate through each word
//         for(int j=1;j<n;j++){//to iterate through vector
//             if(strs[j][i] >= strs[j-1][i]){
//                 count=0;
//             }
//             if(strs[j][i] < strs[j-1][i]){
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout<<count;
// }
