@interface AWELivePreStreamFollowButtonElement : AWELiveLeftBaseElement <AWEUserMessage, AWELivePreStreamEnterRoomDataProvider> {
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ showTimer;
    void /* unknown type, empty encoding */ startTimer;
    void /* unknown type, empty encoding */ distance;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ hasChangeTab;
    void /* unknown type, empty encoding */ isClickArea;
}

+ (BOOL)shouldActivateElement;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)application_willEnterForeground;
- (void)viewController_viewDidDisAppear;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)showFollowButton;
- (void)liveFollowGuideViewClicked;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (unsigned long long)priority;
- (void)reset;

@end
