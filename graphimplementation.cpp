#include<iostream>
#include<vector>

using namespace std;

class Graph{
    private:
    int V;
    vector<vector<int>>adjList;
    public:
    Graph(int vertices){
        V = vertices;
        adjList.resize(V);
    }
    
    void addEdge(int src,int dest){
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }
    
    void addVertex(){
        V++;
        adjList.push_back(vector<int>());
    }
    
    void printGraph(){
        for(int v=0;v<V;v++){
            cout<<"Adjacency list of vertex"<<v<<":";
            for(const int&neighbor:adjList[v]){
                cout<<neighbor<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(5);//create graph with 5 vertices
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.addVertex();
    g.addEdge(2,5);
    g.printGraph();
    return 0;
}
