@class AWEMediaTemplateCategoryDataResponseModel, AWEMediaTemplateModel, AWEMediaTemplateFilteredTemplateModel;

@interface AWEMediaTemplateDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMediaTemplateCategoryDataResponseModel *categoryData;
@property (retain, nonatomic) AWEMediaTemplateModel *templateModel;
@property (retain, nonatomic) AWEMediaTemplateFilteredTemplateModel *filterReason;

+ (id)categoryDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
