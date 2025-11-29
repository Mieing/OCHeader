@class MMWebAddContactView;

@interface WAJSEventHandler_private_addContact : WAJSEventHandler_BaseEvent <WebAddContactDelegate> {
    MMWebAddContactView *_addContactView;
}

- (void)handleJSEvent:(id)a0;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)removeAllAddContactView;
- (void)OnWebAddContact:(int)a0 Msg:(id)a1 CallBack:(id)a2;
- (void)OnWebAddContactReturn;
- (id)currentViewController;
- (void).cxx_destruct;

@end
