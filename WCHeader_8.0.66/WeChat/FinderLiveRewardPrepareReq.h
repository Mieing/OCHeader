@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveRewardPrepareReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *rewardFinderUsername;
@property (retain, nonatomic) NSString *incomeUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *rewardProductId;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int prepareRewardProductCount;
@property (nonatomic) unsigned int sceneFlag;
@property (retain, nonatomic) NSData *businessBuff;

+ (void)initialize;

@end
