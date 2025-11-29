@interface MMLiveResourceFetcherCacheWritebackFlowAction : MMLiveFlowLinearDelegatingActionBase

- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void)computeAndSaveDigestForTask:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void)saveDigest:(id)a0 withType:(unsigned long long)a1 forTask:(id)a2 flowInvocationContext:(id)a3 actionInvocationContext:(id)a4;

@end
