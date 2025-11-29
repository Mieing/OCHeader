@interface ACCMVTemplateHelper : NSObject

+ (id)mvTypeStringFromMVType:(long long)a0 isImageTemplate:(BOOL)a1;
+ (id)mvProviderFromAwemeModel:(id)a0;
+ (id)mvAbilityFromAwemeModel:(id)a0;
+ (id)generateOriginMVTypeStringFromMVType:(long long)a0;
+ (id)mvAbilityFromTemplateModel:(id)a0;
+ (BOOL)hasPreprocessAbility:(id)a0;
+ (BOOL)hasPreProcessFeature:(id)a0;

@end
