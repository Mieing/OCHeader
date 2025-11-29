@class BDDPNetTrafficCenter, BDDPUIFrozenInfo, NSString, BDDynamicPerformanceMappingCenter, NSObject, BDDynamicPerformanceBizAnnouncer;
@protocol OS_dispatch_source, BDDPConfiguring, BDDPBizConfiguring;

@interface BDDynamicPerformanceManager : NSObject <BDDPManaging>

@property (retain, nonatomic) id<BDDPConfiguring> configuration;
@property (retain, nonatomic) id<BDDPBizConfiguring> bizConfig;
@property (retain, nonatomic) BDDynamicPerformanceBizAnnouncer *bizAnnouncer;
@property (retain, nonatomic) BDDynamicPerformanceMappingCenter *performanceMappingCenter;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) BDDPNetTrafficCenter *netTrafficCenter;
@property (retain, nonatomic) BDDPUIFrozenInfo *uiFrozenInfo;
@property (nonatomic) int appState;
@property (readonly, nonatomic) long long cpuLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWithBizConfig:(id)a0;
+ (id)sharedWithConfiguration:(id)a0 bizConfig:(id)a1;
+ (id)shared;

- (void)startTraceWithConfig:(id)a0;
- (void)updateBizConfig:(id)a0;
- (BOOL)enablePerformanceMapping;
- (void)trackerPerformanceMapValue:(id)a0 extra:(id)a1 withCategory:(unsigned char)a2 Type:(unsigned char)a3 Mode:(unsigned char)a4 Item:(unsigned char)a5;
- (void)trackerPerformanceMapInfoAndRemoveAllImmediately;
- (void)trackerPerformanceMapInfoAndMarkBatchEnd;
- (id)initWithConfiguration:(id)a0 bizConfig:(id)a1;
- (void)collectPerformanceData;
- (void)demoForCustomDidReceiveMemoryWarning;
- (void)stopTraceWithCallback:(id /* block */)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
