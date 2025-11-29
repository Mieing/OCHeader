@class NSNumber;

@interface BDCTSetCertStatusParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *cert_status;
@property (retain, nonatomic) NSNumber *manual_status;
@property (retain, nonatomic) NSNumber *age_range;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
