@class NSDictionary;

@interface IESIMConversationSettingImpl.GroupSettingsResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ featureMap;
    void /* function */ settingsLayoutMap;
    void /* function */ managementLayoutMap;
}

@property (nonatomic, copy) NSDictionary *featureMap;
@property (nonatomic, copy) NSDictionary *settingsLayoutMap;
@property (nonatomic, copy) NSDictionary *managementLayoutMap;

+ (id)featureMapJSONTransformer;
+ (id)settingsLayoutMapJSONTransformer;
+ (id)managementLayoutMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
