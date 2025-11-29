@class MMFinderLiveGiftNotificationItem, NSString, MMFinderLiveRewardAppMsgInfo, MMFinderLiveGiftPlayItem;

@interface MMFinderLiveGiftComboItem : NSObject

@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsgInfo;
@property (retain, nonatomic) MMFinderLiveGiftNotificationItem *notificationItem;
@property (retain, nonatomic) MMFinderLiveGiftPlayItem *playItem;
@property (nonatomic) BOOL isBatchFinished;
@property (nonatomic) long long displayingSeconds;
@property (nonatomic) long long totalPlayCount;
@property (nonatomic) long long remainsPlayCount;
@property (nonatomic) BOOL manualDelete;

- (void).cxx_destruct;

@end
