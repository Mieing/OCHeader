@class NSArray, NSDictionary, NSString;

@interface IESECImageXReplaceOldTemplatesConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *targetTemplate;
@property (copy, nonatomic) NSArray *customParams;
@property (copy, nonatomic) NSDictionary *finalParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)matchTemplatesConfigWithURLString:(id)a0;
- (void).cxx_destruct;

@end
