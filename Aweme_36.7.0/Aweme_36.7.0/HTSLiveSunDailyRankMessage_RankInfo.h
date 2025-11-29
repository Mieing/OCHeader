@interface HTSLiveSunDailyRankMessage_RankInfo : IESLivePBBaseMessage

@property (nonatomic) long long rankType;
@property (nonatomic) long long rank;

+ (id)descriptor;

@end
