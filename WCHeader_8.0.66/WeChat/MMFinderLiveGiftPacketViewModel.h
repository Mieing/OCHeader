@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId;

@interface MMFinderLiveGiftPacketViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (nonatomic) unsigned long long productCount;
@property (nonatomic) BOOL isSelected;

- (id)initWithTaskId:(id)a0 giftItem:(id)a1;
- (void).cxx_destruct;

@end
