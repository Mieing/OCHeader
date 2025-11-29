@class NSMutableDictionary;

@interface MMLiveFlowDelegatingActionBase : MMLiveFlowActionBase

@property (retain, nonatomic) NSMutableDictionary *downstreamActions;

- (id)init;
- (void)addDownstreamAction:(id)a0 withName:(id)a1;
- (BOOL)hasDownstreamActionWithName:(id)a0;
- (void)invokeDownstreamWithName:(id)a0 input:(id)a1 flowInvocationContext:(id)a2 currentActionInvocationContext:(id)a3 completionBlock:(id /* block */)a4;
- (void)invokeDownstreamWithName:(id)a0 input:(id)a1 cancelationToken:(id)a2 flowInvocationContext:(id)a3 currentActionInvocationContext:(id)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;

@end
