/*
 * Graph.cpp
 *
 *  Created on: 12 Kas 2015
 *      Author: Guner
 */

#include "Graph.h"
#include "Edge.h"
Graph::Graph(bool direct = true, int num = 10) :
		directed(direct), numV(num) {
	vector<Edge> e;
	for (int i = 0; i < numV; ++i) {
		data.push_back(e);
	}
}

void Graph::insert(Edge edge) {
	data[edge.getSource()].push_back(edge);
	if (!directed) {
		data[edge.getDest()].push_back(
				Edge(edge.getDest(), edge.getSource(), edge.getWeight()));
	}

}

bool Graph::isEdge(int source, int dest) {
	if (source < 0) {
		return false;/*negative*/
	}
	for (unsigned int i = 0; i < data[source].size(); ++i) {
		if (data[source][i].getDest() == dest) {
			return true;
		}
	}
	return false;
}

Edge Graph::getEdge(int source, int dest) {
	for (unsigned int i = 0; i < data[source].size(); ++i) {
		if (data[source][i].getDest() == dest) {
			return data[source][i];
		}
	}
	return Edge(0, 0, 0);
}

