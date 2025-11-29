@class NSDictionary, NSNumber, IESECEcSetAddressExtraParamsModel;

@interface IESECEcSetAddressParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *address;
@property (retain, nonatomic) NSNumber *sourceType;
@property (nonatomic) BOOL isSession;
@property (retain, nonatomic) IESECEcSetAddressExtraParamsModel *extraParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
