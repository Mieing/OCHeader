@interface WCAsyncOperation : NSOperation

@property (nonatomic) BOOL internalExecuting;
@property (nonatomic) BOOL internalFinished;

- (BOOL)isAsynchronous;
- (void)main;
- (void)asyncStart;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)updateExecuting:(BOOL)a0;
- (void)updateFinished:(BOOL)a0;

@end
