@interface ACCDirectedGraph : ACCGraph

- (void)connectNodeA:(id)a0 toNodeB:(id)a1;
- (id)zeroEntryNodes;
- (id)edgesStartsFromNode:(id)a0;
- (void)removeEdge:(id)a0;
- (id)topologicalSort;

@end
