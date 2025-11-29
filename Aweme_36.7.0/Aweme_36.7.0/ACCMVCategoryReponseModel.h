@class NSArray;

@interface ACCMVCategoryReponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *categories;

+ (id)categoriesJSONTransformer;
+ (id)createFromLokiCategories:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
