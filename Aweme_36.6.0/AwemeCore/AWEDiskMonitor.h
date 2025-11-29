@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, AWEDiskMetric, NSObject, AWEStorage;
@protocol OS_dispatch_queue;

@interface AWEDiskMonitor : NSObject <HMDDiskVisitor, AWEDiskMetricDelegate>

@property (nonatomic) double cpuUsage;
@property (nonatomic) BOOL cpuExcessive;
@property (nonatomic) BOOL enableCollection;
@property (nonatomic) BOOL enableDiskUsageCollection;
@property (nonatomic) BOOL hitMetric;
@property (copy, nonatomic) NSArray *collectPathList;
@property (copy, nonatomic) NSDictionary *orderPathMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diskMonitorQueue;
@property (retain, nonatomic) NSDate *lastTrack;
@property (retain, nonatomic) AWEStorage *universalStorage;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property unsigned long long backgroundTempTask;
@property (retain, nonatomic) AWEDiskMetric *diskMetric;
@property (retain, nonatomic) NSMutableDictionary *cachePaths;
@property (nonatomic) BOOL newMetricFormatEnable;
@property (nonatomic) BOOL useAllocatedDiskSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupHMDDiskHook;
+ (BOOL)enableHighAppStorageInfo;
+ (BOOL)isHighAppStorage;
+ (id)shareMonitor;

- (void)endBackgroundUpdateTask;
- (void)visitFile:(id)a0 size:(unsigned long long)a1 lastAccessDate:(id)a2 deepLevel:(long long)a3;
- (void)visitDirectory:(id)a0 size:(unsigned long long)a1 deepLevel:(unsigned long long)a2;
- (void)startTrack;
- (void)CPUDidFallback;
- (BOOL)enableMetric;
- (void)shouldPauseTrack;
- (void)diskMetric:(id)a0 visitPath:(id)a1 size:(unsigned long long)a2;
- (id)fetchDirectoryInfoWithPath:(id)a0;
- (void)cpuLoadExcessive;
- (void)cpuLoadNormal;
- (void)thermalMitigationStateChanged;
- (void)updateTrackDateIfNeed;
- (unsigned long long)aweFolderSizeAtPath:(id)a0;
- (id)p_newDiskMetric;
- (void)bg_diskTrack;
- (void)recordCachePath:(id)a0 size:(unsigned long long)a1;
- (double)folderSizeWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)willResignActive:(id)a0;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (BOOL)shouldTrack;
- (void)sceneDidChange;

@end
