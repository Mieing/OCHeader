@class MMLiveStorageCleanupPinningToken;

@interface MMLiveResourceFetcherFilePinningAction : MMLiveFlowLinearDelegatingActionBase

@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *pinningToken;

- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void).cxx_destruct;

@end
