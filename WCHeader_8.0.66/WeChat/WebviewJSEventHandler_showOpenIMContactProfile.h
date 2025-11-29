@interface WebviewJSEventHandler_showOpenIMContactProfile : WebviewJSEventHandlerBase

@property (nonatomic) unsigned long long scene;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showOpenIMContactInfoForThirdAppViewControllerWithDataUrl:(id)a0 targetContact:(id)a1 spamWording:(id)a2 spamContext:(id)a3 bPopVCWhenLeave:(BOOL)a4 halfScreen:(BOOL)a5;
- (void)showOpenIMContactInfoForThirdAppErrorTipWitherrMsg:(id)a0 bPopVCWhenLeave:(BOOL)a1;

@end
