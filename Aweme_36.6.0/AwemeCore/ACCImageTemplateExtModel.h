@class NSArray, NSString, ACCImageTemplateLimitationsModel, ACCTemplateAuthorModel;

@interface ACCImageTemplateExtModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCTemplateAuthorModel *author;
@property (nonatomic) long long fragmentCount;
@property (retain, nonatomic) ACCImageTemplateLimitationsModel *limitations;
@property (copy, nonatomic) NSArray *qualityTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorJSONTransformer;
+ (id)limitationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
