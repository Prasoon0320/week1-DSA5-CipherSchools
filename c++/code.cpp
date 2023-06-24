// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node * next;
//     Node(int d){
//         this->data=d;
//         this->next =NULL;
//     }
// };
// void insertAtHead(Node* &head,int d){
// Node* temp = new Node(d);
// temp->next = head;
// head = temp;
// }
// 
// void print(Node* &head){
//     Node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         cout<<temp->next<<endl;
//         temp=temp->next;
//     }
// }
// void insertAtTail(Node* &tail,int d){
//     Node * temp = new Node(d);
//     tail->next=temp;
//     tail=temp;
// }
// void insertAtMid(Node * &tail,Node * &head,int pos,int d){
//     Node * temp = head;
//     //inserting at head position
//     if(pos==1){
//         insertAtHead(head,d);
//         return;
//     }
//     //insert in mid
//     int cnt=1;
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     Node * insertNode = new Node(d);
//     insertNode->next=temp->next;
//     temp->next=insertNode;
//     //inserting at last position
//     if(temp->next==NULL){
//         insertAtTail(tail,d);
//         return;
//     }
// }
// void print(Node * &head){
//     Node * temp= head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         cout<<temp->next<<endl;
//         temp=temp->next;
//     }
// }
// int main(){
// Node *node1= new Node(10);

// Node * head = node1;
// Node * tail = node1;
// // insertAtHead(head,12);
// insertAtTail(tail,15);
// insertAtTail(tail,16);
// insertAtMid(tail,head,4,22);

// print(head);

// }
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* prev =NULL;
//         Node * next =NULL;
//     Node(int d){
//         this->data=d;
//         this->prev=NULL;
//         this->next=NULL;
//     }
// };
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         cout<<temp->next;
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node * node1 = new Node(10);
//     Node* head=node1;
//     print(head);
// }

// #include  <iostream>
// #include  <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1,s2;
//     getline(cin,s1);
//     getline(cin,s2);
//     int m=s2.length();
//     int n=s1.length();
//     int arr[26]={0};
    
//     for(int i=0;i<n;i++){
//         int z= s1[i]-'a';
        
//         if((arr[z]+1)>1){
//             continue;
//         }
//         arr[z]++;
//     }
//     for(int i=0;i<m;i++){
//         int y= s2[i]-'a';
        
//         if((arr[y]+1)1){
//             continue;
//         }
//         arr[y]++;
//     }
        
            
        
        
    // }
    // for(int i=0;i<m;i++){
    //     int y= s2[i]-'a';
    //     if((arr[y]++)>1){
    //         continue;
    //     }
    //     else{
    //         arr[y]++;
    //     }
        
    // }
  

//     int count=0;
//     for(int i=0;i<26;i++){
//         if(arr[i]==2){
//             count++;
//         }
//     }
//     if(count<2){
//         cout<<"h";
//     }
//     else if(count>2 && count<=5){
//         cout<<"i";
//     }
//     else{
//         cout<<"j";
//     }
   


// }
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
int countPairs(string s1, int n1, string s2, int n2)
{
 int freq1[26] = { 0 };
 int freq2[26] = { 0 };
 int i, count = 0;
for (i = 0; i < n1; i++)
        freq1[s1[i] - 'a']++;
 
for (i = 0; i < n2; i++)
    freq2[s2[i] - 'a']++;
 
for (i = 0; i < 26; i++)
    count += (min(freq1[i], freq2[i]));
 
return count;
}
 

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int n1 = s1.length(), n2 = s2.length();
    cout << countPairs(s1, n1, s2, n2);
 
    return 0;
}