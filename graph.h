#pragma once

#include <list>

class Graph
{
private:
  int size;
  std::list<int> *vertexConnections;
  bool *visited;

public:
  Graph(int vertices);
  ~Graph();

  void inputGraph();
  void findWideBridges();

private:
  void breadthFirstSearch(int withoutFirstVertex, int withoutSecondVertex);
};