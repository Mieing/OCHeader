@class NSString, JSEvent, WCCardAddHelper;

@interface WebviewJSEventHandler_batchAddCard : WebviewJSEventHandlerBase <WCCardAddHelperDelegate> {
    JSEvent *_jsEvent;
    WCCardAddHelper *_addHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)getViewController;
- (void)onAddSuccess:(id)a0;
- (void)onAddFail:(id)a0;
- (void)onAddCancel;
- (void).cxx_destruct;

@end
