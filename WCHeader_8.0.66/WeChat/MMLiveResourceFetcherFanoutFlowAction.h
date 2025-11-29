@interface MMLiveResourceFetcherFanoutFlowAction : MMLiveFlowFanoutAction

@property (nonatomic) unsigned long long pendingBatchesCount;

- (void)startFetcherTask:(id)a0 completionBlock:(id /* block */)a1;
- (void)startFetcherTasks:(id)a0 batchCancelationToken:(id)a1 completionBlock:(id /* block */)a2;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;

@end
