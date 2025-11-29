@class IESLiveGPUMonitor, NSArray, NSString, IESLiveOtherFactorsMonitor, IESLiveCPUMonitor, UITabBarController, NSObject, NSMutableArray, NSDateFormatter, NSNumber, IESLivePowerDissipationConfig;
@protocol OS_dispatch_queue, IESLiveMetricsService;

@interface IESLivePowerDissipation : NSObject <IESLivePowerDissipationService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (retain, nonatomic) IESLivePowerDissipationConfig *config;
@property (retain, nonatomic) IESLiveCPUMonitor *cpuMonitor;
@property (retain, nonatomic) IESLiveGPUMonitor *gpuMonitor;
@property (retain, nonatomic) IESLiveOtherFactorsMonitor *factorsMonitor;
@property (nonatomic) double enterRoomTime;
@property (retain, nonatomic) UITabBarController *rootVC;
@property (retain) NSNumber *firstSeriousTime;
@property (retain) NSNumber *firstCriticalTime;
@property (retain) NSArray *pages;
@property (retain, nonatomic) NSMutableArray *swipeRoomTime;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) id<IESLiveMetricsService> metricsService;
@property (nonatomic) long long memberCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerPerformanceWithCPUUsage:(float)a0;
- (id)getThreadStackWithConfig:(id)a0 andThreads:(id)a1;
- (void)addThermalObserver;
- (void)recordThermalState;
- (void)thermalStateChangedNotification:(id)a0;
- (void)recordCurrentPages;
- (void)reportDataIfNeededWithCPUInfo:(id)a0 gpuUsage:(id)a1 report:(BOOL)a2 distribute:(id /* block */)a3;
- (void)swipeRoom;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithConfig:(id)a0;
- (long long)thermalState;

@end
