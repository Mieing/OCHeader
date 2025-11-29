@class NSURLSessionTask, NSHTTPURLResponse, NSDate, NSObject, NSSet, NSURLRequest, NSString, NSRecursiveLock, AMapDNSResolver, NSData, NSOutputStream, NSError, NSURLSessionTaskMetrics;
@protocol OS_dispatch_queue, AMapRequestReformerProtocol;

@interface AMapNetworkOperation : NSOperation <AMapNetworkSessionDelegate>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSSet *runLoopModes;
@property (copy, nonatomic) id /* block */ downloadProgress;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ backgroundTaskCleanup;
@property (retain, nonatomic) NSURLSessionTask *sessionTask;
@property (nonatomic) long long expectedSize;
@property (nonatomic) long long totalBytesRead;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) id<AMapRequestReformerProtocol> requestReformer;
@property (nonatomic) BOOL isIpV6Url;
@property (nonatomic) BOOL isDownLevel;
@property (retain, nonatomic) AMapDNSResolver *dnsResolver;
@property (retain, nonatomic) NSURLSessionTaskMetrics *metrics;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSData *responseData;
@property (retain, nonatomic) id userData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)networkRequestThreadEntryPoint:(id)a0;
+ (id)networkRequestThread;

- (void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(id /* block */)a0;
- (unsigned long long)degradeType;
- (void)sessionTask:(id)a0 didReceiveResponse:(id)a1;
- (void)sessionTask:(id)a0 didReceiveData:(id)a1;
- (void)sessionTask:(id)a0 didFinishCollectingMetrics:(id)a1;
- (void)deallocOperation;
- (id)initWithReformer:(id)a0;
- (void)setCompletionHandlerBlock:(id /* block */)a0;
- (void)invokeCompletionBlock;
- (BOOL)canDegrage;
- (void)logNetEvent;
- (BOOL)currentRequestSupportAPM;
- (void)logNetPerformanceModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (BOOL)isConcurrent;
- (void)done;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (void)reset;
- (void)startConnection;
- (void)dealloc;
- (void)cancel;
- (void)sessionTask:(id)a0 didCompleteWithError:(id)a1;
- (void)cancelConnection;
- (void)setDownloadProgressBlock:(id /* block */)a0;

@end
