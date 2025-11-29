@class NSString, NSArray, MMFinderLiveRewardGiftItem, MMFinderLiveRewardAppMsgInfo, MMFinderLiveGiftNotificationLayout;

@interface MMFinderLiveGiftNotificationItem : NSObject

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *avatarUri;
@property (retain, nonatomic) NSArray *badgeInfos;
@property (nonatomic) unsigned int giftCount;
@property (nonatomic) BOOL sentByMe;
@property (nonatomic) BOOL isBatchReward;
@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo;
@property (retain, nonatomic) MMFinderLiveGiftNotificationLayout *notificationLayout;
@property (readonly, nonatomic) BOOL hasFullPagAnimation;
@property (readonly, nonatomic) unsigned int globalBadgeRank;
@property (readonly, nonatomic) unsigned int fansGroupRank;
@property (readonly, nonatomic) NSString *fansGroupName;

- (id)initWithGiftItem:(id)a0 rewardAppMsgInfo:(id)a1;
- (void).cxx_destruct;

@end
