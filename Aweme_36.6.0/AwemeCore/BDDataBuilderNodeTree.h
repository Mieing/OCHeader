@class BDDataBuilderBaseNode;

@interface BDDataBuilderNodeTree : NSObject

@property (retain, nonatomic) BDDataBuilderBaseNode *rootNode;

- (id)initWithRootNode:(id)a0;
- (void)depthFirstTraverseStopAt:(id)a0 error:(id *)a1;
- (void)depthFirstTraverseNode:(id)a0 error:(id *)a1 didForwardBlock:(id /* block */)a2 stopBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
