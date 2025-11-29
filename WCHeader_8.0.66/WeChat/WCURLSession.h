@class NSRecursiveLock, NSString, NSMutableArray, WCURLSessionConfiguration;
@protocol WCURLSessionDelegate;

@interface WCURLSession : NSObject <WCURLSessionTaskInternalDelegate>

@property (readonly, nonatomic) WCURLSessionConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCURLSessionDelegate> delegate;
@property (retain, nonatomic) WCURLSessionConfiguration *configuration;
@property (nonatomic) unsigned long long reqeustId;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sessionWithConfiguration:(id)a0;
+ (id)sessionWithConfiguration:(id)a0 delegate:(id)a1;

- (void)sessionTaskOnResume:(id)a0;
- (void)sessionTaskOnCancel:(id)a0;
- (void)removeTask:(id)a0;
- (void)sessionTaskOnComplete:(id)a0;
- (void)addTask:(id)a0;
- (void)urlSessionTask:(id)a0 didCompleteWithError:(id)a1;
- (void)urlSessionTask:(id)a0 onProgressUpdate:(unsigned long long)a1 currentBytes:(unsigned long long)a2;
- (void)urlSessionTask:(id)a0 onCornetTaskProgressUpdate:(long long)a1 currentBytes:(unsigned long long)a2;
- (void)urlSessionTask:(id)a0 didReceiveResponse:(id)a1 completionHandler:(id /* block */)a2;
- (void)onCornetTaskProgressUpdate:(long long)a0 currentBytes:(unsigned long long)a1 taskId:(id)a2;
- (BOOL)checkDelegateConfirmsToProtocol:(id)a0 selector:(SEL)a1;
- (void)urlSessionTask:(id)a0 didReceiveData:(id)a1;
- (unsigned long long)generateAndIncreaseRequestId;
- (id)downloadTaskWithRequest:(id)a0;
- (void).cxx_destruct;

@end
