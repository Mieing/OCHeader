@interface AWELivePreStreamChannelGuideButtonElement : AWELiveLeftBaseElement <AWELiveCommonSceneMessage> {
    void /* unknown type, empty encoding */ liveTabGuideData;
    void /* unknown type, empty encoding */ guideScene;
    void /* unknown type, empty encoding */ showTimer;
    void /* unknown type, empty encoding */ distance;
    void /* unknown type, empty encoding */ cellShowing;
    void /* unknown type, empty encoding */ insertModel;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ component;
}

- (void)viewController_viewDidDisAppear;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)application_DidEnterBackground;
- (void)liveTabGuideViewClicked;
- (void)showComponentWithPitayaMessage:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (unsigned long long)priority;
- (void)reset;

@end
