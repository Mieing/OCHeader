@class NSString, NSDictionary, NSArray, BDXBridgeTtcjpayCreateRewardedVideoRetentionModel, NSNumber;

@interface AWEPayXBridgeTtcjpayCreateRewardedVideoMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *rit;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) NSNumber *isBizReward;
@property (copy, nonatomic) NSString *extraParamStr;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) NSArray *moreRewardInfos;
@property (copy, nonatomic) NSDictionary *rewardInfo;
@property (retain, nonatomic) BDXBridgeTtcjpayCreateRewardedVideoRetentionModel *retentionModel;
@property (copy, nonatomic) NSDictionary *extraVideoData;
@property (copy, nonatomic) NSDictionary *bizLogCommonParams;

+ (id)requiredKeyPaths;
+ (id)moreRewardInfosJSONTransformer;
+ (id)retentionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
