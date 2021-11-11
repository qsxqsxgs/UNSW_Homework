// Graph ADT interface ... COMP9024 21T3
#include <stdbool.h>

typedef struct GraphRep  *Graph;
typedef struct VertexRep *Vertex;

// edges are pairs of vertices (end-points)
typedef struct Edge {
   Vertex v;
   Vertex w;
} Edge;

Graph  newGraph(int);
Vertex newVertex(int, char);
int    numOfVertices(Graph);
void   insertEdge(Graph, Edge);
void   removeEdge(Graph, Edge);
bool   adjacent(Graph, Vertex, Vertex);
void   showGraph(Graph);
void   freeGraph(Graph);