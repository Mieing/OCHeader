@class NSString, NSDictionary, AWEURLModel;

@interface AWEIMRandomInteractiveEmojiInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imageId;
@property (copy, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageUrlJSONTransformer;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithResponse:(id)a0 displayName:(id)a1;
- (void).cxx_destruct;

@end
