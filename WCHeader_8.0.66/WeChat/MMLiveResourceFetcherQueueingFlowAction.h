@class NSString, MMLiveQueue, NSMutableDictionary;

@interface MMLiveResourceFetcherQueueingFlowAction : MMLiveFlowLinearDelegatingActionBase <MMLiveResourceFetcherTaskExt>

@property (nonatomic) unsigned long long concurrencyLimit;
@property (nonatomic) unsigned long long currentExecutingCount;
@property (retain, nonatomic) MMLiveQueue *pendingTasks;
@property (retain, nonatomic) NSMutableDictionary *pendingTasksLookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithConcurrencyLimit:(unsigned long long)a0;

- (id)initWithConcurrencyLimit:(unsigned long long)a0;
- (id)init;
- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)onResourceFetcherTaskPriorityChanged:(id)a0 previousPriority:(struct { long long x0; long long x1; })a1;
- (void)onResourceFetcherTaskPriorityBatchChanged;
- (void)invokeTaskWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)enqueueTask:(id)a0;
- (void)dequeueTask;
- (void).cxx_destruct;

@end
