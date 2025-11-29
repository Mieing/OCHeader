@class CachalotLayoutModel, NSString, CachalotNextTransactionConfig, NSMutableArray, NSObject;
@protocol CachalotStructUpdateTransactionPrivateCommitDelegate, CachalotRenderPipelineComponentViewModel, CachalotStructUpdateTransactionCommitDelegate, OS_dispatch_queue;

@interface CachalotStructUpdateTransaction : NSObject

@property (nonatomic) BOOL sessionCommited;
@property (nonatomic) unsigned long long revertMode;
@property (retain, nonatomic) NSMutableArray *operations;
@property (nonatomic) BOOL hasShot;
@property (nonatomic) BOOL animateFlush;
@property (weak, nonatomic) id<CachalotStructUpdateTransactionPrivateCommitDelegate> commitDelegate;
@property (readonly, nonatomic) BOOL onlyUpdate;
@property (readonly, nonatomic) BOOL nextMode;
@property (retain, nonatomic) CachalotLayoutModel *pAnchor;
@property (retain, nonatomic) CachalotNextTransactionConfig *pConfig;
@property (nonatomic) BOOL nextMode;
@property (nonatomic) BOOL sessionMode;
@property (nonatomic) BOOL sessionCommited;
@property (nonatomic) BOOL hasShot;
@property (nonatomic) BOOL animateFlush;
@property (nonatomic) unsigned long long revertMode;
@property (copy, nonatomic) NSString *transactionName;
@property (retain, nonatomic) NSMutableArray *operations;
@property (weak, nonatomic) id<CachalotStructUpdateTransactionCommitDelegate> transactionDelegate;
@property (weak, nonatomic) id<CachalotStructUpdateTransactionPrivateCommitDelegate> commitDelegate;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) id<CachalotRenderPipelineComponentViewModel> anchorNode;
@property (readonly, nonatomic) BOOL isCustomSession;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callQueue;

- (id)p_executeOperations;
- (void)p_buildAccordingToConfig;
- (void)p_triggerTransactionDelegateAndCompletionBlockWithResult:(id)a0;
- (void)shoot:(id /* block */)a0;
- (void)p_handleOperationTrigger:(id /* block */)a0;
- (void)beginCustomSession;
- (id)p_buildRemoveAfterOperationForAnchor:(id)a0 includingAnchor:(BOOL)a1;
- (void)commitCustomSession;
- (void)setFlushAnimated:(BOOL)a0;
- (void)insertAfterAnchor:(id)a0;
- (void)updateForHeight:(id)a0;
- (void)updateForRender:(id)a0;
- (void)updateAnchorForHeight;
- (void)updateAnchorForRender;
- (void)fillAnchorWithChildren:(id)a0;
- (void)insertBeforeAnchor:(id)a0;
- (id)transactionConfig;
- (void)removeAnchor;
- (void)insert:(id)a0 atIndex:(long long)a1;
- (void)removeAllAfterAnchor:(BOOL)a0;
- (void)remove:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)initWithAnchor:(id)a0;
- (void)append:(id)a0;

@end
