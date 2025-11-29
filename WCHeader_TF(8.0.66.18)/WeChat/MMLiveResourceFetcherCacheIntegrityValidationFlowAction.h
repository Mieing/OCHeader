@interface MMLiveResourceFetcherCacheIntegrityValidationFlowAction : MMLiveFlowLinearDelegatingActionBase

- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void)validateFileForTask:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)validateFileForTask:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 withDigestType:(unsigned long long)a3 expectedDigest:(id)a4;

@end
