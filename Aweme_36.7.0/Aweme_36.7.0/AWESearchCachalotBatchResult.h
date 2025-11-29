@class NSArray, CachalotNextTransactionConfig, CachalotStructUpdateTransaction, CachalotStructUpdateTransactionResult;

@interface AWESearchCachalotBatchResult : NSObject

@property (readonly, nonatomic) CachalotStructUpdateTransactionResult *result;
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) CachalotNextTransactionConfig *nextTransaction;
@property (readonly, nonatomic) CachalotStructUpdateTransaction *updateTransaction;

- (id)initWithResult:(id)a0 operations:(id)a1 nextTransaction:(id)a2 structUpdate:(id)a3;
- (void).cxx_destruct;

@end
