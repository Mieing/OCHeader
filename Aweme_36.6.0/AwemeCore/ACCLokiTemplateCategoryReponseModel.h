@class NSArray;

@interface ACCLokiTemplateCategoryReponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *childrenCategories;
@property (copy, nonatomic) NSArray *defaultTemplates;

+ (id)categoriesJSONTransformer;
+ (id)childrenCategoriesJSONTransformer;
+ (id)defaultTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
