@class JSEvent, BrandTemplateMsgAuthLogic, NSString;

@interface WebviewJSEventHandler_requestSubscribeMessage : WebviewJSEventHandlerBase <BrandTemplateMsgAuthLogicDelegate>

@property (retain, nonatomic) JSEvent *event;
@property (retain, nonatomic) BrandTemplateMsgAuthLogic *logic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onSubscriptionMessageLogic:(id)a0 finishedWithResult:(id)a1 extInfo:(id)a2 success:(BOOL)a3 errorCode:(long long)a4 errorMessage:(id)a5;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)a0;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)a0;
- (id)viewControllerToShowPageSheet;
- (id)pageSheetLifecyclePlugin;
- (void).cxx_destruct;

@end
