@class NSString;

@interface TeamTask_Reward : IESLivePBBaseMessage

@property (nonatomic) long long beginSecondRelativeBattleFinish;
@property (nonatomic) long long endSecondRelativeBattleFinish;
@property (nonatomic) long long rewardScore;
@property (nonatomic) long long currentRewardBuffMultiple;
@property (copy, nonatomic) NSString *rewardScoreStr;

+ (id)descriptor;

@end
