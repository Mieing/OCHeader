@class NSObject, AWECloudCommandNetDiagnoseConnect, NSMutableString, NSString, AWECloudCommandNetDiagnoseTraceRoute, AWECloudCommandNetDiagnoseUpSpeed, AWECloudCommandNetDiagnoseDownSpeed;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, AWECloudCommandNetDiagnoseManagerDelegate;

@interface AWECloudCommandNetDiagnoseManager : NSObject <AWECloudCommandNetDiagnoseConnectDelegate, AWECloudCommandNetDiagnoseTraceRouteDelegate> {
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_semaphore> *_processSem;
}

@property (retain, nonatomic) NSMutableString *logInfo;
@property BOOL isRuning;
@property (nonatomic) double currentPercent;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) AWECloudCommandNetDiagnoseConnect *ConnectTester;
@property (retain, nonatomic) AWECloudCommandNetDiagnoseTraceRoute *traceRouteTester;
@property (retain, nonatomic) AWECloudCommandNetDiagnoseUpSpeed *upSpeedTester;
@property (retain, nonatomic) AWECloudCommandNetDiagnoseDownSpeed *downSpeedTester;
@property (copy, nonatomic) NSString *testHost;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *deviceId;
@property (weak, nonatomic) id<AWECloudCommandNetDiagnoseManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_networkType;

- (void)startNetDiagnoseWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)_outputInfo:(id)a0;
- (void)_outputAppInfo;
- (void)_outputNetInfo;
- (void)_outputConnectInfo;
- (void)_netDiagnoseDidFinish;
- (void)didAppendPingLog:(id)a0;
- (void)didFinishPing;
- (void)startNetDiagnose;
- (void)stopNetDiagnose;
- (void)didAppendTraceRouteLog:(id)a0;
- (void)didFinishTraceRoute;
- (void)startNetDiagnoseWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_updateProgress;
- (void)dealloc;
- (id)_carrierName;

@end
