@class NSString, NSNumber;

@interface BDXBridgeAccountThirdPartyAuthMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) NSNumber *needRawData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
