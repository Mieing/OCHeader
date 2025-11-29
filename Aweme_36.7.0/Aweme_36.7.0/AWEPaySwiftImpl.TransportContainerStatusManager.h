@interface AWEPaySwiftImpl.TransportContainerStatusManager : AWEBaseController <AWEYAPTransportComponentProtocol, AWEPaySwiftImpl.TransportContainerStatusManagerProtocol> {
    void /* unknown type, empty encoding */ previousScreenBrightness;
    void /* unknown type, empty encoding */ previousKeepAlive;
}

- (void)highlightScreenBrightnessIfNeed;
- (void)viewDidAppear;
- (void)didBecomeActive;
- (void)willResignActive;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
