#include <iostream>
#include <queue>

#include "graph.h"

Graph::Graph(int vertices)
    : size(vertices), vertexConnections(new std::list<int>[vertices]), visited(new bool[vertices]) {}

Graph::~Graph()
{
  delete[] vertexConnections;
  delete[] visited;
}

void Graph::inputGraph()
{
  int firstVertex, secondVertex;

  while (std::cin >> firstVertex >> secondVertex)
  {
    vertexConnections[firstVertex].push_back(secondVertex);
    vertexConnections[secondVertex].push_back(firstVertex);
  }
}

void Graph::breadthFirstSearch(int withoutFirstVertex, int withoutSecondVertex)
{
  for (auto i = 0; i < size; ++i)
  {
    visited[i] = 0;
  }

  int startVertex = 0;
  int visitedCount = 1; // startVertex

  if (withoutFirstVertex == startVertex || withoutSecondVertex == startVertex)
  {
    startVertex = 1;
  }

  if (withoutFirstVertex == startVertex || withoutSecondVertex == startVertex)
  {
    startVertex = 2;
  }

  visited[withoutFirstVertex] = 1;
  visited[withoutSecondVertex] = 1;
  visited[startVertex] = 1;

  std::list<int> queueOfVisitedVertices;
  queueOfVisitedVertices.push_back(startVertex);

  while (!queueOfVisitedVertices.empty())
  {
    int currentVertex = queueOfVisitedVertices.front();
    queueOfVisitedVertices.pop_front();

    for (auto neighbour : vertexConnections[currentVertex])
    {
      if (!visited[neighbour])
      {
        visited[neighbour] = 1;
        queueOfVisitedVertices.push_back(neighbour);
        ++visitedCount;
      }
    }
  }

  if (visitedCount != size - 2)
  { // print wide bridge
    std::cout << withoutFirstVertex << " " << withoutSecondVertex << "\n";
  }
}

void Graph::findWideBridges()
{
  for (int i = 0; i < size - 1; ++i)
  { // first vertex
    for (int j = i + 1; j < size; ++j)
    { // second vertex
      for (auto it = vertexConnections[i].begin(); it != vertexConnections[i].end(); ++it)
      {
        if (*it == j)
        {
          breadthFirstSearch(i, j);
        }
      }
    }
  }
}