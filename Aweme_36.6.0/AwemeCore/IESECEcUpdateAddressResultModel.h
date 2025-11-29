@class IESECEcUpdateAddressDataModel;

@interface IESECEcUpdateAddressResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECEcUpdateAddressDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
