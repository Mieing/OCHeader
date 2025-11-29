@class NSRecursiveLock;

@interface MMAsyncBlockOperation : NSOperation

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL internalExecuting;
@property (nonatomic) BOOL internalFinished;
@property (readonly, nonatomic) BOOL isPending;

+ (id)operationWithBlock:(id /* block */)a0;

- (void)mmStart;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)finish;
- (void)start;
- (void)runBlock;
- (void).cxx_destruct;

@end
