@class IESGCPGetGameCPReserveStatusDataModel;

@interface IESGCPGetGameCPReserveStatusResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGetGameCPReserveStatusDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
