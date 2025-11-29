@class NSString, JSEvent;

@interface WebviewJSEventHandler_getH5PrepayRequest : WebviewJSEventHandlerBase <PBMessageObserverDelegate, WXCustomWebViewControllerDelegate, MMUseCaseCallback> {
    NSString *_jsInjectCode;
    JSEvent *m_jsEvent;
    BOOL m_isNativeCashier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)sendResult:(BOOL)a0 jsEvent:(id)a1;
- (void)getJumpUrl:(id)a0 complete:(id /* block */)a1;
- (void)doInjectJS;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onWebViewDidFinishLoad:(id)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
