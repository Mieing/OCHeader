@class NSMutableDictionary;

@interface MMLiveResourceFetcherDownloadDeduplicationFlowAction : MMLiveFlowLinearDelegatingActionBase

@property (retain, nonatomic) NSMutableDictionary *entries;

- (id)init;
- (void)onAllInvocationCanceledForDeduplicationEntry:(id)a0;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
