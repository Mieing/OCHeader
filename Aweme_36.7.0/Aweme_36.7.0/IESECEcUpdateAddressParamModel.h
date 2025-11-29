@class NSDictionary, NSString;

@interface IESECEcUpdateAddressParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *address;
@property (copy, nonatomic) NSString *action;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
