@class NSString, H5GameViewController;

@interface WebviewJSEventHandler_openWKWebView : WebviewJSEventHandlerBase <H5GameViewControllerDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate> {
    BOOL m_bFullScreen;
    NSString *m_orientation;
    NSString *m_url;
    NSString *m_gameAppid;
}

@property (weak, nonatomic) H5GameViewController *gameVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)enterGame;
- (void)internalEnterGame;
- (void)onGameViewClosed;
- (void)webViewReturn:(id)a0;
- (void).cxx_destruct;

@end
