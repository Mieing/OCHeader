@class IESGCPPreloadInteractGameDataModel;

@interface IESGCPPreloadInteractGameResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPPreloadInteractGameDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
