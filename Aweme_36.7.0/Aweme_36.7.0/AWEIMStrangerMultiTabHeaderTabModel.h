@class NSString;

@interface AWEIMStrangerMultiTabHeaderTabModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long unreadCount;
@property (nonatomic) BOOL hasUnreadDot;
@property (copy, nonatomic) NSString *trackerTabName;

- (void).cxx_destruct;

@end
