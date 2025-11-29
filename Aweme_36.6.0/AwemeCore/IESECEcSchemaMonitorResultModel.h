@class IESECEcSchemaMonitorDataModel;

@interface IESECEcSchemaMonitorResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECEcSchemaMonitorDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
