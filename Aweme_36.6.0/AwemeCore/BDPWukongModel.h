@class NSDictionary;

@interface BDPWukongModel : IESLiveDynamicModel

@property (copy, nonatomic) NSDictionary *wkBusiExtraInfo;

+ (id)modelPropertyBlacklist;
+ (id)modelFromDictionary:(id)a0;
+ (void)bootstrapLaunch;
+ (id)validateDataDict:(id)a0 modelClass:(Class)a1 modelType:(long long)a2 apiInfo:(id)a3;
+ (BOOL)isDisableValidateAPI:(id)a0 modelType:(long long)a1;

- (id)getNativeEnumNumberArray:(id)a0 enumMap:(id)a1;
- (id)getDictEnumStringArray:(id)a0 enumMap:(id)a1;
- (id)copy;
- (void).cxx_destruct;
- (id)toDictionary;

@end
