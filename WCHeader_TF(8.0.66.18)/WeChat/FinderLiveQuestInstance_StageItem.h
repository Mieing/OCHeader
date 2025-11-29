@class NSString, NSMutableArray;

@interface FinderLiveQuestInstance_StageItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *targetItems;
@property (nonatomic) unsigned int rewardBonusPercentage;
@property (retain, nonatomic) NSString *stageName;
@property (nonatomic) unsigned int progressStageStatus;
@property (nonatomic) unsigned int intervalLimit;
@property (nonatomic) unsigned long long accomplishedTime;
@property (nonatomic) unsigned int bonusCount;
@property (retain, nonatomic) NSMutableArray *bonusRules;
@property (nonatomic) unsigned int stageId;

+ (void)initialize;

@end
