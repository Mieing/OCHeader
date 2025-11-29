@interface AWESearchAIGCCachalotUtilService : NSObject

+ (void)scrollToTarget:(id)a0 animated:(BOOL)a1 cachalotView:(id)a2 completion:(id /* block */)a3 lockAfter:(BOOL)a4;
+ (id)findTargetNodeFromNode:(id)a0 onlyLeafNode:(BOOL)a1 filter:(id /* block */)a2;
+ (id)findTargetNodesFromNode:(id)a0 onlyLeafNode:(BOOL)a1 filter:(id /* block */)a2;
+ (void)scrollToTarget:(id)a0 cachalotView:(id)a1;
+ (void)scrollToTarget:(id)a0 animated:(BOOL)a1 cachalotView:(id)a2;
+ (void)scrollToTarget:(id)a0 animated:(BOOL)a1 cachalotView:(id)a2 completion:(id /* block */)a3;
+ (id)findTargetNodeFromNode:(id)a0 filter:(id /* block */)a1;
+ (id)findTargetNodesFromNode:(id)a0 filter:(id /* block */)a1;

@end
