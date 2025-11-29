@class BattleMode, NSString, BattleSkinConfig, BreakthroughInfo, BattleSettings, BattleTitleConfig, ChannelInfo, GPBInt64ObjectDictionary, NSMutableArray, TeamTask, NSMutableDictionary, SurvivalInfo;

@interface BattleStatsMeta : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) long long battleId;
@property (retain, nonatomic) BattleMode *battleMode;
@property (nonatomic) BOOL hasBattleMode;
@property (retain, nonatomic) BattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) NSMutableArray *battleArmiesArray;
@property (readonly, nonatomic) unsigned long long battleArmiesArray_Count;
@property (retain, nonatomic) ChannelInfo *channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (retain, nonatomic) NSMutableArray *battleScoresArray;
@property (readonly, nonatomic) unsigned long long battleScoresArray_Count;
@property (retain, nonatomic) NSMutableArray *anchorsArray;
@property (readonly, nonatomic) unsigned long long anchorsArray_Count;
@property (copy, nonatomic) NSString *loserId;
@property (nonatomic) int battleType;
@property (retain, nonatomic) GPBInt64ObjectDictionary *multiPkTeam;
@property (readonly, nonatomic) unsigned long long multiPkTeam_Count;
@property (retain, nonatomic) BattleTitleConfig *titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
@property (retain, nonatomic) BattleTitleConfig *punishConfig;
@property (nonatomic) BOOL hasPunishConfig;
@property (nonatomic) int skinType;
@property (retain, nonatomic) TeamTask *teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (copy, nonatomic) NSString *teamTaskJson;
@property (retain, nonatomic) BattleSkinConfig *skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (retain, nonatomic) BreakthroughInfo *breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
@property (copy, nonatomic) NSString *battleEffectInfo;
@property (copy, nonatomic) NSString *eventTrackingInfo;
@property (copy, nonatomic) NSString *lynxData;

+ (id)descriptor;

@end
