@class MMFinderLiveRealNameFriendLikeNotificationView, MMFinderLiveRealNameFriendLikeCommentDataItem;

@interface MMFinderLiveRealNameFriendLikeNotifyStyleCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

@property (retain, nonatomic) MMFinderLiveRealNameFriendLikeNotificationView *notificationView;
@property (readonly, nonatomic) MMFinderLiveRealNameFriendLikeCommentDataItem *friendLikeDataItem;

- (id)initWithCellFrame:(id)a0;
- (void)prepareForReuse;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)layoutNotificationView;
- (void)tapNotification;
- (void)setCellFrame:(id)a0;
- (id)getSelfAccessibility;
- (id)finderLiveTask;
- (void).cxx_destruct;

@end
