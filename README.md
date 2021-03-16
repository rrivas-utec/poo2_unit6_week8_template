# Tarea #7: Estructura de datos fundamentales - Arboles y Grafos

Problemas del curso de Programación Orientada a Objetos 2 - CS1103

## Problema #1 - Ordenamiento Heap
Basado en la estructura [**`heap`**](https://repl.it/@RubenDemetrioDemetrio/poo22021-0heap#main.cpp), crear el functor **`heap_sort`** que reciba como parametro un contenedor y retorne un contenedor del mismo tipo ordenado en forma ascendente o descendente.

**Casos de uso**
```cpp
    vector<int> vec{ 10, 4, 1, 32, 5, 7, 11 };
// Caso de uso #1
    heap_sort hs;
    auto r1 = hs.get(vec);
    for (const auto& item : r1)
        cout << item << " ";
    cout << endl;
    // Caso de uso #2
    auto r2 = hs.get<list>({ 20, 30 ,40 , 50, 100, 2, 2 });
    for (const auto& item : r2)
        cout << item << " ";
    cout << endl;
    // Caso de uso #3
    auto r3 = hs.get<deque, greater>({ 20, 30 ,40 , 50, 100, 2, 2 });
    for (const auto& item : r3)
        cout << item << " ";
    cout << endl;
```
## Problema #2 - Ordenamiento Binario - Binary Tree
Basado en la estructura [**`binary tree`**](https://repl.it/@RubenDemetrioDemetrio/poo22021-0binarytree#main.cpp), crear la clase **`binary_search`** que reciba al momento de construir un objeto un parametro del tipo vector que contenga la información, que permita agregar nuevos valores usando el método `push`, que pueda recorrer los valores usando los métodos `bfs` y `dfs` y que permita ubicar un valor utilizando el operador `()` el cual retorne un pair<T, bool> donde T es el tipo de valor de almacenado y bool retorne si fue o no encontrado.
**Casos de uso**
```cpp
    vector<int> vec {1, 4, 5, 6, 11, 2, 3, 7};
    utec::binary_search<int> bs (vec);
    bs.bfs([](auto item){ cout << item << " "; });
    cout << endl;
    bs.dfs([](auto item){ cout << item << " "; });
    cout << endl;
    auto result = bs(4);  // Retorna el puntero inteligente al nodo
    if (result)
        cout << result->data << endl;
    bs.push(8);
    bs.bfs([](auto item){ cout << item << " "; });
    cout << endl;
```
## Problema #3 - Diametro de un Arbol - Tree
Utilizando el arbol binario (**`binary_tree`**) desarrollado en clase, desarrollar el método `diametro` que permita calcular el diámetro de un árbol (es la distancia basada en vertice mas larga entre 2 hojas de un arbol).

**Casos de uso**
```cpp
    // Caso de uso 1
    binary_tree<int> a(10);
    auto node = a.add_left(a.get_root(), 10);
    a.add_right(node, 20);
    a.add_left(node, 30);
    node = a.add_right(a.get_root(), 40);
    a.add_right(node, 50);
    a.add_left(node, 60);
    // Calcular Diametro
    cout << a.diametro() << endl;
    // Caso de uso 2
    binary_tree<int> a2(1);
    // Izquierda
    auto left_branch = a2.add_left(a2.get_root(), 2);
    left_branch = a2.add_left(left_branch, 3);
    left_branch = a2.add_left(left_branch, 4);
    left_branch = a2.add_left(left_branch, 5);
    left_branch = a2.add_left(left_branch, 6);
    // Derecha
    auto right_branch = a2.add_right(a2.get_root(), 7);
    right_branch = a2.add_right(right_branch, 8);
    right_branch = a2.add_right(right_branch, 9);
    right_branch = a2.add_right(right_branch, 10);
    right_branch = a2.add_right(right_branch, 11);
    // Calcular Diametro
    cout << a2.diametro() << endl;
```

## Problema #4 - Hermanos - Tree
Utilizando el arbol binario (**`binary_tree`**) desarrollado en clase, desarrollar el método `are_sibling(node a, node b)` que confirme si 2 nodos son hermanos (se encuentran en un mismo nivel).

**Casos de uso**
```cpp
    // Caso de uso #1
    binary_tree<int> a(1);
    // Izquierda
    auto left_branch = a.add_left(a.get_root(), 2);
    left_branch = a.add_left(left_branch, 3);
    left_branch = a.add_left(left_branch, 4);
    left_branch = a.add_left(left_branch, 5);
    left_branch = a.add_left(left_branch, 6);
    // Derecha
    auto right_branch = a.add_right(a.get_root(), 7);
    right_branch = a.add_right(right_branch, 8);
    right_branch = a.add_right(right_branch, 9);
    right_branch = a.add_right(right_branch, 10);
    right_branch = a.add_right(right_branch, 11);
    auto na = a.add_right(right_branch, 12);
    auto nb = a.add_left(right_branch, 14);
    // Calcular Diametro
    cout << boolalpha << a.are_sibling(left_branch, right_branch) << endl;
    cout << boolalpha << a.are_sibling(na, nb) << endl;
```
## Problema #5 - Conectado - graph
Utilizando el grafo no dirigido  (**`grafo_t`**) desarrollado en clase, desarrollar el método `is_connected` que determine si el grafo es conectado.
**NOTA**: Se sugiere implementar el método DFS.

**Casos de uso**
```cpp
    // Caso de uso #1
    graph_t g;
    // Vertices
    g.add_vertex("A");
    g.add_vertex("B");
    g.add_vertex("C");
    g.add_vertex("D");
    g.add_vertex("E");
    // Edges
    g.add_edge("A", "B", 10);
    g.add_edge("B", "E", 4);
    g.add_edge("B", "C", 7);
    g.add_edge("E", "C", 5);
    g.add_edge("E", "D", 8);
    // Verificar si esta conectado
    cout << boolalpha << g.is_connected() << endl;
    // Caso de uso #2
    graph_t g2;
    // Vertices
    g2.add_vertex("A");
    g2.add_vertex("B");
    g2.add_vertex("C");
    // Edges
    g2.add_edge("A", "B", 10);
    // Verificar si esta conectado
    cout << boolalpha << g2.is_connected() << endl;
```

## Problema #6 - Árbol Expandido Máximo - graph (optional)
Utilizando el grafo no dirigido  (**`grafo_t`**) desarrollado en clase, crear los métodos Kruskal y Prim en reversa (`kruskal_max`, `prim_max`) de modo que permitan ubicar el Árbol Expandido Máximo.

**Casos de uso**
```cpp
    // Caso de uso #1
    graph_t g;
    // Vertices
    g.add_vertex("A");
    g.add_vertex("B");
    g.add_vertex("C");
    g.add_vertex("D");
    g.add_vertex("E");
    // Edges
    g.add_edge("A", "B", 10);
    g.add_edge("B", "E", 4);
    g.add_edge("B", "C", 7);
    g.add_edge("E", "C", 5);
    g.add_edge("E", "D", 8);
    g.add_edge("C", "D", 2);
    g.add_edge("A", "D", 1);
    // Arbol Expandido Maximo
    for (auto& [a, b, w] : g.kruskal_max())
        cout << a << " " << b << " " << w << endl;
    cout << endl << endl;
    for (auto& [a, b, w] : g.prim_max())
        cout << a << " " << b << " " << w << endl;
```