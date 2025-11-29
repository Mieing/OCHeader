@class NSArray;

@interface HMDWatchdogProtectConfig : HMDTrackerConfig

@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (retain, nonatomic) NSArray *typeList;
@property (retain, nonatomic) NSArray *dynamicProtect;
@property (retain, nonatomic) NSArray *dynamicProtectAnyThread;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
