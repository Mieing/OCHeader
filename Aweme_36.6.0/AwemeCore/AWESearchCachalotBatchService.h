@class NSMutableArray;

@interface AWESearchCachalotBatchService : NSObject

@property (nonatomic) BOOL animatedFlush;
@property (copy, nonatomic) id /* block */ didCreateNextTransactionBlock;
@property (copy, nonatomic) id /* block */ didCreateStructUpdateBlock;
@property (copy, nonatomic) id /* block */ didCompletionBlock;
@property (copy, nonatomic) id /* block */ didCompletionCachalotBlock;
@property (retain, nonatomic) NSMutableArray *operations;
@property (nonatomic) BOOL shouldCommit;
@property (nonatomic) BOOL isOffScreen;

- (void)deleteNodes:(id)a0 anchorNode:(id)a1;
- (void)deleteNodes:(id)a0;
- (void)insertNodes:(id)a0 atAnchor:(id)a1;
- (void)insertNodes:(id)a0 afterAnchor:(id)a1;
- (void)insertNodes:(id)a0 beforeAnchor:(id)a1;
- (void)insertNodes:(id)a0 inAnchor:(id)a1;
- (void)insertNode:(id)a0 inAnchor:(id)a1;
- (void)insertNode:(id)a0 atAnchor:(id)a1;
- (void)insertNodes:(id)a0 anchor:(id)a1 atIndex:(long long)a2;
- (void)insertNode:(id)a0 anchor:(id)a1 atIndex:(long long)a2;
- (void)updateHeightForNodes:(id)a0 anchorNode:(id)a1;
- (void)updateHeightForNode:(id)a0 anchorNode:(id)a1;
- (void)updateRenderForNodes:(id)a0 anchorNode:(id)a1;
- (void)updateRenderForNode:(id)a0 anchorNode:(id)a1;
- (void)replaceOldNode:(id)a0 newNode:(id)a1;
- (void)didCompletionTransactionResult:(id /* block */)a0;
- (void)flushAnimated:(BOOL)a0;
- (void)insertNode:(id)a0 beforeAnchor:(id)a1;
- (void)insertNode:(id)a0 afterAnchor:(id)a1;
- (void)addOperations:(id)a0;
- (void)didCreateCachalotStructUpdateConfig:(id /* block */)a0;
- (void)didCompletionTransaction:(id /* block */)a0;
- (void)didCreateCachalotNextTransactionConfig:(id /* block */)a0;
- (void)execSuperBatch:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (id)init;
- (void)commit:(BOOL)a0;
- (void)offScreen:(BOOL)a0;
- (void)deleteNode:(id)a0;

@end
