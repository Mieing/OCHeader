@class HMDCommonAPISetting;

@interface HMDCrashConfig : HMDTrackerConfig

@property (nonatomic) double launchThreshold;
@property (nonatomic) BOOL useBackgroundSession;
@property (nonatomic) BOOL useCompactUnwind;
@property (retain, nonatomic) HMDCommonAPISetting *crashUploadSetting;
@property (retain, nonatomic) HMDCommonAPISetting *allAPISetting;
@property (nonatomic) BOOL enableAsyncStackTrace;
@property (nonatomic) BOOL enableMultipleAsyncStackTrace;
@property (nonatomic) BOOL enableRegisterAnalysis;
@property (nonatomic) BOOL enableStackAnalysis;
@property (nonatomic) unsigned long long maxAddressAnalyzeSize;
@property (nonatomic) BOOL enableVMMap;
@property (nonatomic) int maxVmmapCount;
@property (nonatomic) BOOL enableCPPBacktrace;
@property (nonatomic) BOOL enableContentAnalysis;
@property (nonatomic) BOOL enableExtensionDetect;
@property (nonatomic) BOOL enableIgnoreExitByUser;
@property (nonatomic) BOOL enableCFExceptionReport;
@property (nonatomic) BOOL setAssertMainThreadTransactions;
@property (nonatomic) BOOL extendFD;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (long long)startWeight;
- (BOOL)enableUpload;
- (void)updateWithAPISettings:(id)a0;
- (id)configDictionary;
- (void).cxx_destruct;

@end
