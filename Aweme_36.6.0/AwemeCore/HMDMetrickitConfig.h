@interface HMDMetrickitConfig : HMDTrackerConfig

@property (nonatomic) BOOL isUploadMetric;
@property (nonatomic) BOOL isFixSegmentRename;
@property (nonatomic) BOOL isIgnoreExtension;
@property (nonatomic) BOOL isIgnoreCrash;
@property (nonatomic) BOOL isIgnoreCPUException;
@property (nonatomic) BOOL isIgnoreAppLaunch;
@property (nonatomic) BOOL isIgnoreHang;
@property (nonatomic) BOOL isIgnoreDiskWrite;
@property (nonatomic) BOOL enableLoadLaunch;
@property (nonatomic) unsigned long long loadUploadThreshold;
@property (nonatomic) unsigned long long loadLaunchDisasterThreshold;
@property (nonatomic) BOOL enableOOMCalibration;
@property (nonatomic) int maxCallbackCount;
@property (nonatomic) BOOL isIgnoreBackgroundLaunchWatchdog;

+ (id)hmd_attributeMapDictionary;
+ (BOOL)shouldLocalStoreConfigData;
+ (id)configKey;

- (id)getModule;
- (BOOL)enableUpload;

@end
