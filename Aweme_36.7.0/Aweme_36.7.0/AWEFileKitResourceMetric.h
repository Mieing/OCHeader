@class NSString, MMKV, NSDate, NSObject;
@protocol AWEStorageServiceKVInterface, OS_dispatch_semaphore, OS_dispatch_queue, AWEStorageServiceFileKitResourceMetricDelegate;

@interface AWEFileKitResourceMetric : NSObject <AWEStorageServiceFileKitResourceMetricInterface, HMDDiskVisitor, AWEResourcePreloadScheduleDelegate>

@property (copy, nonatomic) NSString *rootPath;
@property (copy, nonatomic) NSString *relativeRootPath;
@property (copy, nonatomic) NSString *businessLine;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) unsigned long long traceLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> storage;
@property (nonatomic) BOOL useAllocatedDiskSize;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (retain, nonatomic) NSDate *lastTrack;
@property (nonatomic) BOOL enableDefaultMetric;
@property (nonatomic) BOOL traceOnly;
@property (weak, nonatomic) id<AWEStorageServiceFileKitResourceMetricDelegate> metricDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)newMetricFormatEnable;
+ (BOOL)collectionEnable;
+ (BOOL)useNewMetricPath;
+ (id)sharedBizLineMMKV;
+ (id)resourceInfosWithRootPath:(id)a0 businessLine:(id)a1 mmkv:(id)a2;
+ (BOOL)metricStatisticsOptimize;
+ (id)autoTrackQueue;
+ (id)commonParaWithRootPath:(id)a0 businessLine:(id)a1 count:(long long)a2 infoType:(unsigned long long)a3;
+ (BOOL)autoCleanInfoEnable;
+ (id)commonParaWithRootPath:(id)a0 businessLine:(id)a1 infoType:(unsigned long long)a2;
+ (void)preTrackIfNeeded;
+ (id)commonParaWithRootPath:(id)a0 businessLine:(id)a1 count:(long long)a2;
+ (long long)trackCount;
+ (long long)segmentSize;
+ (id)timestamp;

- (void)visitFile:(id)a0 size:(unsigned long long)a1 lastAccessDate:(id)a2 deepLevel:(long long)a3;
- (void)visitDirectory:(id)a0 size:(unsigned long long)a1 deepLevel:(unsigned long long)a2;
- (void)resourceDidCreate:(id)a0;
- (void)resourceDidUse:(id)a0;
- (void)resourceDidUpdate:(id)a0;
- (void)resourceDidRemove:(id)a0;
- (void)resourcePreloadScheduleStateDidChange:(id)a0;
- (BOOL)collectionEnable;
- (void)updateResourceValueWithResourceKey:(id)a0 resourceDate:(id)a1 resourcePath:(id)a2;
- (void)updateKVWithMetricType:(unsigned long long)a0 metricDate:(id)a1 resourcePath:(id)a2;
- (id)delegateMetricInfo;
- (void)updateMetricInfo;
- (id)defaultMetricInfo;
- (id)resourceInfos;
- (void)recordPath:(id)a0 size:(unsigned long long)a1 deepLevel:(long long)a2;
- (id)initTraceOnlyWithRootPath:(id)a0 businessLine:(id)a1;
- (id)initWithRootPath:(id)a0 businessLine:(id)a1 traceLevel:(unsigned long long)a2 enableDefaultMetric:(BOOL)a3;
- (void).cxx_destruct;
- (void)clearAll;
- (BOOL)shouldTrack;
- (void)track;

@end
