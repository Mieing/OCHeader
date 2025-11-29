@class BaseRequest, FinderBaseRequest, FinderLiveAudienceRewardQuota;

@interface FinderLiveModConsumptionQuotaReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderLiveAudienceRewardQuota *rewardQuota;

+ (void)initialize;

@end
