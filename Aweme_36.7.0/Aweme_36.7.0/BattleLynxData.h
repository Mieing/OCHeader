@class TeamTask, BattleConfigSetting, SurvivalConfig, BattleAuxiliaryData, SurvivalInfo, BattleLynxData_RankSeasonInfo, BreakthroughInfo, GPBInt64ObjectDictionary, NSMutableArray, BattleTitleConfig, BattleEffectInfo, BattleLynxData_CloudCollaborateConfig, BattleSkinConfig;

@interface BattleLynxData : IESLivePBBaseMessage

@property (retain, nonatomic) BattleConfigSetting *battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (retain, nonatomic) BattleSkinConfig *skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (retain, nonatomic) BreakthroughInfo *breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (retain, nonatomic) BattleTitleConfig *titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
@property (retain, nonatomic) BattleTitleConfig *punishConfig;
@property (nonatomic) BOOL hasPunishConfig;
@property (retain, nonatomic) BattleEffectInfo *battleEffectInfo;
@property (nonatomic) BOOL hasBattleEffectInfo;
@property (retain, nonatomic) GPBInt64ObjectDictionary *auxiliaryInfo;
@property (readonly, nonatomic) unsigned long long auxiliaryInfo_Count;
@property (retain, nonatomic) SurvivalConfig *survivalConfig;
@property (nonatomic) BOOL hasSurvivalConfig;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
@property (retain, nonatomic) GPBInt64ObjectDictionary *battleFinishData;
@property (readonly, nonatomic) unsigned long long battleFinishData_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *auxiliaryEffectInfo;
@property (readonly, nonatomic) unsigned long long auxiliaryEffectInfo_Count;
@property (retain, nonatomic) TeamTask *teamTaskInfo;
@property (nonatomic) BOOL hasTeamTaskInfo;
@property (retain, nonatomic) BattleAuxiliaryData *auxiliaryData;
@property (nonatomic) BOOL hasAuxiliaryData;
@property (retain, nonatomic) NSMutableArray *preloadPkAssetIdsArray;
@property (readonly, nonatomic) unsigned long long preloadPkAssetIdsArray_Count;
@property (retain, nonatomic) BattleLynxData_RankSeasonInfo *rankSeasonInfo;
@property (nonatomic) BOOL hasRankSeasonInfo;
@property (retain, nonatomic) BattleLynxData_CloudCollaborateConfig *cloudCollaborateConfig;
@property (nonatomic) BOOL hasCloudCollaborateConfig;
@property (retain, nonatomic) NSMutableArray *preloadAwemeLokiAssetIdsArray;
@property (readonly, nonatomic) unsigned long long preloadAwemeLokiAssetIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *preloadPcLokiAssetIdsArray;
@property (readonly, nonatomic) unsigned long long preloadPcLokiAssetIdsArray_Count;

+ (id)descriptor;

@end
