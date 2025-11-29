@class HTSLiveCommon, HTSLiveBattleSettings, BreakthroughInfo, SurvivalInfo;

@interface HTSLiveBattleStateSyncMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
@property (retain, nonatomic) BreakthroughInfo *breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (nonatomic) long long scoreVersion;

+ (id)descriptor;

@end
