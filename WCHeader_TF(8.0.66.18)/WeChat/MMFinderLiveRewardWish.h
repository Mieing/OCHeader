@class MMFinderLiveRewardGiftItem;

@interface MMFinderLiveRewardWish : NSObject

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (nonatomic) unsigned long long targetCount;
@property (nonatomic) unsigned long long currentCount;

+ (id)createInstanceFromLiveRewardWish:(id)a0;
+ (id)createInstanceFromLiveRewardWishItem:(id)a0;

- (id)toLiveRewardWish;
- (id)description;
- (void).cxx_destruct;

@end
