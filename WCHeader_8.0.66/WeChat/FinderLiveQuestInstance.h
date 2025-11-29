@class NSString, NSMutableArray, FinderJumpInfo;

@interface FinderLiveQuestInstance : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSMutableArray *stageItems;
@property (nonatomic) unsigned int periodType;
@property (retain, nonatomic) NSMutableArray *progressItems;
@property (nonatomic) unsigned long long rewardBonusAmountInHeat;
@property (retain, nonatomic) NSString *configDesc;
@property (retain, nonatomic) NSString *questName;
@property (nonatomic) unsigned int rewardProvideType;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) NSMutableArray *bonusResults;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) NSString *bonusDescription;
@property (retain, nonatomic) FinderJumpInfo *bonusDetailsInfo;

+ (void)initialize;

@end
