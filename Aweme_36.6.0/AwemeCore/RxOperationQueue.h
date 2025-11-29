@protocol RxOperationQueueDelegate;

@interface RxOperationQueue : NSOperationQueue

@property (weak, nonatomic) id<RxOperationQueueDelegate> delegate;

- (id)initWithName:(id)a0 maxConcurrentOperationCount:(long long)a1;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (id)initWithName:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;

@end
