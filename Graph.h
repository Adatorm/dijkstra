/*
 * Graph.h
 *
 *  Created on: 12 Kas 2015
 *      Author: Guner
 */

#ifndef GRAPH_H_
#define GRAPH_H_
#include "Edge.h"
#include <vector>
using namespace std;
class Graph {
public:
	Graph(bool direct, int num);/*constructor*/
	/** Return the number of vertices.
	 @return The number of vertices
	 */
	inline int getNumV() {
		return numV;
	}

	/** Determine whether this is a directed graph.
	 @return true if this is a directed graph
	 */
	inline bool isDirected() {
		return directed;
	}

	/** Insert a new edge into the graph.
	 @param edge The new edge
	 */
	void insert(Edge edge);

	/** Determine whether an edge exists.
	 @param source The source vertex
	 @param dest The destination vertex
	 @return true if there is an edge from source to dest
	 */
	bool isEdge(int source, int dest);

	/** Get the edge between two vertices.
	 @param source The source vertex
	 @param dest The destination vertex
	 @return The Edge between these two vertices
	 or an Edge with a weight of
	 Double.POSITIVE_INFINITY if there is no edge
	 */
	Edge getEdge(int source, int dest);
private:
	int directed;
	int numV;
	vector<vector<Edge> > data;
};

#endif /* GRAPH_H_ */
