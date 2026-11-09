#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
	int data;
	Node*left;
	Node*right;
};
class BST{
	public :
		Node*root;
	BST(){
		root=NULL;
	}
	Node*createNode(int item){
		Node* newnode=new Node;
		newnode->data=item;
		newnode->right=NULL;
		newnode->left=NULL;
		return newnode;	
		}
		Node* insert(Node*current,int item){
			if(current==NULL){
				current=createNode(item);
				cout<<"inserted"<<" "<<item<<endl;
				return current;}
			if(item<current->data){
				current->left=insert(current->left,item);
			}
			else if(item>current->data){
				current ->right=insert(current->right,item);
			} 
			else{
				cout<<"duplicate item"<<item<<"not inserted.\n";
			}
			return current;
			
		}
		void insertnode(int item){
			root=insert(root,item);
		}
		void inorder(Node*current){
			if(current!=NULL){
				inorder(current->left);
				cout<<current<<" "<<current->data<<endl;
				inorder(current->right);				
			}
		}
		void preorder(Node*current){
			if(current!=NULL){
				cout<<current<<" "<<current->data<<endl;
				preorder(current->left);
				preorder(current->right);				
			}
		}
		int height(Node*node){
		if(node==NULL){
			return 0;
		}
		int lh=height(node->left);
		int rh=height(node->right);
		return(lh>rh ? lh:rh)+1;
	}
	void display(){
			cout<<"\n preorder traversal:";
			preorder(root);
			cout<<endl;
		}
	void printlevel(Node*curr,int level){
		if(curr==NULL){
			return;
		}
		else{ 
		if(level==1){
			cout<<curr->data<<endl;
		}
		else if(level>1){
			printlevel(curr->left,level-1);
			printlevel(curr->right,level-1);
		}
		}
		
	}	
	void levelorder(Node*curr){
		 int h=height(curr);
		 cout<<"level of BST are"<<endl;
		 for(int i=1;i<=h;i++){
		 	printlevel(curr,i);
		 }
	}
	void lo1(){
	levelorder(root);	
	}
	void PL2(Node*curr){
		if(curr==NULL){return;
		}
		else{
		queue<Node*>q;
		q.push(curr);
		while(!q.empty()){
			Node*temp=q.front();
			q.pop();
			cout<<temp->data<<endl;
			if(temp->left!=NULL){
			q.push(temp->left);}
			if(temp->right!=NULL){
			q.push(temp->right);}
		}
	}
}
void lo2(){
	PL2(root);
}
	int min_(Node*curr){
		if(curr==NULL){ return -1;
		}
		Node*pred=curr->left;
		while(pred->left!=NULL){
			pred=pred->left;
		}
		return pred->data;
	}
	int  max_(Node*curr){
		if(curr==NULL){
			return -1;
		}
		Node*pred=curr->right;
		while(pred->right!=NULL){
			pred=pred->right;
		}
		return pred->data;
	}
	void range(){
		cout<<"range of BST"<<" "<<min_(root)<<" "<<"to"<<" "<<max_(root)<<endl;
	}
	
		
	};
		
		
int main(){
	BST tree;
tree.insertnode(50);
tree.insertnode(30);
tree.insertnode(70);
tree.insertnode(20);
tree.insertnode(40);
tree.insertnode(60);
tree.insertnode(80);
cout<<"initial BST is: "<<endl;
tree.display();		
tree.lo1();
cout<<endl;
tree.range();
tree.lo2();

}
		
		
		
			
