@class NSNumber, NSString;

@interface IESLiveRechargeScreenShieldParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *pageType;
@property (retain, nonatomic) NSNumber *requestType;
@property (copy, nonatomic) NSString *bizType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
