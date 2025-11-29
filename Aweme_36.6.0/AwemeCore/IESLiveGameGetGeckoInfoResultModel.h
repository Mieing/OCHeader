@class IESLiveGameGetGeckoInfoDataModel;

@interface IESLiveGameGetGeckoInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGameGetGeckoInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
