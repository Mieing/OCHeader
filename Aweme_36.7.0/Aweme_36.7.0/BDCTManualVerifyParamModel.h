@class NSString, NSNumber;

@interface BDCTManualVerifyParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identity_name;
@property (copy, nonatomic) NSString *identity_code;
@property (retain, nonatomic) NSNumber *identity_type;
@property (retain, nonatomic) NSNumber *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
