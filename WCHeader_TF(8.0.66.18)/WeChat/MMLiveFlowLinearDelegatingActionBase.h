@interface MMLiveFlowLinearDelegatingActionBase : MMLiveFlowDelegatingActionBase

- (void)continueWithActionClass:(Class)a0;
- (void)continueWithActionInstance:(id)a0;
- (void)continueWithActionFactory:(id /* block */)a0;
- (void)invokeDownstreamWithInput:(id)a0 flowInvocationContext:(id)a1 currentActionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)invokeDownstreamWithInput:(id)a0 cancelationToken:(id)a1 flowInvocationContext:(id)a2 currentActionInvocationContext:(id)a3 completionBlock:(id /* block */)a4;

@end
