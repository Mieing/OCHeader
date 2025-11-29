@class NSString, MMFinderLiveRewardAppMsgInfo, MMFinderLiveRewardGiftItem, FinderLiveGift_MultiAnimationItem;

@interface MMFinderLiveGiftPlayItem : NSObject

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) BOOL sentByMe;
@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) NSString *animationId;
@property (retain, nonatomic) FinderLiveGift_MultiAnimationItem *multiAnimationItem;
@property (nonatomic) long long playAttackGiftItemIndex;

- (id)initWithGiftItem:(id)a0 rewardAppMsgInfo:(id)a1 comboId:(id)a2 sentByMe:(BOOL)a3;
- (void)updateWithResourceUrl:(id)a0 animationId:(id)a1;
- (void).cxx_destruct;

@end
