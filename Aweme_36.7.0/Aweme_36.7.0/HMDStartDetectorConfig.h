@interface HMDStartDetectorConfig : HMDModuleConfig

@property (nonatomic) BOOL detectCPPInitializer;
@property (nonatomic) BOOL detectLoad;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
