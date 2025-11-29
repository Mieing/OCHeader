@class NSString;

@interface BDXBridgeUnRegisterPoiFooterCardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *cardKey;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
