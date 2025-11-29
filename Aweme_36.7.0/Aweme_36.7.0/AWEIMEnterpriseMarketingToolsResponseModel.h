@class AWEIMEnterpriseMarketingToolsMenuModel;

@interface AWEIMEnterpriseMarketingToolsResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMEnterpriseMarketingToolsMenuModel *menuModel;

+ (id)menuModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
