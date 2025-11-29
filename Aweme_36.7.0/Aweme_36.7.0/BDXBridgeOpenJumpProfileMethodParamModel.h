@class NSString, NSNumber;

@interface BDXBridgeOpenJumpProfileMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *openid;
@property (copy, nonatomic) NSString *iosIdentity;
@property (copy, nonatomic) NSString *androidIdentity;
@property (retain, nonatomic) NSNumber *version;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
