@class NSDictionary;

@interface AWELiveCommercialLotteryResultResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL isCandidate;
@property (copy, nonatomic) NSDictionary *lotteryInfo;
@property (copy, nonatomic) NSDictionary *userCondition;
@property (copy, nonatomic) NSDictionary *userLuckyInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)lotteryStatus;
- (id)lotteryResultURL;
- (void).cxx_destruct;

@end
