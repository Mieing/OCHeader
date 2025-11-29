@interface IESLiveConcurrentOperation : NSOperation

@property (nonatomic, getter=isFinished) BOOL finished;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (nonatomic, getter=isExecuting) BOOL executing;

- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)done;
- (void)start;
- (void)cancel;

@end
