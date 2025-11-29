@class NSNumber, NSString;

@interface IESECXBridgeEcSaasAuthenticationMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *authorization;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
