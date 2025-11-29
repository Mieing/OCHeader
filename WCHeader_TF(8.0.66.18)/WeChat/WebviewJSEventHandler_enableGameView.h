@class NSString;

@interface WebviewJSEventHandler_enableGameView : WebviewJSEventHandlerBase <H5GameViewControllerDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate> {
    int m_gameOrientation;
    NSString *m_url;
    NSString *m_gameAppid;
    BOOL m_hideBottomBar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)enterGame;
- (void)onGameViewClosed;
- (void)webViewReturn:(id)a0;
- (void).cxx_destruct;

@end
