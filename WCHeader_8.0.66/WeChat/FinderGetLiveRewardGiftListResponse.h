@class FanClubPanelInfo, SwitchSkinGiftConfig, FinderLiveGlobalRewardLevel, NSData, PackageResourceInfo, NSMutableArray, BaseResponse;

@interface FinderGetLiveRewardGiftListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *giftList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int comboBatchSize;
@property (nonatomic) unsigned int comboBatchTimeoutMs;
@property (retain, nonatomic) FinderLiveGlobalRewardLevel *rewardLevelInfo;
@property (retain, nonatomic) NSMutableArray *giftGroupList;
@property (retain, nonatomic) NSMutableArray *voteBattleGiftList;
@property (retain, nonatomic) PackageResourceInfo *packageResource;
@property (retain, nonatomic) FanClubPanelInfo *fanClubPanelInfo;
@property (retain, nonatomic) SwitchSkinGiftConfig *switchSkinGiftConfig;

+ (void)initialize;

@end
