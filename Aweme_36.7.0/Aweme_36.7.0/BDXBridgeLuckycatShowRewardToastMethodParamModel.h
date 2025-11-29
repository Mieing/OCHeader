@class NSString, NSNumber;

@interface BDXBridgeLuckycatShowRewardToastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *amount;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
