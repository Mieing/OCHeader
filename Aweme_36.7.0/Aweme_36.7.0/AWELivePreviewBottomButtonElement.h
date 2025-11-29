@interface AWELivePreviewBottomButtonElement : AWELiveLeftBaseElement <AWEUserMessage, AWELivePreStreamEnterRoomDataProvider, AWELivePreStreamBusinessCoreDataProtocol> {
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ startTimer;
    void /* unknown type, empty encoding */ showTimer;
    void /* unknown type, empty encoding */ retryTimer;
    void /* unknown type, empty encoding */ distance;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ isShowing;
    void /* unknown type, empty encoding */ previewButtonData;
    void /* unknown type, empty encoding */ waitClearPreviewButtonData;
    void /* unknown type, empty encoding */ lastPreviewButtonData;
    void /* unknown type, empty encoding */ isClickArea;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ isInPage;
}

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisAppear;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (void)showBottomButtonWithContentText:(id)a0 firstTime:(BOOL)a1;
- (void)liveBottomButtonClicked;
- (id)provideCoreDataForEvent:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (unsigned long long)priority;
- (void)reset;

@end
