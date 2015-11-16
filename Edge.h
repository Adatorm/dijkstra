/*
 * Edge.h
 *
 *  Created on: 12 Kas 2015
 *      Author: Guner
 */

#ifndef EDGE_H_
#define EDGE_H_

class Edge {
public:
	/*constructor*/
	Edge(int s, int d, unsigned int w) :
			source(s), dest(d), weight(w) {
	}

	/*return weight of edge*/
	inline unsigned int getWeight() {
		return weight;
	}

	/*set weight*/
	void setWeight(unsigned int value) {
		weight = value;
	}

	/*return source vertex*/
	int getSource() {
		return source;
	}

	/*return destination vertex*/
	int getDest() {
		return dest;
	}

	/*set source vertex*/
	void setSource(int v1) {
		source = v1;
	}

	/*set destination vertex*/
	void setDest(int v2) {
		dest = v2;
	}

	~Edge() {
	}
	// destructor
private:
	int source;                 // a vertex on one side of the edge
	int dest;                // a vertex on the other side of the edge
	unsigned int weight;              // the value of the edge ( or its weight )

};

#endif /* EDGE_H_ */
