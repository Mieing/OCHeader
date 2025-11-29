@interface HMDOOMCrashConfig : HMDTrackerConfig

@property double updateSystemStateInterval;
@property (nonatomic) double memoryPressureValidInterval;
@property (nonatomic) BOOL isFixNoDataMisjudgment;
@property (nonatomic) BOOL isNeedBinaryInfo;
@property (nonatomic) BOOL enablePerformanceOptimization;
@property (nonatomic) BOOL enableNotificationWhenRecordData;
@property (nonatomic) double diskUsageCacheInterval;
@property (nonatomic) BOOL enableMachPortMonitoring;
@property (nonatomic) BOOL enableMemoryTrendUpload;
@property (nonatomic) BOOL enableVnodeMonitoring;
@property (nonatomic) BOOL disableOriginalOOMMetrics;
@property (nonatomic) BOOL isMaxMemorySceneAggregation;
@property (nonatomic) unsigned long long sceneMaxMemoryThreshold;
@property (nonatomic) unsigned long long sceneMemoryDifferenceThreshold;
@property (nonatomic) BOOL enableUploadAppExitReason;
@property (nonatomic) BOOL enableExtensionOOMMonitor;
@property (nonatomic) double updateSystemStateIntervalForExtension;
@property (nonatomic) BOOL enableGPUMemoryMonitor;
@property (nonatomic) BOOL onlyNewOOMForExtension;
@property (nonatomic) BOOL onlyAPPOOMForExtension;
@property (nonatomic) BOOL enableMemorySurgeDetection;
@property (nonatomic) unsigned long long memorySurgeTimeThreshold;
@property (nonatomic) BOOL enableMachPortTrend;
@property (nonatomic) BOOL enableOCCollectionMonitor;
@property (nonatomic) unsigned long long elementCountThreshold;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)enableUpload;

@end
