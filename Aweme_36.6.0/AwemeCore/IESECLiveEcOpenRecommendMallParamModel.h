@class NSString, IESECLiveEcOpenRecommendMallOptionalStrategyModel, NSDictionary;

@interface IESECLiveEcOpenRecommendMallParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *mallScheme;
@property (retain, nonatomic) IESECLiveEcOpenRecommendMallOptionalStrategyModel *optionalStrategy;
@property (copy, nonatomic) NSString *needActionParamsType;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
