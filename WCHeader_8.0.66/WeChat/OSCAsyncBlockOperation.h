@interface OSCAsyncBlockOperation : NSOperation

@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;

- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (void)complete;
- (void).cxx_destruct;

@end
