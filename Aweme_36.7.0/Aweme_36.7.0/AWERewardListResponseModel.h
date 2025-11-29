@class NSArray;

@interface AWERewardListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *rewardModelList;
@property (nonatomic) long long totalRewards;

+ (id)rewardModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
