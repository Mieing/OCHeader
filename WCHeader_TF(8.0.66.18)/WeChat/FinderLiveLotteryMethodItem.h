@class FinderLiveLotteryAttendMethod, NSString, FinderLiveLotteryPrizeMethod, FinderLiveLotteryClaimMethod;

@interface FinderLiveLotteryMethodItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemId;
@property (nonatomic) unsigned int lotteryDuration;
@property (retain, nonatomic) NSString *lotteryDescription;
@property (retain, nonatomic) FinderLiveLotteryAttendMethod *method;
@property (nonatomic) unsigned int lotteryWinnerCnt;
@property (nonatomic) unsigned long long settingFlag;
@property (retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusWording;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod;

+ (void)initialize;

@end
