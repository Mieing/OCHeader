@class NSString;

@interface AWEIMLifeServiceChatMenuFunctionJumpModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long schemaType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
