@class NSString;

@interface AWEWeekendRewardMessageModel : AWEBaseApiModel

@property (nonatomic) long long rewardNum;
@property (copy, nonatomic) NSString *rewardType;
@property (copy, nonatomic) NSString *rewardTag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
