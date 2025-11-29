@class OperationalPlay, NSString, BattleSkinConfig, BreakthroughInfo, SurvivalInfo, NSMutableDictionary, GPBInt64ObjectDictionary, HTSLiveCommon, NSMutableArray, HTSLiveLinkmicBattleFinishExtra, HTSLiveBattleSettings;

@interface HTSLiveLinkMicBattleFinish : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (retain, nonatomic) NSMutableArray *battleArmiesArray;
@property (readonly, nonatomic) unsigned long long battleArmiesArray_Count;
@property (retain, nonatomic) NSMutableArray *battleScoresArray;
@property (readonly, nonatomic) unsigned long long battleScoresArray_Count;
@property (retain, nonatomic) NSMutableArray *anchorsArray;
@property (readonly, nonatomic) unsigned long long anchorsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *gradeChanges;
@property (readonly, nonatomic) unsigned long long gradeChanges_Count;
@property (retain, nonatomic) OperationalPlay *operationalPlay;
@property (nonatomic) BOOL hasOperationalPlay;
@property (nonatomic) int endReason;
@property (copy, nonatomic) NSString *cutShortPrompt;
@property (copy, nonatomic) NSString *cutShortToast;
@property (nonatomic) BOOL cutShortWin;
@property (retain, nonatomic) NSMutableDictionary *userInfos;
@property (readonly, nonatomic) unsigned long long userInfos_Count;
@property (nonatomic) int killFinishType;
@property (retain, nonatomic) BreakthroughInfo *breakthroughInfo;
@property (nonatomic) BOOL hasBreakthroughInfo;
@property (retain, nonatomic) BattleSkinConfig *skinConfig;
@property (nonatomic) BOOL hasSkinConfig;
@property (nonatomic) int skinType;
@property (retain, nonatomic) SurvivalInfo *survivalInfo;
@property (nonatomic) BOOL hasSurvivalInfo;
@property (copy, nonatomic) NSString *eventTrackingInfo;
@property (retain, nonatomic) GPBInt64ObjectDictionary *auxiliaryScoreInfos;
@property (readonly, nonatomic) unsigned long long auxiliaryScoreInfos_Count;
@property (retain, nonatomic) HTSLiveLinkmicBattleFinishExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
