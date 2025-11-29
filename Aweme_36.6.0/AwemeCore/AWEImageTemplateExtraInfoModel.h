@class NSArray, NSDictionary, NSString, AWEImageTemplateLitmitModel, AWEImageTemplateAuthorInfoModel;

@interface AWEImageTemplateExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEImageTemplateAuthorInfoModel *templateAuthor;
@property (nonatomic) long long fragmentCount;
@property (retain, nonatomic) AWEImageTemplateLitmitModel *imageTemplateLimit;
@property (copy, nonatomic) NSArray *qualityTags;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateAuthorJSONTransformer;
+ (id)imageTemplateLimitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
