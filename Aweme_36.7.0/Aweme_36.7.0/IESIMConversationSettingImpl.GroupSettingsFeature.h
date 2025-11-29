@class NSArray, NSDictionary;

@interface IESIMConversationSettingImpl.GroupSettingsFeature : MTLModel <MTLJSONSerializing> {
    void /* function */ showRoles;
    void /* function */ editRoles;
    void /* function */ ext;
}

@property (nonatomic, copy) NSArray *showRoles;
@property (nonatomic, copy) NSArray *editRoles;
@property (nonatomic, copy) NSDictionary *ext;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
