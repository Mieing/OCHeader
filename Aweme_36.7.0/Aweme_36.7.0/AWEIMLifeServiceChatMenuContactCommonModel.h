@class NSString;

@interface AWEIMLifeServiceChatMenuContactCommonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
