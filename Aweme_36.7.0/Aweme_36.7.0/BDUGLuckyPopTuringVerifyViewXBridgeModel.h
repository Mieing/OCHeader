@class NSString, NSDictionary;

@interface BDUGLuckyPopTuringVerifyViewXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSDictionary *decision;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
