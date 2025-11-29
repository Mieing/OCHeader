@class NSString, NSNumber;

@interface BDXBridgeThirdPartyAuthMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *platform;
@property (retain, nonatomic) NSNumber *need_raw_data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
