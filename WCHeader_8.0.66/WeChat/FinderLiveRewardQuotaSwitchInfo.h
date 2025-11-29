@class NSString, NSMutableArray, FinderLiveAudienceRewardQuota;

@interface FinderLiveRewardQuotaSwitchInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int canShow;
@property (retain, nonatomic) NSMutableArray *defaultQuotas;
@property (retain, nonatomic) FinderLiveAudienceRewardQuota *rewardQuota;
@property (retain, nonatomic) NSString *detailPageUrl;
@property (retain, nonatomic) NSMutableArray *historyRewardQuota;
@property (retain, nonatomic) NSString *historyRewardQuotaWording;

+ (void)initialize;

@end
