@interface AWELivePreStreamAnchorGuidePointElement : AWELiveLeftBaseElement {
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ displayElementConfig;
    void /* unknown type, empty encoding */ guidePointConfig;
    void /* unknown type, empty encoding */ showTimer;
    void /* unknown type, empty encoding */ requestTimer;
    void /* unknown type, empty encoding */ api;
}

+ (BOOL)shouldActivateElement;

- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)preloadElement;
- (void)viewDidDisposed;
- (void)onAnchorGuidePointClicked;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;

@end
