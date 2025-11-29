@class NSString, BDXBridgeShowRewardVideoAdRewardAgainConfig, NSDictionary;

@interface BDXBridgeShowRewardVideoAdMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) BDXBridgeShowRewardVideoAdRewardAgainConfig *rewardAgainConfig;
@property (copy, nonatomic) NSDictionary *businessExtraData;

+ (id)requiredKeyPaths;
+ (id)rewardAgainConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
