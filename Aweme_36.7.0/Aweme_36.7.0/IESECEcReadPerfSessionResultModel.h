@class IESECEcReadPerfSessionDataModel;

@interface IESECEcReadPerfSessionResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECEcReadPerfSessionDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
