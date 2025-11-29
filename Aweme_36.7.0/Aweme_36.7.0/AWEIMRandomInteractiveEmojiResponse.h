@class NSString, NSDictionary;

@interface AWEIMRandomInteractiveEmojiResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imageId;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *imageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
