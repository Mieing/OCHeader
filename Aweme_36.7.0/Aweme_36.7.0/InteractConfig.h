@class NSString, InteractEffectInfo, InteractRewardPunishConfig, HTSLiveImage, NSMutableArray, InteractCompeteEvalConfig;

@interface InteractConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) int interactType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) InteractEffectInfo *battleEffectConfig;
@property (nonatomic) BOOL hasBattleEffectConfig;
@property (retain, nonatomic) InteractRewardPunishConfig *rewardPunishConfig;
@property (nonatomic) BOOL hasRewardPunishConfig;
@property (nonatomic) int evalType;
@property (retain, nonatomic) InteractCompeteEvalConfig *competeEvalConfig;
@property (nonatomic) BOOL hasCompeteEvalConfig;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *playRuleArray;
@property (readonly, nonatomic) unsigned long long playRuleArray_Count;

+ (id)descriptor;

@end
