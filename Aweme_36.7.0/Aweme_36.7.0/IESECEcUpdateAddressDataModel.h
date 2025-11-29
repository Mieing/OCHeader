@class NSDictionary;

@interface IESECEcUpdateAddressDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *address;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
