@class NSNumber, NSDictionary;

@interface IESECEcLiveCardActionParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *actionType;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
