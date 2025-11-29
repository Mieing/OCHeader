@interface LynxAsyncServiceOperation : NSOperation

@property (copy, nonatomic) id /* block */ operationBlock;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;

- (void)operationFinish;
- (void).cxx_destruct;
- (void)done;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
