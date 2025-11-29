@class NSNumber, NSDictionary;

@interface BDXBridgeThirdPartyAuthResponseModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSDictionary *response;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
