@class HMDTTMonitorBaseInterceptor, NSString, HMDMonitorDataManager, NSObject, HMDCustomEventSetting;
@protocol OS_dispatch_queue, HMDTTMonitorTracker;

@interface HMDTTMonitor : NSObject <HMDMonitorServiceProtocol, HMDTTMonitorServiceProtocol>

@property (readonly, nonatomic) HMDMonitorDataManager *dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) HMDCustomEventSetting *appEventSetting;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<HMDTTMonitorTracker> tracker;
@property (retain, nonatomic) HMDMonitorDataManager *dataManagerForDB;
@property (retain, nonatomic) HMDTTMonitorBaseInterceptor *interceptorChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackService:(id)a0 metrics:(id)a1 dimension:(id)a2 extra:(id)a3 syncWrite:(BOOL)a4;
+ (void)uploadCodeCoverageFile:(id)a0 scene:(id)a1 commonParams:(id)a2 callback:(id /* block */)a3;
+ (void)trackService:(id)a0 metrics:(id)a1 dimension:(id)a2 extra:(id)a3;
+ (void)setFrequenceDetectParam:(id)a0;
+ (id)getFrequenceDetectParam;
+ (void)setEventInterceptorBlock:(id /* block */)a0;
+ (void)setMonitorTagVerifyBlock:(id /* block */)a0;
+ (void)setMonitorTag:(long long)a0;
+ (id)heimdallrTTMonitor;
+ (void)enableTTMonitorHook;
+ (void)setLogModifyBlock:(id /* block */)a0;
+ (void)setUseShareQueueStrategy:(BOOL)a0;
+ (id)defaultManager;

- (void)hmdTrackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)hmdTrackData:(id)a0 logTypeStr:(id)a1;
- (id)initMonitorWithAppID:(id)a0 injectedInfo:(id)a1;
- (void)hmdUploadImmediatelyTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (BOOL)logTypeEnabled:(id)a0;
- (BOOL)serviceTypeEnabled:(id)a0;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)trackAppLogWithTag:(id)a0 label:(id)a1 extraValue:(id)a2;
- (void)trackAppLogWithTag:(id)a0 label:(id)a1;
- (void)setdDefaultSampleEnabled:(BOOL)a0 forLogType:(id)a1;
- (void)setdDefaultSampleEnabled:(BOOL)a0 forServiceName:(id)a1;
- (void)__setupInterceptorChain;
- (void)hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 storeType:(unsigned long long)a4;
- (BOOL)__modifyByUserBlockWithLogType:(id)a0 serviceName:(id)a1 data:(id *)a2;
- (void)handleParam:(id)a0;
- (void)hmdTrackData:(id)a0 logTypeStr:(id)a1 storeType:(unsigned long long)a2;
- (void)hmdTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 syncWrite:(BOOL)a4;
- (void)updateAppConfig:(id)a0;
- (void)hmdUploadImmediatelyIfNeedTrackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)hmdUploadImmediatelyIfNeedTrackData:(id)a0 logTypeStr:(id)a1;
- (void)hmdUploadImmediatelyTrackData:(id)a0 logTypeStr:(id)a1;
- (void)configTTLiveEventIgnoreLogType:(BOOL)a0;
- (void)event:(id)a0 label:(id)a1 count:(unsigned long long)a2 needAggregate:(BOOL)a3;
- (BOOL)needUploadWithlogTypeStr:(id)a0 serviceName:(id)a1;
- (void)hookTTMonitorInterfaceIfNeeded:(id)a0;
- (void)event:(id)a0 label:(id)a1 needAggregate:(BOOL)a2;
- (void)event:(id)a0 label:(id)a1 duration:(float)a2 needAggregate:(BOOL)a3;
- (void)hmdTrackService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)hmdTrackService:(id)a0 attributes:(id)a1;
- (void)hmdTrackData:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (BOOL)configurationAvailable;

@end
