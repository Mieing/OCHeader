@interface MMLiveFlowActionBase : NSObject

- (void)invokeWithInput:(id)a0 cancelationToken:(id)a1 completionBlock:(id /* block */)a2;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void)dispatchInvocation:(id /* block */)a0 withTarget:(unsigned long long)a1 flowInvocationContext:(id)a2 actionInvocationContext:(id)a3;
- (void)dispatchInvocationToMainQueue:(id /* block */)a0 forced:(BOOL)a1 flowInvocationContext:(id)a2 actionInvocationContext:(id)a3;
- (void)dispatchInvocationToBackgroundWorkerQueue:(id /* block */)a0 forced:(BOOL)a1 flowInvocationContext:(id)a2 actionInvocationContext:(id)a3;

@end
