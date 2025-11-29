@class NSString;

@interface BDXBridgeShowAuthCaptchaPopUpMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *mobile;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
