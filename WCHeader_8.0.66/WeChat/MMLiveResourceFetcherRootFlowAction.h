@interface MMLiveResourceFetcherRootFlowAction : MMLiveFlowLinearDelegatingActionBase

@property (nonatomic) unsigned long long pendingTasksCount;

- (void)startFetcherTask:(id)a0 completionBlock:(id /* block */)a1;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;

@end
