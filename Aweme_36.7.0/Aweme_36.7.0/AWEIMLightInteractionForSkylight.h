@class NSString;

@interface AWEIMLightInteractionForSkylight : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *btnIconUrl;
@property (copy, nonatomic) NSString *btnIconUrlDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
