@class JSEvent;

@interface WebViewJSEventHandler_addGoodsToFav : WebviewJSEventHandlerBase

@property (retain, nonatomic) JSEvent *m_curEvent;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showAlertView;
- (void)onCancelFav;
- (void)onConfirmFav;
- (void).cxx_destruct;

@end
