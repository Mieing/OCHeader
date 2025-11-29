@class AWEMediaTemplateListPanelDataResponseModel;

@interface AWEMediaTemplateFetchPanelResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMediaTemplateListPanelDataResponseModel *panelData;

+ (id)panelDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
