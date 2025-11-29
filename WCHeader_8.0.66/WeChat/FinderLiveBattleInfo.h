@class NSString, FinderLiveBattleExtraInfo, NSData, NSMutableArray;

@interface FinderLiveBattleInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *battleId;
@property (nonatomic) unsigned long long battleSeq;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int timeLeft;
@property (retain, nonatomic) NSMutableArray *playerInfo;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned long long delayMs;
@property (nonatomic) unsigned int battleMode;
@property (retain, nonatomic) NSMutableArray *battleTeams;
@property (nonatomic) unsigned int indicatorType;
@property (retain, nonatomic) NSData *indicatorParameter;
@property (retain, nonatomic) FinderLiveBattleExtraInfo *extraInfo;
@property (nonatomic) unsigned int battleScope;
@property (nonatomic) BOOL isDisableNextBattle;
@property (nonatomic) unsigned int battleDuration;
@property (nonatomic) unsigned long long dataTimestampMs;
@property (nonatomic) unsigned int battleLayout;

+ (void)initialize;

@end
