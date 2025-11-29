@class IESGCPGamePreloadImageDataModel;

@interface IESGCPGamePreloadImageResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGamePreloadImageDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
