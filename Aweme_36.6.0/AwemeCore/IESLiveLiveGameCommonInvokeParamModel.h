@class NSString, NSDictionary;

@interface IESLiveLiveGameCommonInvokeParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *param;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
