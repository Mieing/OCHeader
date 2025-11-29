@class NSString, NSNumber;

@interface BDCTPreManualCheckParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identity_name;
@property (copy, nonatomic) NSString *identity_code;
@property (retain, nonatomic) NSNumber *identity_type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
