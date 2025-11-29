@class NSString, NSArray, NSDictionary;

@interface AWEIMEmojiPackageDetailResponseInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *resources;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)resourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
