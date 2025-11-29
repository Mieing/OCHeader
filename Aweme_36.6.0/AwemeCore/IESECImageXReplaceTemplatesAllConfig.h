@class NSDictionary, NSArray, NSString;

@interface IESECImageXReplaceTemplatesAllConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *ecCommonTemplates;
@property (copy, nonatomic) NSDictionary *replaceTemplates;
@property (copy, nonatomic) NSDictionary *replaceOldTemplates;
@property (copy, nonatomic) NSArray *replaceObjTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replaceObjTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)parseReplaceTemplatesFromJSON:(id)a0;
- (void)parseEcCommonTemplatesFromJSON:(id)a0;
- (void)parseReplaceOldTemplatesFromJSON:(id)a0;
- (void)pareseConfig;
- (void).cxx_destruct;

@end
