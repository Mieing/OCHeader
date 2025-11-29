@class BFTaskCompletionSource, BFCancellationTokenSource, NSString;
@protocol IESIMHttpTask;

@interface AWEIMNetworkRequestTask : NSObject <IESIMHttpTask>

@property (retain, nonatomic) BFTaskCompletionSource *task;
@property (retain, nonatomic) id<IESIMHttpTask> request;
@property (retain, nonatomic) BFCancellationTokenSource *cancellationToken;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)cancel;

@end
