@interface FlowIMX.AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _isExecuting;
    void /* unknown type, empty encoding */ _isFinished;
    void /* unknown type, empty encoding */ _isCancelled;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL cancelled;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;

@end
