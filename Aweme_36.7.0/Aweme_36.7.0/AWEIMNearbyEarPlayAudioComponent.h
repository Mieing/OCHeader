@class NSString;

@interface AWEIMNearbyEarPlayAudioComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)hostVC_afterFirstRender;
- (void)hostVC_viewWillDisappear;
- (void)p_viewDidAppear;
- (void)handleAudioDidEndPlayNotification:(id)a0;
- (void)p_switchProximityMonitor:(BOOL)a0;

@end
