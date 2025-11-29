@class FinderLiveLotteryAttendMethod, BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveLotteryClaimMethod, FinderLiveLotteryPrizeMethod;

@interface FinderLiveCreateLotteryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long objectNonceId;
@property (nonatomic) unsigned int lotteryDuration;
@property (retain, nonatomic) NSString *lotteryDescription;
@property (retain, nonatomic) FinderLiveLotteryAttendMethod *method;
@property (nonatomic) unsigned int lotteryWinnerCnt;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long settingFlag;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod;
@property (nonatomic) unsigned int lotteryMethodId;
@property (retain, nonatomic) FinderLiveLotteryPrizeMethod *prizeMethod;

+ (void)initialize;

@end
