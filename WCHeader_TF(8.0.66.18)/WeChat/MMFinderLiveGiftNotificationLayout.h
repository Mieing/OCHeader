@class NSString, MMLiveRewardGiftNotificationContainerView;

@interface MMFinderLiveGiftNotificationLayout : NSObject

@property (retain, nonatomic) NSString *comboId;
@property (retain, nonatomic) NSString *recipientUserName;
@property (nonatomic) struct CGPoint { double x; double y; } notificationOffset;
@property (nonatomic) long long notificationOrientation;
@property (weak, nonatomic) MMLiveRewardGiftNotificationContainerView *notificationSuperView;
@property (nonatomic) BOOL isOtherAnchor;
@property (nonatomic) BOOL isOtherRoomAudience;
@property (nonatomic) unsigned long long layoutMode;

- (void).cxx_destruct;

@end
