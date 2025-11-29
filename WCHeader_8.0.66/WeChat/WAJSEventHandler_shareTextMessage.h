@interface WAJSEventHandler_shareTextMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate> {
    void /* unknown type, empty encoding */ forwardMessageLogic;
    void /* unknown type, empty encoding */ isToSpecificContact;
}

- (id)getCurrentViewController;
- (void)handleJSEvent:(id)a0;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
