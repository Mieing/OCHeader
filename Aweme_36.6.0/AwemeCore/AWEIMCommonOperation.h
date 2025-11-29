@class NSObject;
@protocol OS_dispatch_queue, AWEIMPiplineCommonTaskProtocol;

@interface AWEIMCommonOperation : NSOperation

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *excuteQueue;
@property (nonatomic) char state;
@property (weak, nonatomic) id<AWEIMPiplineCommonTaskProtocol> delegate;

- (void)sync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (void)run;
- (BOOL)isExecuting;
- (void)main;
- (BOOL)isFinished;

@end
