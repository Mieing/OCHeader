@class NSString;

@interface LVResourceDownloadOperation : NSOperation {
    BOOL executing;
    BOOL finished;
}

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *operationID;

- (BOOL)handleCanceledIfNeeded;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (void)finishWithError:(id)a0;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;

@end
