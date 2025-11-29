@class NSString, NSMutableDictionary;

@interface WCCrashBlockConfigMgr : MMRootService <IExptServiceExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicMainThreadMonitorCongfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMMLiveHeavyUser;
+ (id)getConfigFilePath;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)lazyInitConfigMgr;
- (void)setupStrategy;
- (void)addCustomStrategy:(id)a0 sampleRatio:(float)a1 lagMaxCount:(long long)a2 network:(unsigned long long)a3;
- (float)liveUserSampleRatio;
- (float)finderSampleRatio;
- (BOOL)isLiveHeavyUser;
- (float)flutterSampleRatio;
- (id)getBlockMointorConfiguration;
- (void)onExptItemListChange;
- (void)loadDumpReportConfig;
- (void)saveDumpReportConfig;
- (BOOL)getBlockMonitorOpen;
- (float)getCPUUsagePercent;
- (float)getLowerCPUUsage;
- (BOOL)getMainThreadHandle;
- (int)getDeviceUnder;
- (unsigned int)getPerStackInterval;
- (BOOL)getMainThreadProfileEnabled;
- (BOOL)getShouldGetCPUHighLog;
- (BOOL)getShouldGetPowerConsumeStack;
- (float)getPowerConsumeCPULimit;
- (BOOL)getShouldPrintCPUFrequency;
- (unsigned int)getRunloopDefaultThreshold;
- (unsigned int)getRunloopLowThreshold;
- (BOOL)getRunloopDynamicThresholdEnabled;
- (BOOL)getRunloopSensitiveHangDetectionEnabled;
- (BOOL)getShouldSuspendAllThreads;
- (BOOL)getShouldEnableSnapshot;
- (unsigned int)getLagDumpDailyLimit;
- (BOOL)getBusyThreadProfileEnabled;
- (unsigned int)getBusyThreadProfileDuration;
- (unsigned int)getBusyThreadProfileInterval;
- (BOOL)getMoreThreadInfoEnabled;
- (BOOL)getCoreDumpEnabledAtCrash;
- (BOOL)getCoreDumpEnabledAtNonCrash;
- (BOOL)getCoreDumpUploadAfterCrash;
- (BOOL)getSearchQueueNames;
- (BOOL)shouldPrintKSLogToFile;
- (BOOL)enableUseMarsReportIssue;
- (BOOL)shouldEnableMainThreadLockTrace;
- (void).cxx_destruct;

@end
