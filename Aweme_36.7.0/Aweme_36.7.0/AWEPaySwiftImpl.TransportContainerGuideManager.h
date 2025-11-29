@interface AWEPaySwiftImpl.TransportContainerGuideManager : AWEBaseController <AWEPaySwiftImpl.TransportContainerGuideManagerProtocol, AWEYAPTransportComponentProtocol> {
    void /* unknown type, empty encoding */ hasNewUserGuide;
    void /* unknown type, empty encoding */ hasDesktopShortcutGuide;
}

- (BOOL)canShowDesktopShortcutGuide;
- (BOOL)showGuideIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
