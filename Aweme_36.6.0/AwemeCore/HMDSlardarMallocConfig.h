@class NSString;

@interface HMDSlardarMallocConfig : HMDTrackerConfig

@property (nonatomic) unsigned long long optimizeType;
@property (nonatomic) unsigned long long fileMaxCapacity;
@property (copy, nonatomic) NSString *remappedTagArray;
@property (nonatomic) unsigned long long fileInitialSize;
@property (nonatomic) unsigned long long fileGrowStep;
@property (nonatomic) unsigned long long mlockSliceCount;
@property (nonatomic) unsigned long long mlockType;
@property (nonatomic) unsigned long long nanoZoneOptimizeSize;
@property (nonatomic) BOOL nanoZoneOptimizeNeedMlock;
@property (nonatomic) BOOL nanoZoneOptimizeNeedDuration;
@property (nonatomic) BOOL enableLoadLaunch;

+ (id)hmd_attributeMapDictionary;
+ (BOOL)shouldLocalStoreConfigData;
+ (id)configKey;

- (id)getModule;
- (BOOL)enableOpen;
- (void).cxx_destruct;

@end
