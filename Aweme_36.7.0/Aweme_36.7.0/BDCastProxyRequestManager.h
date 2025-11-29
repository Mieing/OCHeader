@class BDCastGCDWebServer, BDCastProxyThreadSafeDictionary, BDCastProxyThreadSafeArray, NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_semaphore;

@interface BDCastProxyRequestManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) BDCastGCDWebServer *webServer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pendingRequestsMonitorTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *activeRequestsMonitorTimer;
@property (retain, nonatomic) BDCastProxyThreadSafeArray *pendingRequestsQueue;
@property (retain, nonatomic) BDCastProxyThreadSafeDictionary *activeRequests;
@property (readonly, nonatomic) unsigned long long maxConcurrentRequestCount;
@property (readonly, nonatomic) unsigned long long maxRequestCount;
@property (readonly, nonatomic) double requestWaitScheduleTimeout;
@property (readonly, nonatomic) long long pendingRequestCount;
@property (readonly, nonatomic) long long runningRequestCount;
@property (readonly, nonatomic) NSString *pendingRequestIds;
@property (readonly, nonatomic) NSString *runningRequestIds;

- (void)startQueueMonitor;
- (void)startRequestMonitor;
- (void)addRequestHandlersWithAsyncProcessBlock:(id /* block */)a0;
- (void)stopQueueMonitor;
- (void)stopRequestMonitor;
- (void)stopRequestWithId:(id)a0 stopCategory:(id)a1 needCallCancel:(BOOL)a2;
- (void)etReceiveRequest:(id)a0 costTime:(long long)a1 error:(id)a2;
- (void)enqueueRequest:(id)a0 scheduleBlock:(id /* block */)a1;
- (void)processNextInQueue;
- (void)startRequestWithTask:(id)a0;
- (void)checkQueueTimeout;
- (void)monitorActiveRequests;
- (id)initWithWebServer:(id)a0 asyncProcessBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)updateConfig;
- (void)dealloc;
- (void)cancelAllTasks;
- (void)processRequest:(id)a0;

@end
