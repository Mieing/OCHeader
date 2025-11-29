@interface FlowKitBizUI.CustomOperation : NSOperation {
    void /* unknown type, empty encoding */ taskId;
    void /* unknown type, empty encoding */ asyncTask;
    void /* unknown type, empty encoding */ isPausedFlag;
    void /* unknown type, empty encoding */ pendingCompletion;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;
@property (nonatomic, readonly) BOOL cancelled;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)cancel;
- (BOOL)isFinished;

@end
