@class NSString, IESLiveRevenueInteractStreamAverageFPSCalculator, IESLiveGCDTimer, IESLiveRevenueInteractDegradeSetting;
@protocol IESLivePerfSampler;

@interface IESLiveRevenueInteractPerfMonitor : NSObject <IESLiveRevenueInteractPerfMonitorAction, IESLiveRevenueInteractAction>

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveRevenueInteractDegradeSetting *setting;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long currentWarningLevel;
@property (nonatomic) unsigned long long warningSource;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) unsigned long long monitorWarningLevel;
@property (nonatomic) unsigned long long perfWarningLevel;
@property (retain, nonatomic) IESLiveGCDTimer *preMonitorTimer;
@property (nonatomic) double lastPreMonitorRecordDegradeTime;
@property (retain, nonatomic) IESLiveGCDTimer *residentMonitorIntervalTimer;
@property (retain, nonatomic) IESLiveGCDTimer *residentMonitorSampleTimer;
@property (nonatomic) double firstResidentMonitorRecordDegradeTime;
@property (retain, nonatomic) IESLiveRevenueInteractStreamAverageFPSCalculator *calculator;
@property (nonatomic) double degradeStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (id)isDegrade;
- (void)startInteractPreMonitor;
- (void)endInteractPreMonitor;
- (void)startInteractResidentMonitor;
- (void)endInteractResidentMonitor;
- (void)trackRecoverTriggerWithDegradeTime:(double)a0;
- (void)trackDegradeTrigger;
- (void)updateCurrentWarningLevelWithPerfWarningLevel:(unsigned long long)a0;
- (void)startPreMonitor;
- (void)checkPreMonitorData;
- (void)startResidentMonitor;
- (void)stopPreMonitorTimer;
- (void)stopResidentMonitorTimer;
- (void)checkResidentMonitorData;
- (void)updateCurrentWarningLevelWithMonitorWarningLevel:(unsigned long long)a0;
- (void)trackSampleData;
- (id)getBaseParam;
- (id)stringForWarningSource;
- (id)getBasePerformanceDict;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (void)setup;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;
- (void)sampleData;

@end
