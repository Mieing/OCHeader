@class NSString, WCAccountBindPhoneControlLogic;

@interface WebviewJSEventHandler_bindPhone : WebviewJSEventHandlerBase <WCAccountBindPhoneControlLogicDelegate> {
    WCAccountBindPhoneControlLogic *m_bindLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (BOOL)hasBinded;
- (void)bindPhoneReturn;
- (void).cxx_destruct;

@end
