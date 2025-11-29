@class IESECEcGetAddressDataModel;

@interface IESECEcGetAddressResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECEcGetAddressDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
