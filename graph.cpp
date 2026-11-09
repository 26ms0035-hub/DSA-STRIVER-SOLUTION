//graph implementation
#include<iostream>
using namespace std;
class Node{
	public :
		int vertex;
		Node* next;
};
// graph class
class graph {
	public:
		int V;// number of vertices
		Node**adj;
		// constructor
		graph(int vertices){
			V=vertices;
			adj=new Node*[V];
			for(int i=0;i<V;i++){
				adj[i]=NULL;
			}	
		}
		Node* createNode(int item){
			Node* newnode=new Node;
			newnode->next=NULL;
			newnode->vertex=item;
			return newnode;
		}
		void addedges(int u,int v){
			// insert v in adjacency list of u
			Node* newnode=createNode(v);
			newnode->next=adj[u];
			adj[u]=newnode;
			newnode=createNode(u);
			newnode->next=adj[v];
			adj[v]=newnode;
			cout<<"edges ("<<u<<","<<v<<")inserted"<<endl;
		}
		void displaygraph(){
			cout<<"\n adjacency list Representation:\n";
			for(int i=0;i<V;i++){
				cout<<i<<"->";
				Node*current =adj[i];
				while(current!=NULL){
					cout<<current->vertex<<" ->";
					current=current->next;
				}
				cout<<"NULL"<<endl;
			}
		}
};
int main(){
	int V,E;
	cout<<"enter number of vertices:";
	cin>>V;
	graph g(V);
	cout<<"enter number of edges:";
	cin>>E;
	cout<<"enter the edges(u,v):\n";
	for(int i=0;i<E;i++){
		int u,v;
		cin>>u>>v;
		g.addedges(u,v);
		
	}
	g.displaygraph();
	return 0;
	}
