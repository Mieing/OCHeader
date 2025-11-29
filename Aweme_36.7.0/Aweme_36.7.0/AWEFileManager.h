@class NSString, NSArray, NSMutableDictionary, NSHashTable, NSCondition, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEFileManager : NSObject <AWEResourcePreloadScheduleDelegate, AWEStorageServiceFileKitFileManagerInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSArray *topBusinessLines;
@property (retain, nonatomic) NSHashTable *bundleTable;
@property (retain, nonatomic) NSHashTable *eventDelegates;
@property (retain, nonatomic) NSMutableArray *resourceMetrics;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (retain, nonatomic) NSCondition *trackCondition;
@property (retain, nonatomic) NSMutableArray *allBundlePaths;
@property (retain, nonatomic) NSMutableDictionary *bundleMetadata;
@property (nonatomic) BOOL busy;
@property (copy, nonatomic) NSString *metadataPath;
@property (nonatomic) BOOL initialized;
@property (nonatomic) BOOL hasMetadata;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } resourceMetricsLock;
@property (nonatomic) BOOL enableResourceMetricsLockOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)addResourceMetric:(id)a0;
- (void)resourcePreloadScheduleStateDidChange:(id)a0;
- (id)resourcePreloadScheduleQueue;
- (void)lockResourceMetrics;
- (void)unlockResourceMetrics;
- (void)statisticsAllResourceUtilizationRate;
- (void)rebuildBundleMetadata;
- (id)setupBusinessSandboxWithBusinessConfiguration:(id)a0;
- (void)statisticsMetricResourceUtilizationRate:(id)a0;
- (void)resourceShouldSchedule;
- (id)registerBusinessConfiguration:(id)a0;
- (void)removeBundle:(id)a0;
- (void)updateMetadata;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
