@class NSString, NSArray, NSNumber;

@interface IESIMConversationSettingImpl.GroupSettingsSection : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ showRoles;
    void /* function */ items;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *showRoles;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) NSNumber *packetID;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
