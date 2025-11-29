@class NSString;

@interface BDXBridgeRedPacketFollowUserMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUserId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
