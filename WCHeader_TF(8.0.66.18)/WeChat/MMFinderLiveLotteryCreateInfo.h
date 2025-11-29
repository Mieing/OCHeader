@class FinderLiveLotteryAttendMethod, NSString, FinderLiveLotteryPrizeMethod, MMFinderLiveTaskId, FinderLiveLotteryClaimMethod;

@interface MMFinderLiveLotteryCreateInfo : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (nonatomic) unsigned int lotteryDuration;
@property (retain, nonatomic) NSString *lotteryDescription;
@property (nonatomic) unsigned int lotteryWinnerCnt;
@property (retain, nonatomic) FinderLiveLotteryAttendMethod *method;
@property (retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod;
@property (nonatomic) unsigned long long settingFlag;
@property (nonatomic) unsigned int methodId;
@property (nonatomic) unsigned int wecoinCountToPay;

+ (id)CreateWithLiveTaskId:(id)a0 lotteryMethodItem:(id)a1;

- (id)initWithLiveTaskId:(id)a0;
- (id)genLotteryMethodItem;
- (id)description;
- (void).cxx_destruct;

@end
