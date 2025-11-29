@class NSString, FinderLiveBattleInfo_CritQuestInfo;

@interface FinderLiveBattleInfo_PlayerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long rewardWecoin;
@property (nonatomic) unsigned int winningStreakCount;
@property (nonatomic) BOOL isAccepted;
@property (retain, nonatomic) FinderLiveBattleInfo_CritQuestInfo *critQuestInfo;
@property (nonatomic) unsigned long long extraRewardWecoin;
@property (nonatomic) BOOL isApplicant;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *boardKey;
@property (nonatomic) unsigned int boardType;
@property (retain, nonatomic) NSString *sdkUserId;
@property (nonatomic) unsigned int attackForegroundHeightPercentage;
@property (retain, nonatomic) NSString *attackForegroundGiftId;

+ (void)initialize;

@end
