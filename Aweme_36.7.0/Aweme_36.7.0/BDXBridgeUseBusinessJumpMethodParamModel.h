@class NSString, NSDictionary;

@interface BDXBridgeUseBusinessJumpMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSDictionary *businessInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
