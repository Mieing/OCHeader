@class IESLiveGetStrategyFactorDataModel;

@interface IESLiveGetStrategyFactorResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGetStrategyFactorDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
