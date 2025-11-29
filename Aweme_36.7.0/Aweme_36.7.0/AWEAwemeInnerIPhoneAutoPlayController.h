@class AWEFeedIPhoneAutoPlayManager;

@interface AWEAwemeInnerIPhoneAutoPlayController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEFeedIPhoneAutoPlayManager *autoPlayManager;
@property (nonatomic) BOOL isBackground;

- (id)getCurrentAweme;
- (BOOL)isSpecialCard:(id)a0;
- (void)addNotificationIfNeeded;
- (id)realReferString;
- (void)handleVideoDidPlayFinshNotification:(id)a0;
- (BOOL)blockAutoPlayInPureMode;
- (BOOL)checkIsUserInteracting;
- (BOOL)showAutoPlayScrollToNextIfNeeded;
- (int)getCommerceStandingTime;
- (BOOL)isAFDRichContentContainer;
- (long long)feedAutoPlayStyle;
- (void)showToastIfNeeded;
- (long long)feedAutoPlaySwitchStyle;
- (BOOL)checkIsOtherPopupsShow;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
