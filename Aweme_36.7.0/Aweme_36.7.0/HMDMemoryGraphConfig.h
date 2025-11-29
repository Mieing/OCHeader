@interface HMDMemoryGraphConfig : HMDModuleConfig

@property (nonatomic) BOOL manualMemoryWarning;
@property (nonatomic) double checkInterval;
@property (nonatomic) unsigned long long dangerThresholdMB;
@property (nonatomic) unsigned long long growingStepMB;
@property (nonatomic) unsigned long long devicePerformanceLevelThreshold;
@property (nonatomic) unsigned long long minGenerateMinuteInterval;
@property (nonatomic) unsigned long long maxTimesPerDay;
@property (nonatomic) unsigned long long minRemainingMemoryMB;
@property (nonatomic) unsigned long long maxFileSizeMB;
@property (nonatomic) unsigned long long maxPreparedFolderSizeMB;
@property (nonatomic) BOOL enableCPPSymbolicate;
@property (nonatomic) unsigned long long timeOutInterval;
@property (nonatomic) BOOL enableLeakNodeCalibration;
@property (nonatomic) unsigned long long memorySurgeThresholdMB;
@property (nonatomic) BOOL enableCFInstanceSymbolicate;
@property (nonatomic) BOOL enableRefAccuracyImprove;
@property (nonatomic) BOOL enableCircularReferenceDetect;
@property (nonatomic) BOOL enableSwiftReferenceDetect;
@property (nonatomic) BOOL disableDegradeOperation;
@property (nonatomic) BOOL enableBusinessClassIdentify;
@property (nonatomic) unsigned long long minRemainingVirtualMemoryMB;
@property (nonatomic) unsigned long long fileExpiredDayInterval;
@property (nonatomic) BOOL enableUnsafeClassIdentify;
@property (nonatomic) BOOL isOOMSubtypeUploadEnabled;
@property (nonatomic) BOOL isOOMUploadEnabled;
@property (nonatomic) BOOL isOOMStartEnabled;
@property (nonatomic) BOOL isAppOOMStartEnabled;
@property (nonatomic) BOOL enableStartupWithMatrix;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)isValid;

@end
