@class NSNumber;

@interface IESECEcGetAddressParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *addressType;
@property (nonatomic) BOOL needDetail;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
