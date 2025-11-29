@interface MMLiveResourceFetcherCacheFallbackFlowAction : MMLiveFlowDelegatingActionBase

- (id)initWithCacheFlow:(id)a0 downloadFlow:(id)a1;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;

@end
