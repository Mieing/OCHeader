@class NSMutableArray, NSArray, NSString, HMInstance, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMDUITrackerManager : HeimdallrModule <HMDPerformanceReporterDataSource, HMDUITrackerDelegate, HMDUITrackerServiceProtocol, HMDUITrackerManagerSceneProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _recentScenesLock;
}

@property (nonatomic) struct HMDRecordLocalIDRange { unsigned long long x0; unsigned long long x1; } uploadingRange;
@property (retain, nonatomic) NSArray *andConditions;
@property (nonatomic) long long hmdCountLimit;
@property (nonatomic) double lastFlushTimestamp;
@property (copy) NSString *scene;
@property (copy) NSString *lastScene;
@property (copy) NSArray *multiScenes;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) NSNumber *sceneInPushing;
@property (nonatomic) BOOL isNeedSaveEventsInBackground;
@property (retain, nonatomic) NSMutableArray *recentScenes;
@property (nonatomic) struct HMDRecordLocalIDRange { unsigned long long minLocalID; unsigned long long maxLocalID; } uploadingRange;
@property (nonatomic) long long hmdCountLimit;
@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) HMInstance *instance;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) unsigned long long flushCount;
@property (nonatomic) double flushInterval;
@property (nonatomic) unsigned long long uploadCount;
@property (nonatomic) double uploadInterval;
@property (nonatomic) double vhFileCleaningCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)awe_energy_optimize_hook;
+ (id)sharedManager;

- (void)updateConfig:(id)a0;
- (BOOL)performanceDataSource;
- (void)cleanupWithConfig:(id)a0;
- (long long)dbMaxSize;
- (void)setupWithHeimdallr:(id)a0;
- (id)sharedOperationTrace;
- (void)dropAllDataForServerState;
- (unsigned long long)reporterPriority;
- (id)performanceDataWithCountLimit:(long long)a0;
- (id)debugRealPerformanceDataWithConfig:(id)a0;
- (void)cleanupPerformanceDataWithConfig:(id)a0;
- (void)performanceDataDidReportSuccess:(BOOL)a0;
- (id)performanceDataWithLimitSize:(unsigned long long)a0 limitCount:(long long)a1 currentSize:(unsigned long long *)a2;
- (void)performanceSizeLimitedDataDidReportSuccess:(BOOL)a0;
- (id)fetchUploadRecords;
- (void)updateOperationTrace;
- (void)updateStateIfRunning:(id)a0;
- (void)cleanUpExpiredViewHierarchyFiles;
- (void)hmdTrackWithRecord:(id)a0;
- (id)getUITrackerDataWithRecords:(id)a0;
- (void)hmdTrackableContext:(id)a0 eventWithName:(id)a1 parameters:(id)a2;
- (void)hmdTrackWithName:(id)a0 event:(id)a1 parameters:(id)a2;
- (void)hmdSwitchToNewVCFrom:(id)a0 to:(id)a1;
- (void)hmdDidAppearViewController:(id)a0;
- (void)hmdDidLeaveViewController:(id)a0;
- (id)ui_actionRecordsInAppTimeFrom:(double)a0 to:(double)a1 sessionID:(id)a2 recordClass:(Class)a3;
- (id)getKeyWindow;
- (void)recordViewHierarchyForWindow:(id)a0 WithDetail:(BOOL)a1;
- (void)recordViewHierarchyForKeyWindowWithDetail:(BOOL)a0;
- (void)uploadViewHierarchyWithTitle:(id)a0 subTitle:(id)a1;
- (void)awe_energy_optimize_hmdTrackableContext:(id)a0 eventWithName:(id)a1 parameters:(id)a2;
- (void)awe_energy_optimize_hmdTrackWithName:(id)a0 event:(id)a1 parameters:(id)a2;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)applicationDidEnterBackground:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (Class)storeClass;

@end
