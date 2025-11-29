@interface HMDFDConfig : HMDTrackerConfig

@property (nonatomic) int sampleInterval;
@property (nonatomic) double fdWarnRate;
@property (nonatomic) int maxFD;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
