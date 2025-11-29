@class BattleSelfSettingRate, NSString, BattleContributorsRankListV2, BattleArimesRanklistResult_UserInfo, BattleArimesRanklistResult_PromptInfo, BattleArimesRanklistResult_AuxiliaryInfo, TeamTask, BattleRankUser, NSMutableArray, BattleArimesRanklistResult_TipBar, BattleArimesRanklistResult_BattleDetail, BattleConfigSetting;

@interface BattleArimesRanklistResult_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (retain, nonatomic) BattleArimesRanklistResult_TipBar *tipBar;
@property (nonatomic) BOOL hasTipBar;
@property (retain, nonatomic) TeamTask *teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (nonatomic) int teamTaskSelfStatus;
@property (retain, nonatomic) BattleContributorsRankListV2 *rankListV2;
@property (nonatomic) BOOL hasRankListV2;
@property (retain, nonatomic) BattleRankUser *selfRankInfo;
@property (nonatomic) BOOL hasSelfRankInfo;
@property (copy, nonatomic) NSString *mvpUid;
@property (nonatomic) long long contributerTotalUv;
@property (copy, nonatomic) NSString *anchorRelativeScore;
@property (nonatomic) long long anchorRank;
@property (copy, nonatomic) NSString *des;
@property (copy, nonatomic) NSString *desSub;
@property (retain, nonatomic) BattleSelfSettingRate *selfData;
@property (nonatomic) BOOL hasSelfData;
@property (retain, nonatomic) BattleArimesRanklistResult_BattleDetail *battleDetail;
@property (nonatomic) BOOL hasBattleDetail;
@property (copy, nonatomic) NSString *pkValueUnitType;
@property (copy, nonatomic) NSString *pkValueDes;
@property (nonatomic) BOOL battleDetailSwitch;
@property (retain, nonatomic) BattleArimesRanklistResult_UserInfo *operationUserInfo;
@property (nonatomic) BOOL hasOperationUserInfo;
@property (copy, nonatomic) NSString *totalUvText;
@property (retain, nonatomic) BattleArimesRanklistResult_PromptInfo *promptInfo;
@property (nonatomic) BOOL hasPromptInfo;
@property (retain, nonatomic) BattleConfigSetting *battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (retain, nonatomic) BattleArimesRanklistResult_AuxiliaryInfo *auxiliaryInfo;
@property (nonatomic) BOOL hasAuxiliaryInfo;
@property (copy, nonatomic) NSString *mvpOpenId;

+ (id)descriptor;

@end
