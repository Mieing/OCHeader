@class NSString, NSMutableArray;

@interface FinderLiveBattleInfo_CritQuestInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *progress;
@property (retain, nonatomic) NSMutableArray *reward;
@property (nonatomic) BOOL deliveryCritQuest;
@property (nonatomic) BOOL isCritQuestAccomplished;
@property (nonatomic) unsigned int currentStage;
@property (nonatomic) unsigned int stageTimeLeft;
@property (nonatomic) unsigned int currentStageDuration;
@property (retain, nonatomic) NSString *critQuestId;

+ (void)initialize;

@end
