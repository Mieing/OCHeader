@class NSNumber, NSArray;

@interface BDXBridgeShowRewardVideoAdRewardAgainConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxCount;
@property (retain, nonatomic) NSArray *rewardTitles;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
