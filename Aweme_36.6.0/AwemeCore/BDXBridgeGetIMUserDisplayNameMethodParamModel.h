@class NSString;

@interface BDXBridgeGetIMUserDisplayNameMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
