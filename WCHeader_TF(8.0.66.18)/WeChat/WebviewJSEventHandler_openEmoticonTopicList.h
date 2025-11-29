@class JSEvent, StoreEmoticonTopicProxyLogic;

@interface WebviewJSEventHandler_openEmoticonTopicList : WebviewJSEventHandlerBase {
    JSEvent *m_event;
}

@property (retain, nonatomic) StoreEmoticonTopicProxyLogic *proxyLogic;

+ (id)dictionForBannerSet:(id)a0;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)handleWithParams:(id)a0 AndFromViewController:(id)a1 extrance:(int)a2;
- (BOOL)handleWithParams:(id)a0 AndNavigationController:(id)a1 extrance:(int)a2;
- (BOOL)handleWithParams:(id)a0 AndFromViewController:(id)a1 AndFallBackNavigationController:(id)a2 extrance:(int)a3;
- (id)viewControllerWithParams:(id)a0 extrance:(int)a1;
- (id)genBannerSetFromParam:(id)a0;
- (void)endWithOk;
- (void)endWithFail;
- (void).cxx_destruct;

@end
