@class FinderJoinLiveVisibleInfo, FinderLiveRewardQuotaSwitchInfo, FinderLiveGlobalRewardLevel, FinderLiveCreatorService;

@interface FinderLivePersonalCenterPrepareInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveGlobalRewardLevel *rewardLevelInfo;
@property (retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *rewardQuotaSwitch;
@property (nonatomic) BOOL hasShoppingOrder;
@property (nonatomic) BOOL hasPurchasedContent;
@property (nonatomic) BOOL hasLotteryWonRecord;
@property (retain, nonatomic) FinderJoinLiveVisibleInfo *joinliveVisibleInfo;
@property (nonatomic) BOOL enableRecentWatch;
@property (nonatomic) BOOL enableReservedNoticeRecord;
@property (retain, nonatomic) FinderLiveCreatorService *service;

+ (void)initialize;

@end
