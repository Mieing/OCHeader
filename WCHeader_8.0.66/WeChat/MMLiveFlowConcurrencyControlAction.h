@class NSMutableArray;

@interface MMLiveFlowConcurrencyControlAction : MMLiveFlowLinearDelegatingActionBase

@property (nonatomic) unsigned long long degreeOfParallelism;
@property (nonatomic) unsigned long long currentExecutingCount;
@property (retain, nonatomic) NSMutableArray *queue;

+ (id)createSerial;
+ (id)createConcurrentDefault;
+ (id)createConcurrentUnlimited;
+ (id)createWithDegreeOfParallelism:(unsigned long long)a0;

- (id)initWithDegreeOfParallelism:(unsigned long long)a0;
- (id)init;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)invokeTaskWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
