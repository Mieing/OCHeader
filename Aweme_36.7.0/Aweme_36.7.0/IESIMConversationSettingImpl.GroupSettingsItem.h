@class NSNumber, NSString, NSArray;

@interface IESIMConversationSettingImpl.GroupSettingsItem : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ subItems;
    void /* function */ describe;
}

@property (nonatomic, retain) NSNumber *featureId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *subItems;
@property (nonatomic, copy) NSString *describe;
@property (nonatomic, retain) NSNumber *subItemShowType;

+ (id)subItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
