@class NSArray;

@interface HMDTTKAutoReleaseProtectionConfig : HMDModuleConfig

@property (retain, nonatomic) NSArray *methodGroupArray;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
