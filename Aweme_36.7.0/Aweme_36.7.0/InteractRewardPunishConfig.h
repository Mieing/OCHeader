@class InteractEffectInfo;

@interface InteractRewardPunishConfig : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEffectInfo *rewardEffect;
@property (nonatomic) BOOL hasRewardEffect;
@property (retain, nonatomic) InteractEffectInfo *punishEffect;
@property (nonatomic) BOOL hasPunishEffect;

+ (id)descriptor;

@end
