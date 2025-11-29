@interface CRAsyncOperation : NSOperation

@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ block;
@property (copy) id /* block */ cancelBlock;

+ (id)operationWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)startAsyncOperation;
- (void)finish;
- (void).cxx_destruct;

@end
