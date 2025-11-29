@interface AWEFCMessesController : AWEBaseController

+ (Class)aAWEHPNoticeRefreshFeedAdapterClass;

- (void)refreshFeed;
- (id)mainAppWindow;
- (void)viewControllerTransitionNotification:(id)a0;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)onAwemeDeleteNotification:(id)a0;
- (void)didChangedLanguage;
- (void)didVideoStartPlay:(id)a0;
- (id)aAWEHPNoticeRefreshFeedAdapter;
- (void)onAwemePostExitNotification:(id)a0;
- (void)onAwemeMarkDislikeCanWithdrawNotification:(id)a0;
- (void)onAwemeVideoPlayGuideViewTouched:(id)a0;
- (void)didReceiveFeedTableViewControllerSyncPlayStateNotification:(id)a0;
- (void)newAnchorCame:(id)a0;
- (void)p_restoreFeedContainerPlayNotification:(id)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
