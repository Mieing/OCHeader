@interface WCBlockMonitorConfiguration : NSObject

@property (nonatomic) unsigned int runloopTimeOut;
@property (nonatomic) unsigned int runloopLowThreshold;
@property (nonatomic) BOOL bRunloopDynamicThreshold;
@property (nonatomic) unsigned int checkPeriodTime;
@property (nonatomic) BOOL bMainThreadHandle;
@property (nonatomic) BOOL bMainThreadProfile;
@property (nonatomic) unsigned int perStackInterval;
@property (nonatomic) unsigned int mainThreadCount;
@property (nonatomic) float limitCPUPercent;
@property (nonatomic) float limitLowerCPUPercent;
@property (nonatomic) BOOL bPrintCPUUsage;
@property (nonatomic) BOOL bGetCPUHighLog;
@property (nonatomic) BOOL bGetPowerConsumeStack;
@property (nonatomic) float powerConsumeStackCPULimit;
@property (nonatomic) BOOL bFilterSameStack;
@property (nonatomic) unsigned int triggerToBeFilteredCount;
@property (nonatomic) unsigned int dumpDailyLimit;
@property (nonatomic) BOOL bPrintMemomryUse;
@property (nonatomic) BOOL bPrintCPUFrequency;
@property (nonatomic) BOOL bGetDiskIOStack;
@property (nonatomic) unsigned long long singleReadLimit;
@property (nonatomic) unsigned long long singleWriteLimit;
@property (nonatomic) unsigned long long totalReadLimit;
@property (nonatomic) unsigned long long totalWriteLimit;
@property (nonatomic) unsigned int memoryWarningThresholdInMB;
@property (nonatomic) BOOL bSensitiveRunloopHangDetection;
@property (nonatomic) BOOL bSuspendAllThreads;
@property (nonatomic) BOOL bEnableSnapshot;
@property (nonatomic) BOOL bPrintVMSummary;
@property (nonatomic) BOOL bPrintJSCType;
@property (nonatomic) BOOL bBusyThreadProfile;
@property (nonatomic) unsigned int busyThreadProfileDuration;
@property (nonatomic) unsigned int busyThreadProfileInterval;
@property (nonatomic) BOOL bMoreThreadInfo;
@property (nonatomic) BOOL bMoreKSCrashLogs;
@property (nonatomic) BOOL bPrintKSLogToFile;
@property (nonatomic) BOOL bCoreDumpAtCrash;
@property (nonatomic) BOOL bCoreDumpAtNonCrash;
@property (nonatomic) BOOL bUploadCoreDumpAfterCrash;
@property (nonatomic) BOOL bSearchQueueNames;
@property (nonatomic) BOOL bMainThreadLockTrace;

+ (id)defaultConfig;

- (id)description;

@end
