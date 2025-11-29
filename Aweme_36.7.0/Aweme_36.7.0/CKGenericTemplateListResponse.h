@class NSDictionary, NSString;

@interface CKGenericTemplateListResponse : CKBaseResponseModel

@property (copy, nonatomic) NSDictionary *recommendTemplates;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSString *regionKey;
@property (readonly, copy, nonatomic) NSString *panelId;
@property (readonly, copy, nonatomic) NSString *panelKey;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *iconUri;
@property (readonly, copy, nonatomic) NSDictionary *dataMap;

+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)generateRecommendTemplates:(id)a0;
- (void).cxx_destruct;

@end
