@interface MMLiveResourceFetcherUnarchiveManifestValidationFlowAction : MMLiveFlowLinearDelegatingActionBase

- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void)renewStorageLeaseForFileAtPath:(id)a0 fetcherTask:(id)a1 flowInvocationContext:(id)a2 actionInvocationContext:(id)a3;

@end
