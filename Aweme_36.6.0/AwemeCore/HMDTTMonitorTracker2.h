@class HMDTTMonitorCounter, HMInstance, NSString, HMDMonitorDataManager2, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDTTMonitorTracker2 : NSObject <HMDTTMonitorOfflineCheckPointProtocol, HMDTTMonitorTraceProtocol, HMDTTMonitorTracker> {
    NSString *_appID;
}

@property (readonly, nonatomic) HMDTTMonitorCounter *counterNullable;
@property (nonatomic) BOOL counterFlag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) HMDMonitorDataManager2 *dataManager;
@property (retain, nonatomic) NSMutableArray *eventCache;
@property (readonly, nonatomic) HMInstance *instance;
@property (readonly, nonatomic) HMInstance *highPriorityInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL ignoreLogType;

- (BOOL)performanceDataSource;
- (BOOL)logTypeEnabled:(id)a0;
- (BOOL)serviceTypeEnabled:(id)a0;
- (id)initWithAppID:(id)a0 userInfo:(id)a1 serailQueue:(id)a2;
- (void)trackDataWithParamOnSerailQueue:(id)a0;
- (BOOL)needUploadWithLogTypeStr:(id)a0 serviceType:(id)a1 data:(id)a2;
- (void)countEvent:(id)a0 label:(id)a1 value:(float)a2 needAggregate:(BOOL)a3 appID:(id)a4;
- (void)timerEvent:(id)a0 label:(id)a1 value:(float)a2 needAggregate:(BOOL)a3 appID:(id)a4;
- (BOOL)needUploadWithlogTypeStr:(id)a0 serviceType:(id)a1;
- (BOOL)needUploadWithParam:(id)a0;
- (BOOL)isHighPriorityWithLogType:(id)a0 serviceType:(id)a1;
- (BOOL)ttmonitorConfigurationAvailable;
- (void)__flushEventCacheIfNeeded;
- (void)__recordEvent:(id)a0;
- (BOOL)isHighPriorityWithService:(id)a0;
- (BOOL)isHighPriorityWithLogType:(id)a0;
- (void)__updateMovingLineAndNeedUploadForRecord:(id)a0 storeType:(unsigned long long)a1;
- (BOOL)__isDataValid:(id)a0;
- (void).cxx_destruct;

@end
