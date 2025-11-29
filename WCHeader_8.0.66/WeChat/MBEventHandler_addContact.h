@interface MBEventHandler_addContact : MBEventHandlerBaseAsync <WebAddContactDelegate>

- (void)invoke:(id)a0;
- (void)removeAllAddContactView;
- (void)OnWebAddContact:(int)a0 Msg:(id)a1 CallBack:(id)a2;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (id)apiName;
- (BOOL)invokeInMainThread;

@end
