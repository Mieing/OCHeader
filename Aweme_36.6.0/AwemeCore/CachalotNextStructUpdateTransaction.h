@class CachalotLayoutModel, NSString, NSMutableArray, NSObject;
@protocol CachalotStructUpdateTransactionPrivateCommitDelegate, CachalotNextStructUpdateTransactionCommitDelegate, CachalotRenderPipelineComponentViewModel, OS_dispatch_queue;

@interface CachalotNextStructUpdateTransaction : NSObject

@property (retain, nonatomic) CachalotLayoutModel *pAnchor;
@property (nonatomic) BOOL sessionMode;
@property (nonatomic) BOOL sessionCommited;
@property (nonatomic) BOOL hasShot;
@property (nonatomic) BOOL animateFlush;
@property (nonatomic) unsigned long long revertMode;
@property (copy, nonatomic) NSString *transactionName;
@property (retain, nonatomic) NSMutableArray *operations;
@property (weak, nonatomic) id<CachalotNextStructUpdateTransactionCommitDelegate> transactionDelegate;
@property (weak, nonatomic) id<CachalotStructUpdateTransactionPrivateCommitDelegate> commitDelegate;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) id<CachalotRenderPipelineComponentViewModel> anchorNode;
@property (readonly, nonatomic) BOOL isCustomSession;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callQueue;

- (void).cxx_destruct;

@end
