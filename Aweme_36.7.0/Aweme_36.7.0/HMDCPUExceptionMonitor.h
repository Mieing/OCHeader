@class HMDCPUExceptionRecordManager, HMDCPUExceptionCycleDataCollector, NSString, NSMutableArray, NSObject, HMDCPUExceptionConfig, HMDCPUExceptionPerf, HMDCPUExceptionThermalMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCPUExceptionMonitor : HeimdallrModule <HMDCPUExceptionRecordManagerDelegate, HMDCPUExceptionThermalMonitorDelegate>

@property (retain, nonatomic) HMDCPUExceptionRecordManager *recordManager;
@property (nonatomic) BOOL readFromDB;
@property (nonatomic) long long sampleInterval;
@property (retain, nonatomic) HMDCPUExceptionConfig *currentConfig;
@property (retain, nonatomic) HMDCPUExceptionConfig *customConfig;
@property (nonatomic) float powerConsumptionThreshold;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *sampleTimer;
@property (retain, nonatomic) HMDCPUExceptionCycleDataCollector *cycleDataPool;
@property (nonatomic) unsigned long long monitorType;
@property (retain, nonatomic) HMDCPUExceptionThermalMonitor *thermalMonitor;
@property (copy, nonatomic) id /* block */ cloudCommandCompletion;
@property (nonatomic) BOOL isTheramlSerious;
@property (nonatomic) BOOL isTheramlTracking;
@property (nonatomic) float powerConsumption;
@property (nonatomic) BOOL readFromDB;
@property (retain, nonatomic) HMDCPUExceptionRecordManager *recordManager;
@property (retain, nonatomic) HMDCPUExceptionPerf *perfWatch;
@property (retain, nonatomic) NSMutableArray *customScenes;
@property (copy, nonatomic) NSString *customSceneStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (id)cpuExceptionDataFromStore;
- (id)cpuExceptionDataFromMemory;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)monitorStartAction;
- (void)startCPUStatusMonitoring;
- (void)reportLocalStoredRecord;
- (void)checkThermalMonitorState;
- (void)monitorStopAction;
- (void)stopCPUStatusMonitoring;
- (void)switchTheramlMonitorState:(BOOL)a0;
- (void)dealCurrentConfig:(id)a0;
- (void)execMonitorWithCloudCommand;
- (void)setupDataForCycleStart;
- (void)collectCurrentUsageRate;
- (float)getCPUUsageFromThreadsWithConsumThreadArray:(id)a0 allThreadCount:(unsigned int *)a1 maxThreadUsage:(float *)a2;
- (id)backtraceWithThreads:(id)a0 maxThreadUsage:(float)a1;
- (void)usageExceptionInCurrentCycle;
- (void)productionExceptionRecord;
- (BOOL)checkNeedUploadExceptionDataImmediatelyWithCPUAverageUsage:(float)a0;
- (void)restartUsageMonitoringAfterSleep;
- (void)finishMonitorWithCloudCommandWithResult:(id)a0;
- (void)shouldReportCPUExceptionRecordNow;
- (BOOL)storeCPUExceptionRecords:(id)a0;
- (BOOL)deleteCPUExceptionRecords:(id)a0;
- (void)currentTheramlStateAbormal:(unsigned long long)a0;
- (void)currentTheramlStateBecomeNormal:(unsigned long long)a0;
- (void)enterSpecificalSceneWithExceptionConfig:(id)a0;
- (void)leaveSpecificalScene;
- (void)enterCustomSceneWithUniq:(id)a0;
- (void)leaveCustomSceneWithUniq:(id)a0;
- (void)fetchCloudCommandCPUExceptionOneCycleInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (unsigned long long)exceptionType;
- (void)start;
- (void)setupData;
- (Class)storeClass;

@end
