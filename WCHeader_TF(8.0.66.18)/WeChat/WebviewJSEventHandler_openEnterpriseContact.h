@class NSString;

@interface WebviewJSEventHandler_openEnterpriseContact : WebviewJSEventHandlerBase <MMWebViewDelegate, PBMessageObserverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)dealloc;
- (void)webViewReturn:(id)a0;
- (void)onWebViewWillClose:(id)a0;

@end
