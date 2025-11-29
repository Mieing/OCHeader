@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveLotteryFillClaimInfoRequest_ClaimInfo;

@interface FinderLiveLotteryFillClaimInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) FinderLiveLotteryFillClaimInfoRequest_ClaimInfo *claiminfo;
@property (nonatomic) BOOL isMilestoneLottery;

+ (void)initialize;

@end
