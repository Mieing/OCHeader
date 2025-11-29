@class NSString;

@interface BDCTOpenVideoCertParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identity_code;
@property (copy, nonatomic) NSString *identity_name;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
