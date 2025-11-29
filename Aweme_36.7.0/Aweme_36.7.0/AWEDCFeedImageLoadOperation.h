@class AWEDCFeedImageLoadTask;

@interface AWEDCFeedImageLoadOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (retain, nonatomic) AWEDCFeedImageLoadTask *task;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;

- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)start;
- (void)completeOperation;

@end
