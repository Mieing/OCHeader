@class HMDTTMonitor, NSMutableDictionary, NSTimer, HMDTTMonitorUserInfo, NSString, HMDPerformanceReporter;
@protocol NSObject;

@interface HMDSDKMonitorDataManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _remoteModuleLock;
}

@property (retain, nonatomic) HMDPerformanceReporter *reporter;
@property (retain, nonatomic) NSTimer *flushTimer;
@property (nonatomic) BOOL isUploading;
@property (retain, nonatomic) NSMutableDictionary *sdkRemoteModules;
@property (retain, nonatomic) id<NSObject> networkModuleObserver;
@property (retain, nonatomic) HMDTTMonitor *ttMonitor;
@property (retain, nonatomic) HMDTTMonitorUserInfo *ttMonitorUserInfo;
@property (copy, nonatomic) NSString *hostAid;
@property (copy, nonatomic) NSString *sdkAid;

- (void)configDidUpdate:(id)a0;
- (id)moduleWithConfig:(id)a0;
- (void)setupReportPerformanceManagersIfNeed;
- (void)observeHeimdallrModules;
- (void)updateConfigManagerAndReprotWithConfig:(id)a0;
- (void)addMoudleToRemoteDict:(id)a0;
- (void)removeModuleFromRemoteDict:(id)a0;
- (void)setupModule:(id)a0;
- (void)stopModule:(id)a0;
- (void)updateMoudleSetupWithConfig:(id)a0;
- (id)initSDKMonitorDataManagerWithSDKAid:(id)a0 injectedInfo:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
