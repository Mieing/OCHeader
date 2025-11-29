@class AWEIMCodeGenStrategyDynamicActionbarResponseModel, AWEIMCodeGenStrategyDynamicFeaturePanelResponseModel;

@interface AWEIMCodeGenV1ImStrategyDynamicAggregateResponse : AWEBaseResponseModel

@property (retain, nonatomic) AWEIMCodeGenStrategyDynamicActionbarResponseModel *actionbarResponseModel;
@property (retain, nonatomic) AWEIMCodeGenStrategyDynamicFeaturePanelResponseModel *featurePanelResponseModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
