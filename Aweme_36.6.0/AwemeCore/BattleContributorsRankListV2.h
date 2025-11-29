@class TeamTask, NSMutableDictionary, BattleSettings, NSString;

@interface BattleContributorsRankListV2 : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableDictionary *anchorContributors;
@property (readonly, nonatomic) unsigned long long anchorContributors_Count;
@property (retain, nonatomic) TeamTask *teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (retain, nonatomic) BattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (copy, nonatomic) NSString *loserId;
@property (copy, nonatomic) NSString *loserIdStr;

+ (id)descriptor;

@end
