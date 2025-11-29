@interface WAJSEventHandler_openChatToolAllPage : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate> {
    void /* unknown type, empty encoding */ sessionSelectController;
    void /* unknown type, empty encoding */ waitingDismissSessionSelectController;
}

- (void)handleJSEvent:(id)a0;
- (void)OnSelectSessions:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
