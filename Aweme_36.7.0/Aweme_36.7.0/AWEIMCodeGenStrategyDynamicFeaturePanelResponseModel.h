@class NSString, NSDictionary;

@interface AWEIMCodeGenStrategyDynamicFeaturePanelResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *dynamicResults;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
