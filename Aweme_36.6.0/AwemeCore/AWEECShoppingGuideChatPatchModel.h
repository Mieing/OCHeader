@class NSString, NSArray;

@interface AWEECShoppingGuideChatPatchModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
