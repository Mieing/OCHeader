@class NSString;

@interface HMDGWPASanConfig : HMDModuleConfig

@property (nonatomic) unsigned int MaxSimultaneousAllocations;
@property (nonatomic) unsigned int SampleRate;
@property (nonatomic) BOOL isOpenDebugMode;
@property (nonatomic) unsigned int MaxMapAllocationsDebugMode;
@property (nonatomic) BOOL useNewGWPAsan;
@property (nonatomic) BOOL coredumpIfAsan;
@property (nonatomic) unsigned long long reusePeriod;
@property (retain, nonatomic) NSString *customScene;
@property (retain, nonatomic) NSString *customRange;
@property (retain, nonatomic) NSString *customScope;
@property (nonatomic) BOOL enableAdaptiveRate;
@property (nonatomic) unsigned int fallbackAdaptiveRate;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
