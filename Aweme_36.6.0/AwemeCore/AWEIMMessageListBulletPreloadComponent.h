@class NSString;
@protocol IESIMBulletContainerManagerProtocol, IESIMBulletPerformanceTrackerInterface;

@interface AWEIMMessageListBulletPreloadComponent : AWEIMComponentBase <AWEIMMessageListBulletPreloadInterface, AWEIMMessageListDataAction, AWEIMMessageTableViewAction>

@property (weak, nonatomic) id<IESIMBulletContainerManagerProtocol> bulletContainerManager;
@property (weak, nonatomic) id<IESIMBulletPerformanceTrackerInterface> performanceTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)hostVC_afterFirstRender;
- (void)tableViewAllDidEndScroll:(id)a0;
- (BOOL)p_shouldSyncMainThreadWithScene:(long long)a0;
- (BOOL)tryPreloadBulletCardWithContext:(id)a0;
- (void)p_tryPreloadBulletCardWithScene:(long long)a0 messageGroupArray:(id)a1 direction:(long long)a2;
- (void)p_tryPreloadBulletCardWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void).cxx_destruct;

@end
