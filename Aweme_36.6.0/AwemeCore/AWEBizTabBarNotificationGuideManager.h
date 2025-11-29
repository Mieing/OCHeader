@class AWEUINotificationBarView;

@interface AWEBizTabBarNotificationGuideManager : NSObject

@property (retain, nonatomic) AWEUINotificationBarView *notificationBarView;

+ (id)sharedManager;

- (BOOL)isPushGuideNotificationBarShowing;
- (void)hideNotificationBarViewWithHidden:(BOOL)a0;
- (void)setupNotification;
- (void)p_showNotificationBarIfNeeded;
- (void)dismissNotificationBarViewIfNeed;
- (void)notificationBarViewEnterURL:(unsigned long long)a0;
- (void)showNotificationBarIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
