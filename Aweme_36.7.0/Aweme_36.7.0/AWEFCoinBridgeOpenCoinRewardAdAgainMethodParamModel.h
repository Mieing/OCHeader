@class NSString, NSDictionary;

@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSDictionary *rewardInfo;
@property (copy, nonatomic) NSString *reqFrom;
@property (nonatomic) BOOL isFromDouyinIncentivePendant;
@property (copy, nonatomic) NSDictionary *firstADRetentionConfig;
@property (copy, nonatomic) NSDictionary *firstADCloseButtonConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
