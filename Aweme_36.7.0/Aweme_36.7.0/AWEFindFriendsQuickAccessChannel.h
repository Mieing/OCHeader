@class AWEFindFriendsQuickAccessContext;

@interface AWEFindFriendsQuickAccessChannel : NSObject

@property (retain, nonatomic) AWEFindFriendsQuickAccessContext *context;

+ (id)channelWithContext:(id)a0;
+ (id)type;

- (BOOL)canShow;
- (void)onSelected;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
