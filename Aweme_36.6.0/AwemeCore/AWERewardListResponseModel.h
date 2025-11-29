@class NSArray;

@interface AWERewardListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *rewardModelList;
@property (nonatomic) long long totalRewards;
@property (nonatomic) long long payTotalAmount;
@property (nonatomic) long long freeTotalAmount;

+ (id)rewardModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
