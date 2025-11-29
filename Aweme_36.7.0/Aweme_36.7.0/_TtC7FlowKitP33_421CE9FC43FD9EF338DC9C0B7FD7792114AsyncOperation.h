@interface _TtC7FlowKitP33_421CE9FC43FD9EF338DC9C0B7FD7792114AsyncOperation : NSOperation {
    void /* unknown type, empty encoding */ stateQueue;
    void /* unknown type, empty encoding */ _isExecuting;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;

@end
