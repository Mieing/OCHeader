@class NSString, NSMutableDictionary;

@interface BDPMonitorCenter : NSObject <BDPRuntimeLifeCycleMessage, BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage, BDPWarmBootMessage, BDPCommonActiveChangeMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *monitors;
@property (retain, nonatomic) NSMutableDictionary *paramBlocks;
@property (nonatomic) BOOL enableCustomPerformanceMonitor;
@property (nonatomic) BOOL enablePerformanceMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getMonitorParamseWithUniqueID:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)handleShareEvent:(id)a0;
+ (void)handleStoreCommonData:(id)a0;
+ (id)pr_getMonitorCategoryWithData:(id)a0 uniqueID:(id)a1;
+ (void)getMonitorCategoryWithUniqueID:(id)a0 completion:(id /* block */)a1;
+ (void)handleKillLevelMemoryWaring:(id)a0;
+ (void)handleAdShowEvent:(id)a0;
+ (void)handleRtcEngineCreateEvent:(id)a0;
+ (void)handleJSLockEvent:(id)a0;
+ (void)handleGameRecordEvent:(id)a0;
+ (void)monitorPerformanceWithDuration:(double)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (void)applicationInterruptionStateChange:(BOOL)a0 uniqueID:(id)a1;
- (void)applicationLoadFinishWithUniqueID:(id)a0 error:(id)a1 content:(id)a2 extraParams:(id)a3;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)triggerOnceFPSMonitorTaskWithUniqueID:(id)a0 caller:(id)a1;
- (void)stopOnceFPSMonitorTaskWithUniqueID:(id)a0;
- (void)addFPSMonitorWithUniqueID:(id)a0;
- (void)monitorAlertInfo:(id)a0 withUniqueID:(id)a1;
- (void)commonBecomeActive:(BOOL)a0 forUniqueID:(id)a1;
- (void)flushMonitorInfoWithUniqueID:(id)a0;
- (void)registerBusinessMonitor:(id)a0 forUniqueID:(id)a1;
- (id)getMonitorDataWithUniqueID:(id)a0;
- (void)runningDispatchQueue:(id)a0 didStopWithUniqueID:(id)a1;
- (void)runningDispatchQueueDidFatalWithUniqueID:(id)a0;
- (id)bdp_queue;
- (id)bdp_nativeGameMonitorDatas;
- (void)registerNativeGameMonitorData:(id)a0 uniqueID:(id)a1;
- (void)removeNativeGameMonitorDataWithUniqueID:(id)a0;
- (void)resisterNativeGameMessage;
- (void)unResisterNativeGameMessage;
- (BOOL)enableTriggerOnceFPSMonitorTaskWithUniqueID:(id)a0;
- (id)FPSMonitorWithTimes:(long long)a0 caller:(id)a1 uniqueID:(id)a2;
- (void)reportFPSMonitorWithData:(id)a0 frameLossRate:(float)a1 state:(id)a2 uniqueID:(id)a3;
- (void)addMonitor:(id)a0 forUniqueID:(id)a1;
- (void)reportAlertMonitorWithData:(id)a0 alertCount:(long long)a1 uniqueID:(id)a2;
- (BOOL)frameSchedulerCallBackOnOtherQueue:(id)a0;
- (id)frameSchedulerCallBackConfig;
- (void)reportCPUMonitorWithData:(id)a0 jscDatas:(id)a1 uniqueID:(id)a2;
- (void)reportGPUMonitorWithData:(id)a0 uniqueID:(id)a1;
- (void)reportMemoryMonitorWithData:(id)a0 sizeDatas:(id)a1 uniqueID:(id)a2;
- (void)reportBatteryMonitorWithData:(double)a0 capacityDelta:(double)a1 batteryStatus:(long long)a2 batteryLow:(BOOL)a3 thermalStatus:(long long)a4 count:(long long)a5 uniqueID:(id)a6;
- (void)event:(id)a0 attributes:(id)a1 uniqueID:(id)a2;
- (BOOL)enableGameTimeLinePerformanceReportWithUnitqueID:(id)a0;
- (void)registerTrackerParamsWithUniqueID:(id)a0 paramsBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;

@end
