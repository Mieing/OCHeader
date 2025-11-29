@class WCCardAddHelper;

@interface WAJSEventHandler_addCard : WAJSEventHandler_BaseEvent {
    WCCardAddHelper *_addHelper;
}

- (void)handleJSEvent:(id)a0;
- (id)getViewController;
- (void)onAddSuccess:(id)a0;
- (void)onAddFail:(id)a0;
- (void)onAddCancel;
- (void).cxx_destruct;

@end
