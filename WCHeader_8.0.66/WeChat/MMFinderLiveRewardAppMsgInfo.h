@class FinderLiveRewardGiftExtInfo, NSString, NSArray, MMFinderLiveRewardGiftItem, FinderLiveGestureInfo, WCFinderContact, NSMutableArray, NSMutableSet;

@interface MMFinderLiveRewardAppMsgInfo : NSObject

@property (nonatomic) unsigned long long appMsgSeq;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *rewardUserName;
@property (retain, nonatomic) NSString *rewardRecipientUserName;
@property (retain, nonatomic) NSString *rewardProductId;
@property (retain, nonatomic) WCFinderContact *fromContact;
@property (retain, nonatomic) WCFinderContact *toContact;
@property (retain, nonatomic) NSString *msgContent;
@property (retain, nonatomic) NSArray *fromUserBadgeInfos;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (nonatomic) unsigned int rewardProductCount;
@property (nonatomic) unsigned int rewardAmountInWecoin;
@property (nonatomic) unsigned int comboProductCount;
@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardGiftExtInfo;
@property (retain, nonatomic) FinderLiveGestureInfo *gestureInfo;
@property (retain, nonatomic) NSMutableArray *giftRandomItemList;
@property (nonatomic) double taskedBonusMultiplier;
@property (retain, nonatomic) NSArray *attackGiftItemList;
@property (readonly, nonatomic) BOOL isBatchReward;
@property (readonly, nonatomic) unsigned int rewardGiftDropBatchSize;
@property (nonatomic) BOOL isTopestPriority;
@property (readonly, nonatomic) NSArray *attackFinderUsernameList;
@property (readonly, nonatomic) NSMutableSet *attackGiftItemAnimationIdSet;
@property (retain, nonatomic) NSMutableSet *downloadedAttackGiftItemAnimationIds;
@property (nonatomic) BOOL showAttackEffectUpgradeSubNotification;
@property (nonatomic) unsigned int extraPKValue;
@property (retain, nonatomic) NSArray *pkValueExtraItem;

- (id)initWithRewardAppMsgInfo:(id)a0 appMsgSeq:(unsigned long long)a1 fromFinderLiveContact:(id)a2 toFinderLiveContact:(id)a3;
- (id)initWithFromContact:(id)a0 toContact:(id)a1 appMsgSeq:(unsigned long long)a2 msgContent:(id)a3 rewardProductId:(id)a4 giftItem:(id)a5 rewardProductCount:(unsigned int)a6 rewardAmountInWecoin:(unsigned int)a7 comboProductCount:(unsigned int)a8 comboId:(id)a9 fromUserBadgeInfos:(id)a10 rewardGiftExtInfo:(id)a11 gestureInfo:(id)a12 giftRandomItemList:(id)a13 type:(unsigned long long)a14 taskedBonusMultiplier:(double)a15 attackGiftItemList:(id)a16;
- (id)initWithNotifyBannerRewardAppMsgInfo:(id)a0 appMsgSeq:(unsigned long long)a1 toContact:(id)a2;
- (void)copyFromRewardAppMsgInfo:(id)a0;
- (id)genFakeComboIdForFreeGift;
- (void)replaceGiftItem:(id)a0;
- (void)updateGiftRandomItemList:(id)a0;
- (void)updatePKValueExtraItem:(id)a0;
- (void)updateGiftAttackItemList:(id)a0;
- (BOOL)isSentByMe;
- (BOOL)isSentToMe;
- (BOOL)isLocalNotifyBanner;
- (BOOL)isGiftWallRewardMsg;
- (BOOL)isAllResourceDownloaded;
- (id)description;
- (void).cxx_destruct;

@end
