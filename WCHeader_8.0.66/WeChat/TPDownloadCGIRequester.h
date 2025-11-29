@class NSRecursiveLock, NSMutableDictionary, NSURLSession, NSOperationQueue, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface TPDownloadCGIRequester : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate>

@property (nonatomic) double timeout;
@property (nonatomic) int maxRetryTimes;
@property (nonatomic) int retryInterval;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableDictionary *retryItemsDict;
@property (retain, nonatomic) NSRecursiveLock *retryLock;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cgiRequestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)initTimer;
- (double)getTimeStamp;
- (void)requestWithUrlString:(id)a0 taskId:(int)a1 taskType:(int)a2;
- (void)handleErrorWithUrlString:(id)a0 taskType:(int)a1 oldTaskId:(int)a2 newTaskId:(int)a3;
- (void)releaseRequest:(int)a0;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
