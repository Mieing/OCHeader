@class IESGCPGetXplayCollectStateDataModel;

@interface IESGCPGetXplayCollectStateResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGetXplayCollectStateDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
