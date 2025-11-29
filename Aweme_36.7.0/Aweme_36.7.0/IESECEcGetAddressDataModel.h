@class NSArray;

@interface IESECEcGetAddressDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *addressList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
