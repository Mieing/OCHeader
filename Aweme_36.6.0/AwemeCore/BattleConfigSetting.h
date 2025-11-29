@class SpecifyGiftConfig, InteractConfig, SurvivalConfig, VoteSetting, SeasonConfig, CustomConfig, BreakthroughConfig, NSString, BattleSelfSettingRate, BattleShellConfig, BattleSelfData, BattleCloudCollaborateConfig, BattleAuxiliaryConfig;

@interface BattleConfigSetting : IESLivePBBaseMessage

@property (readonly, nonatomic) BOOL isShell;
@property (nonatomic) int modType;
@property (retain, nonatomic) BattleSelfData *selfData;
@property (nonatomic) BOOL hasSelfData;
@property (retain, nonatomic) VoteSetting *voteData;
@property (nonatomic) BOOL hasVoteData;
@property (retain, nonatomic) BattleSelfSettingRate *selfSettingRate;
@property (nonatomic) BOOL hasSelfSettingRate;
@property (nonatomic) long long flexActivityId;
@property (retain, nonatomic) BattleShellConfig *shellConfig;
@property (nonatomic) BOOL hasShellConfig;
@property (retain, nonatomic) BreakthroughConfig *breakthroughConfig;
@property (nonatomic) BOOL hasBreakthroughConfig;
@property (retain, nonatomic) SpecifyGiftConfig *specifyGiftConfig;
@property (nonatomic) BOOL hasSpecifyGiftConfig;
@property (nonatomic) int playMode;
@property (nonatomic) int teamMode;
@property (nonatomic) int activityMode;
@property (retain, nonatomic) SurvivalConfig *survivalConfig;
@property (nonatomic) BOOL hasSurvivalConfig;
@property (retain, nonatomic) SeasonConfig *seasonConfig;
@property (nonatomic) BOOL hasSeasonConfig;
@property (retain, nonatomic) CustomConfig *customConfig;
@property (nonatomic) BOOL hasCustomConfig;
@property (nonatomic) long long fromAnchorId;
@property (copy, nonatomic) NSString *activityId;
@property (retain, nonatomic) BattleAuxiliaryConfig *auxiliaryConfig;
@property (nonatomic) BOOL hasAuxiliaryConfig;
@property (retain, nonatomic) BattleCloudCollaborateConfig *cloudCollaborateConfig;
@property (nonatomic) BOOL hasCloudCollaborateConfig;
@property (copy, nonatomic) NSString *fromAnchorIdStr;
@property (retain, nonatomic) InteractConfig *interactConfig;
@property (nonatomic) BOOL hasInteractConfig;

+ (id)descriptor;

@end
