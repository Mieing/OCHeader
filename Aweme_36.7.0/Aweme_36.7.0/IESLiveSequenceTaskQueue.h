@class NSOperationQueue;

@interface IESLiveSequenceTaskQueue : NSObject

@property (nonatomic) long long suspendCount;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL suspending;

- (void)executeSequenceTask:(id /* block */)a0;
- (void)resumeQueue;
- (void).cxx_destruct;
- (id)init;
- (void)suspendQueue;
- (void)cancelAll;

@end
