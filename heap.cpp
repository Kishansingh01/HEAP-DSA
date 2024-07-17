// HEAP=> Heap is a complete binary tree where the children(value) are smaller than the parents.

// AVL=> AVL is a self balancing binary search tree where the height of the tree is always balanced.

// If i have to insert and delete i have to traverse from the top element which is root .



#include<iostream>
using namespace std;
class Heap{
    public:
        vector<int>a;
        int size=0;

        int parent(int x){
            return (x-1)/2;}

        int leftchild(int x){
            return 2*x+1;}

        int rightchild(int x){
            return 2*x+2;}

        void push(int val){
            int index=size;
            cout<<"Pushing it at index = "<< index << endl;
            a.push_back(val);
            size++;
            while(index!=0){
                if(a[index]>a[parent(index)]){
                    swap(a[index],a[parent(index)]);
                    index=parent(index);
                }
                else{
                    break;
                }}}

            int top(){
                if(size==0){
                    return INT_MIN;
                }
                return a[0];
            }
        int pop(){
            if(size==0){
                return INT_MIN;
            }
            a[0]=a[size-1];
            a.pop_back();
            size--;
        int index=0;
        while(true){
            int current=a[index];
            int leftchild=leftchild(index)<size ? a[leftchild(index)]:INT_MIN;
            int rightchild=rightchild(index)<size ? a[rightchild(index)]:INT_MIN;

            int maximum=max({current,leftchild,rightchild});
            if(maximum==current){
                break;
            }
            if(maximum==leftchild){
                cout<<"Swaping it with leftchild ="<<leftchild(index)<<endl;
                swap(a[index],a[leftchild(index)]);
                index=leftchild(index);
            }
            if(maximum==rightchild){
                cout<<"Swaping it with rightchild ="<<rightchild(index)<<endl;
                swap(a[ind], a[rightChild(ind)]);
					ind = rightChild(ind);
            	bool isEmpty(){
			return size()==0; //agar direct variable denge to dikkat hogi aur agar hmne size me kuch complex logic diya ho to yaha bhi vo dena padega 
			 				  // usse better hai ki hm function hi call kr le.
		}
		
		int size(){
			return sz;
		}
		
		void display(){
			for(int i=0;i<sz;i++){
				cout << a[i] << " -- ";
			}
			cout << endl;
		}
}heap;

signed main()
{
    heap.push(100);
    heap.display();
    heap.push(20);
    heap.display();
    heap.push(35);
    heap.display();
    heap.push(50);
    heap.display();
    heap.push(200);
    heap.display();
}}
			
        
        

