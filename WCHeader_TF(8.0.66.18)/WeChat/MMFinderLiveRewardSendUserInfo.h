@class FinderLiveRewardGiftExtInfo, MMFinderLiveRewardGiftItem;

@interface MMFinderLiveRewardSendUserInfo : NSObject

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) FinderLiveRewardGiftExtInfo *rewardExtInfo;
@property (nonatomic) long long currentBalance;
@property (nonatomic) BOOL wecoinBalanceUpdated;
@property (nonatomic) unsigned long long sourceSendMoreBubbleHost;

- (void).cxx_destruct;

@end
