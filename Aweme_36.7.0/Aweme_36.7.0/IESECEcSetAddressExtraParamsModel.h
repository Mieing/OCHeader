@interface IESECEcSetAddressExtraParamsModel : IESLiveBridgeModel

@property (nonatomic) BOOL syncWrite;
@property (nonatomic) BOOL saveCurrentAddress;
@property (nonatomic) BOOL callbackWithoutNetwork;

+ (id)modelCustomPropertyMapper;

@end
