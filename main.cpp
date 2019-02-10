#include <iostream>

#include "graph.h"

int main()
{
  int graphSize;
  std::cin >> graphSize;

  Graph myGraph(graphSize);
  myGraph.inputGraph();
  myGraph.findWideBridges();

  return 0;
}