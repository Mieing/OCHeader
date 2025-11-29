@class NSString, NSDictionary;

@interface IESECShopHybridSecurityConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *configName;
@property (nonatomic) long long verifyMode;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *jsbAllowList;
@property (copy, nonatomic) NSDictionary *paramLimitSetting;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configDictJSONTransformerForClass:(Class)a0;
+ (id)jsbAllowListJSONTransformer;
+ (id)paramLimitSettingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
