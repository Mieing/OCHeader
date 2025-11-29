@protocol MMLiveRewardGiftNotificationContainerViewDelegate;

@interface MMLiveRewardGiftNotificationContainerView : MMUIView

@property (weak, nonatomic) id<MMLiveRewardGiftNotificationContainerViewDelegate> containerDelegate;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) BOOL expandForSubNotification;

- (void).cxx_destruct;

@end
