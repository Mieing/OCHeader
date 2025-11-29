@class NSMutableDictionary, TeamTask_GiftPanelConfig, GPBInt64Array, TeamTask_ExtraConfig, GPBInt64ObjectDictionary;

@interface TeamTask_Config : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64ObjectDictionary *periodConfig;
@property (readonly, nonatomic) unsigned long long periodConfig_Count;
@property (nonatomic) long long rewardBuffMultiple;
@property (nonatomic) int taskType;
@property (retain, nonatomic) TeamTask_ExtraConfig *extraConfig;
@property (nonatomic) BOOL hasExtraConfig;
@property (nonatomic) int targetType;
@property (nonatomic) int rewardType;
@property (nonatomic) int teamWorkTeamTaskType;
@property (retain, nonatomic) GPBInt64Array *stageRewardBuffMultipleArray;
@property (readonly, nonatomic) unsigned long long stageRewardBuffMultipleArray_Count;
@property (retain, nonatomic) TeamTask_GiftPanelConfig *giftPanelConfig;
@property (nonatomic) BOOL hasGiftPanelConfig;
@property (retain, nonatomic) NSMutableDictionary *trackingParams;
@property (readonly, nonatomic) unsigned long long trackingParams_Count;

+ (id)descriptor;

@end
