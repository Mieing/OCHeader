@class MMWebAddContactView;

@interface WebviewJSEventHandler_addContact : WebviewJSEventHandlerBase <WebAddContactDelegate> {
    MMWebAddContactView *m_jsAddContactView;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)OnWebAddContact:(int)a0 Msg:(id)a1 CallBack:(id)a2;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (void)dealloc;
- (void).cxx_destruct;

@end
