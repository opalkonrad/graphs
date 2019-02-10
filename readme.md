# Wide bridges in graph

Program shows wide bridges. These are edges that when we delete them together with their vertices result in decompose of the graph.

## Running

### To compile

```
$ make
```

### To run program

Redirect the graph to the program (x is number of test).

```
$ ./project < graphs/test_x
```

# AISDI - projekt z algorytmów grafowych

*Mostem* w grafie spójnym nazywamy krawędź, której usunięcie powoduje jego rozspójnienie (powstały w wyniku usunięcia krawędzi graf jest niespójny). Na potrzeby niniejszego zadania, *mostem rozległym* w grafie spójnym będziemy nazywać taką krawędź, że usunięcię obu jej końców (wierzchołków) powoduje rozspójnienie grafu. Operacja usunięcia wierzchołka oznacza również usunięcie wszystkich krawędzi, których jest końcem.

Proszę napisać program, który:

1. Wczyta spójny graf nieskierowany ze standardowego wejścia.
2. Znajdzie i wyświetli na ekranie wszystkie mosty rozległe w tym grafie.

Przyjmujemy, że krawędzie grafu mogą być tylko jednokrotne, a wierzchołki nie mogą być połączone krawędzią same ze sobą. Graf pusty (bez wierzchołków) traktujemy jako spójny.

## Przykładowy sposób uruchomienia programu

    >./program < plik_z_opisem_grafu

## Format opisu grafu

W pierwszej linii znajduje się dodatnia liczba całkowita oznaczająca liczbę wszystkich wierzchołków w grafie. Poniżej, dla każdej krawędzi w grafie, znajduje się linia z dwoma nieujemnymi liczbami całkowitymi, oznaczającymi numery wierzchołków połączonych tą krawędzią. Numeracja wierzchołków zaczyna się od 0. Liczby w jednej linii oddzielone są znakiem spacji. Można założyć poprawność wczytywanego opisu.

## Wynik działania programu

Wynikiem działania programu powinno być wyświetlenie na ekranie wszystkich mostów rozległych. Każdy most rozległy (krawędź) powinien być wyświetlony w postaci odrębnej linii jak w opisie grafu (linia powinna zawierać numery końcowych wierzchołków krawędzi, oddzielone znakiem spacji). W przypadku, gdy w grafie nie ma mostów rozległych, program nie powinien niczego wyświetlać.