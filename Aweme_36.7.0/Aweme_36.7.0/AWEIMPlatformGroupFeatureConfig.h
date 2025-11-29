@class NSDictionary, NSString;

@interface AWEIMPlatformGroupFeatureConfig : MTLModel <BDModelCustom, MTLJSONSerializing>

@property (nonatomic) long long conversationFeatureConfigType;
@property (copy, nonatomic) NSDictionary *featureType_featureItem_dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)featureType_featureItem_dictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawDictionary:(id)a0;

@end
