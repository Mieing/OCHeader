@class AWEAwemeModel, NSString, NSRecursiveLock, AWEPlayInteractionContext, NSMutableDictionary, AWEPlayInteractionInitializeMonitorModel, NSObject, AWEPlayInteractionMetricsMonitorModel;
@protocol OS_dispatch_queue;

@interface AWEPlayInteractionMetricsMonitor : NSObject <AWEEnergyMonitorDataSource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWEPlayInteractionInitializeMonitorModel *initializeMonitorModel;
@property (retain, nonatomic) AWEPlayInteractionMetricsMonitorModel *metricsMonitorModel;
@property (retain, nonatomic) NSMutableDictionary *currentActiveElementList;
@property (retain, nonatomic) NSRecursiveLock *currentActiveElementListLock;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)metricsMonitorEnable;
+ (double)methodCostReportingThreshold;
+ (BOOL)asyncTrackEnable;
+ (BOOL)initializeMonitorEnable;
+ (unsigned long long)methodCostReportingSize;
+ (BOOL)cpuMonitorEnable;
+ (id)sharedMonitor;
+ (unsigned long long)trackInterval;

- (id)getCPUMonitorInfo;
- (id)filterMethodCosts:(id)a0;
- (void)reportInitializeMonitor;
- (void)reportMetricsMonitor;
- (void)appendCurrentActiveElementList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
