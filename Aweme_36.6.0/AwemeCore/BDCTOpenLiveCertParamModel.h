@class NSString, NSDictionary;

@interface BDCTOpenLiveCertParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identity_code;
@property (copy, nonatomic) NSString *identity_name;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *language;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
