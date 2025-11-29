@class NSOperationQueue;

@interface IESLiveExecutionSequenceQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long suspendCount;

- (void)executeTaskInQueue:(id /* block */)a0;
- (void)executeTask:(id /* block */)a0 needEnqueue:(BOOL)a1;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)cancelAll;

@end
