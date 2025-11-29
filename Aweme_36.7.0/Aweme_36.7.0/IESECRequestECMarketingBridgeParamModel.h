@class NSString;

@interface IESECRequestECMarketingBridgeParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) id params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
