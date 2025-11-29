@class AWEMediaTemplateCategoryDataResponseModel;

@interface AWEMediaTemplateFetchCategoryResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMediaTemplateCategoryDataResponseModel *categoryData;

+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
