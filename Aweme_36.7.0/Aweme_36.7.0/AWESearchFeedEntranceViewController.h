@interface AWESearchFeedEntranceViewController : AWEBaseController

- (void)setupNotification;
- (void)resetSearchCountInAppLaunchSession;
- (void)viewDidLoad;
- (void)appDidEnterBackground;

@end
