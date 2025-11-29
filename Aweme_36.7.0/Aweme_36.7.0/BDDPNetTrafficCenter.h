@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDDPNetTrafficCenter : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic) unsigned long long maxSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queueLock;
@property (nonatomic) unsigned long long videoNetTraffic;
@property (nonatomic) unsigned long long ttNetTraffic;
@property (nonatomic) unsigned long long liveNetTraffic;
@property (nonatomic) unsigned long long netTrafficThreshold;
@property (nonatomic) BOOL justForStatisticalData;
@property (nonatomic) BOOL enableThresholdReport;
@property (nonatomic) double onlyVideoThreshold;
@property (nonatomic) double onlyLiveThreshold;
@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic) unsigned long long sessionVideoNetTraffic;
@property (nonatomic) unsigned long long sessionTTNetTraffic;
@property (nonatomic) unsigned long long sessionLiveNetTraffic;

+ (BOOL)netTrafficEvent:(id)a0 params:(id)a1;
+ (id)sharedWithMaxSize:(unsigned long long)a0;
+ (id)sharedForStatisticalData;
+ (id)shared;

- (void)swizzleNetTrafficMethod;
- (void)checkNetTrafficThreshold;
- (void)addAndReportNetTrafficInfo;
- (void)extractAllWithCompletion:(id /* block */)a0;
- (void)insertObject:(id)a0 completion:(id /* block */)a1;
- (void)addNetTrafficInfoToMappingCenterWithCompletion:(id /* block */)a0;
- (void)printQueueWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0;

@end
