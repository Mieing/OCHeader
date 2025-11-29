@interface AWESearchCachalotUtilService : NSObject

+ (id)createDefaultInsertCachalotNextOperationConfigWithInsertNodes:(id)a0 anchorNode:(id)a1;
+ (id)createDefaultDeleteCachalotNextOperationConfigWithDeleteNodes:(id)a0 anchorNode:(id)a1;
+ (id)createDefaultUpdateHeightCachalotNextOperationConfigWithUpdateNodes:(id)a0 anchorNode:(id)a1;
+ (id)createDefaultUpdateRenderCachalotNextOperationConfigWithUpdateNodes:(id)a0 anchorNode:(id)a1;
+ (id)findTargetNodeFromCachalotView:(id /* block */)a0 onlyLeafNode:(BOOL)a1 cachalotView:(id)a2;
+ (id)findTargetNodesFromCachalotView:(id /* block */)a0 onlyLeafNode:(BOOL)a1 cachalotView:(id)a2;
+ (id)createDefaultCachalotStructUpdateTransactionWithTransaction:(id)a0 cachalotView:(id)a1 completionBlock:(id /* block */)a2;
+ (id)performBatchUpdates:(id)a0 batch:(id)a1;
+ (id)createDefaultCachalotNextTransactionConfigWithOperations:(id)a0 root:(id)a1;
+ (id)findTargetNodeFromCachalotView:(id /* block */)a0 cachalotView:(id)a1;
+ (id)findTargetNodesFromCachalotView:(id /* block */)a0 cachalotView:(id)a1;
+ (id)createDefaultCachalotStructUpdateTransactionAndCommitWithTransaction:(id)a0 cachalotView:(id)a1 completionBlock:(id /* block */)a2;
+ (id)performBatchUpdates:(id)a0 operations:(id /* block */)a1;

@end
