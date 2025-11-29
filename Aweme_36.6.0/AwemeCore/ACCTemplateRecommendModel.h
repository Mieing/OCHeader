@class NSArray, NSString, ACCLogPbInfo;

@interface ACCTemplateRecommendModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSArray *recommendTemplates;
@property (retain, nonatomic) ACCLogPbInfo *logPb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendTemplatesJSONTransformer;
+ (id)logPbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
