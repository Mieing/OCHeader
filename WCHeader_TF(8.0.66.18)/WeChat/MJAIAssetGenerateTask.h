@class MJAIAssetGenerateResult, MMTimer, NSString, NSError, MJAIAssetGenerateRequest;

@interface MJAIAssetGenerateTask : NSObject

@property (retain, nonatomic) MJAIAssetGenerateResult *result;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) MMTimer *timeoutTimer;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) long long maxRetryTimes;
@property (nonatomic) unsigned int nextQueryInterval;
@property (nonatomic) unsigned int queryCount;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) MJAIAssetGenerateRequest *request;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) long long state;

- (id)initWithRequest:(id)a0 timeoutInterval:(double)a1;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void)_handleSubmitSuccessWithResult:(id)a0;
- (void)_handleSubmitFailWithError:(id)a0;
- (void)_repeatedlyQueryGenerateResult;
- (void)_disposedQueryGenerateResult;
- (void)_handleQuerySuccessWithResult:(id)a0 isRepeatedly:(BOOL)a1;
- (void)_handleQueryFailWithError:(id)a0;
- (void)didRecieveCompletionNotify;
- (void)_startTimeoutTimer;
- (void)_stopTimeoutTimer;
- (void)_taskDidTimeout;
- (void)_completeWithResult:(id)a0 error:(id)a1;
- (void)_callCompletionHandler;
- (void)submitWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)queryWithTaskID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelWithTaskID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
