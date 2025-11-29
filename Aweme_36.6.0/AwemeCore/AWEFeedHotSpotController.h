@class NSString;

@interface AWEFeedHotSpotController : AWEBaseController <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)enableForceLoadMore;
- (void)p_addObserver;
- (void)p_cacheAwemesForHotSpotChannel;
- (BOOL)enableHotspotWidgetGuide;
- (void)p_configDiscoverDLoggerManager;
- (void)p_handleAppWillResignActive;
- (void)p_setIsPlayStartedInXTabHotspot:(id)a0;
- (void)p_tryWidgetGuide;
- (BOOL)p_shouldAvoidOtherLogic;
- (void)p_cleanHotSpotChannelAwemeCache;
- (BOOL)p_enableFormatLogger;
- (BOOL)p_enableFormatLoggerInstance;
- (void)videoStartPlay:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
