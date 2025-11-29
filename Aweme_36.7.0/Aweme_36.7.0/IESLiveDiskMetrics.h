@class NSArray, NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol HTSKVStore, OS_dispatch_queue;

@interface IESLiveDiskMetrics : NSObject <IESLiveDiskService>

@property (retain, nonatomic) id<HTSKVStore> metricsLocation;
@property (retain) NSMutableDictionary *fileCreateSet;
@property (nonatomic) long long expired;
@property (retain, nonatomic) NSArray *diskPath;
@property (retain, nonatomic) NSDictionary *diskMetrics;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diskMetricsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *traceMetricsQueue;
@property (retain, nonatomic) NSMutableDictionary *pathFileCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)optAccessFileSize;
- (void)loadDiskService;
- (void)finishDiskMetrics;
- (void)fileCreateWithName:(id)a0 rootPath:(id)a1;
- (void)geckoChannelsSize;
- (BOOL)needStatisticsDiskMetrics;
- (void)traceDiskSpace;
- (void)traceDiskSpaceNew;
- (id)liveCacheDirectoryWithPath:(id)a0;
- (id)mapDiskPath:(id)a0;
- (void)loadLocalFileCountWithPathSize:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;

@end
