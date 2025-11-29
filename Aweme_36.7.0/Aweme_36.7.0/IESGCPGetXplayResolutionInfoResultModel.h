@class IESGCPGetXplayResolutionInfoDataModel;

@interface IESGCPGetXplayResolutionInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGetXplayResolutionInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
