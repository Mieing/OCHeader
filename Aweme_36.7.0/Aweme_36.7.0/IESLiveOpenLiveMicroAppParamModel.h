@class NSString, IESLiveOpenLiveMicroAppParamsModel;

@interface IESLiveOpenLiveMicroAppParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESLiveOpenLiveMicroAppParamsModel *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
