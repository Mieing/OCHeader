@class NSString, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLiveRewardRecievedComboObject : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *rewardUserName;
@property (retain, nonatomic) NSString *rewardComboId;
@property (retain, nonatomic) NSString *rewardProductId;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) NSMutableArray *rewardRecievedAppMsgInfoQueue;
@property (nonatomic) unsigned int closeWaitBeginTime;
@property (nonatomic) unsigned int lastDisplayGiftCount;
@property (nonatomic) BOOL isTopestPriority;

- (id)initWithLiveTaskId:(id)a0 firstRewardAppMsgInfo:(id)a1;
- (void)addRewardAppMsgInfo:(id)a0;
- (void).cxx_destruct;

@end
