@interface NLEAlgorithmResourceProtocol_OC : NLEResourceProtocol_OC

+ (id)PARAM_REQUIREMENTS;
+ (id)PARAM_MODEL_NAME_MAP_STRING;
+ (id)PARAM_MODEL_NAME;
+ (id)PARAM_BUSI_ID;
+ (id)EXTRA_PARAM_INCLUDE_BUILD_IN_RES;
+ (BOOL)isAlgorithmResource:(id)a0;
+ (id)PLATFORM_STRING;

- (id)initWithRequirements:(id)a0 modelNameMapString:(id)a1;
- (id)initWithModelName:(id)a0;

@end
