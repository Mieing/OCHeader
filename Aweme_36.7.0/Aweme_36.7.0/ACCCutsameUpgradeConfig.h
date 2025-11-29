@interface ACCCutsameUpgradeConfig : NSObject

+ (id)currentSupportFeatureBits;
+ (id)smartVideoFetchTemplateVersion;
+ (id)currentCutsameVersion;
+ (BOOL)useNLETemplateForVersion:(id)a0;
+ (BOOL)useNLETemplateForModel:(id)a0;
+ (id)cutsameVersionForTemplateSource:(unsigned long long)a0;
+ (BOOL)shouldPreloadEffectForTemplateSource:(unsigned long long)a0;

@end
