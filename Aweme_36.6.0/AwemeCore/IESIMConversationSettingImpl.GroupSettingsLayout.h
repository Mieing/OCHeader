@class NSArray;

@interface IESIMConversationSettingImpl.GroupSettingsLayout : MTLModel <MTLJSONSerializing> {
    void /* function */ sections;
}

@property (nonatomic, copy) NSArray *sections;

+ (id)sectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
