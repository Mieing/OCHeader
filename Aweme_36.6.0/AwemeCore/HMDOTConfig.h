@class NSDictionary;

@interface HMDOTConfig : HMDModuleConfig

@property (retain, nonatomic) NSDictionary *allowServiceList;
@property (retain, nonatomic) NSDictionary *allowErrorList;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (BOOL)isPreferredIfDebug;
- (void).cxx_destruct;

@end
