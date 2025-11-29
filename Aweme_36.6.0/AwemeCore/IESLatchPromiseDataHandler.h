@interface IESLatchPromiseDataHandler : NSObject

- (id)generateNodesWithDict:(id)a0;
- (id)generateUpdatedDict:(id)a0 withNode:(id)a1;
- (id)generatePromiseResultWithNode:(id)a0;
- (id)p_generateNodesWithDict:(id)a0 pathArr:(id)a1;
- (id)p_generateDictForNode:(id)a0 withPaths:(id)a1 value:(id)a2;
- (id)p_generateUpdatedDict:(id)a0 withNode:(id)a1 paths:(id)a2 value:(id)a3;

@end
