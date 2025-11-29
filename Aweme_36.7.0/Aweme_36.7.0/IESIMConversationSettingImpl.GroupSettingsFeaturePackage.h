@class NSDictionary;

@interface IESIMConversationSettingImpl.GroupSettingsFeaturePackage : MTLModel <MTLJSONSerializing> {
    void /* function */ features;
}

@property (nonatomic, copy) NSDictionary *features;

+ (id)featuresJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
