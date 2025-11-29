@class IESGCPOpenHeliumGameDataModel;

@interface IESGCPOpenHeliumGameResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPOpenHeliumGameDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
