@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, NSObject, AWEStorage, NSMutableArray;
@protocol OS_dispatch_queue, AWEDiskMetricDelegate, OS_dispatch_semaphore;

@interface AWEDiskMetric : NSObject <HMDDiskVisitor>

@property (retain, nonatomic) NSMutableDictionary *infos;
@property (retain, nonatomic) NSMutableArray *diskInfoParams;
@property (nonatomic) long long pathTotal;
@property (nonatomic) long long pathCount;
@property (nonatomic) long long segmentSize;
@property (nonatomic) long long collectionDepth;
@property (retain, nonatomic) NSDictionary *customCollectionDepthConfig;
@property (retain, nonatomic) AWEStorage *universalStorage;
@property (nonatomic) BOOL collectionEnable;
@property (nonatomic) BOOL newMetricFormatEnable;
@property (nonatomic) BOOL useAllocatedDiskSize;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (retain, nonatomic) NSDate *lastTrack;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diskMonitorQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) NSArray *resourceMetricPaths;
@property (copy, nonatomic) NSArray *cleanPaths;
@property (copy, nonatomic) NSArray *expiredDays;
@property (retain, nonatomic) NSMutableDictionary *resourceMetric;
@property (nonatomic) BOOL shouldPauseTrack;
@property (weak, nonatomic) id<AWEDiskMetricDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitFile:(id)a0 size:(unsigned long long)a1 lastAccessDate:(id)a2 deepLevel:(long long)a3;
- (void)visitDirectory:(id)a0 size:(unsigned long long)a1 deepLevel:(unsigned long long)a2;
- (void)trackInternal;
- (id)shouldMetricResource:(id)a0;
- (id)expiredDictionaryByUpdateDictionary:(id)a0 expiredInterval:(double)a1 size:(unsigned long long)a2;
- (long long)customDepthForPath:(id)a0;
- (void)calculateResourceUtilizationWithPath:(id)a0 size:(unsigned long long)a1 deepLevel:(long long)a2;
- (id)resourceAttributeWithPath:(id)a0 size:(unsigned long long)a1;
- (void)addDiskItemInfo:(id)a0 attribute:(id)a1;
- (void)recordPath:(id)a0 size:(unsigned long long)a1 deepLevel:(long long)a2 isDir:(BOOL)a3;
- (void)trackIfNeed;
- (id)fetchDirectoryInfoWithPath:(id)a0;
- (void).cxx_destruct;
- (id)timestamp;
- (id)init;
- (BOOL)shouldTrack;

@end
