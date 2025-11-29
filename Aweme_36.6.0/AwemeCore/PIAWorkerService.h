@class NSString, PIABiMapTable;

@interface PIAWorkerService : NSObject <PIAWorkerService, PIAWorkerDelegate>

@property (retain, nonatomic) PIABiMapTable *workerIdMap;
@property (retain, nonatomic) PIABiMapTable *instanceMap;
@property (retain, nonatomic) PIABiMapTable *runTaskMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)createWorkerWithConfig:(id)a0 context:(id)a1 createCB:(id /* block */)a2 requestCB:(id /* block */)a3;
- (id)getWorkerWithWorkerID:(id)a0;
- (id)getWorkerWithContext:(id)a0;
- (void)releaseWorkerWithContext:(id)a0;
- (void)removeWorker:(id)a0;
- (void)runTaskWithConfig:(id)a0 context:(id)a1 maxTime:(long long)a2 params:(id)a3 delegate:(id)a4 completion:(id /* block */)a5;
- (void)injectWorkerBridgeWithContext:(id)a0 instance:(id)a1;
- (void)PIAWorker:(id)a0 didReceiveError:(id)a1;
- (void)PIAWorker:(id)a0 onReceiveWorkerMessage:(id)a1;
- (void)PIAWorker:(id)a0 willFetchScriptURL:(id)a1;
- (void)PIAWorker:(id)a0 didFetchScriptURL:(id)a1 fetchMetrics:(id)a2 error:(id)a3;
- (void)willPIAWorkerCreate:(id)a0;
- (void)didPIAWorkerCreate:(id)a0;
- (id)p_createWorkerWithConfig:(id)a0 context:(id)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (void)p_fetchResourceForURL:(id)a0 worker:(id)a1 context:(id)a2 configuration:(id)a3 completion:(id /* block */)a4;
- (void)workerExecuteTimeOut:(long long)a0 worker:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
