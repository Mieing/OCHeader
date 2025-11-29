@interface MMLiveFlowRetryAction : MMLiveFlowLinearDelegatingActionBase

@property (nonatomic) unsigned long long maximumRetryCount;
@property (copy, nonatomic) id /* block */ backoffDelayFunction;

+ (id)createWithMaximumRetryCount:(unsigned long long)a0 fixedBackoffDelay:(double)a1;
+ (id)createDefaultExponentialBackoffWithMaximumRetryCount:(unsigned long long)a0;
+ (id)createWithMaximumRetryCount:(unsigned long long)a0 exponentialBackoffBase:(double)a1 initialDelay:(double)a2 maximumRandomJitterRatio:(double)a3;
+ (id)createWithMaximumRetryCount:(unsigned long long)a0 backoffDelayFunction:(id /* block */)a1;

- (id)initWithMaximumRetryCount:(unsigned long long)a0 backoffDelayFunction:(id /* block */)a1;
- (id)init;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)invokeRetryWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 currentRetry:(unsigned long long)a3 completionBlock:(id /* block */)a4;
- (void)dispatchInvocation:(id /* block */)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2;
- (void).cxx_destruct;

@end
