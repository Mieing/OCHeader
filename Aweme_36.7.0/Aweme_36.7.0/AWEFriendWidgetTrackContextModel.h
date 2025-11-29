@class NSString;

@interface AWEFriendWidgetTrackContextModel : NSObject <AWEIMWidgetTrackContextProtocol>

@property (copy, nonatomic) NSString *fromWidget;
@property (copy, nonatomic) NSString *widgetSize;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *streakStatus;
@property (copy, nonatomic) NSString *streakMonsterStatus;

- (void).cxx_destruct;

@end
