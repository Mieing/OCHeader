@class NSString;
@protocol CachalotStructUpdateServiceDelegate;

@interface CachalotStructUpdateService : NSObject <CachalotStructUpdateTransactionPrivateCommitDelegate, CachalotStructUpdateService>

@property (weak, nonatomic) id<CachalotStructUpdateServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScreenTransactionTaskPerform:(id /* block */)a0;
- (BOOL)supportSerialOnScreenTransaction;
- (BOOL)delayTransactionPrepare;
- (void)transactionDidCommit:(id)a0 withResult:(id)a1 handleCompletion:(id /* block */)a2;
- (id)cachalotCommitOnQueue;
- (id)locateByTraverse:(id /* block */)a0;
- (id)transactionWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)locate:(id)a0;

@end
